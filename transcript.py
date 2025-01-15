import whisper
import os
import glob
import re
import torch
import openai
from pydub import AudioSegment

openai.api_key = os.getenv("OPENAI_API_KEY")

def transcribe_audio(audio_file):
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

    print("gpu available: ", torch.cuda.is_available())

    model = whisper.load_model("large", device=device)

    try:
        result = model.transcribe(audio_file)
    except RuntimeError as e:
        print(f"Error during transcription: {e}")
        raise
    return result

def save_transcript(transcript, output_file):
    with open(output_file, "w", encoding="utf-8") as f:
        for segment in transcript["segments"]:
            f.write(f"[{segment['start']:.2f} - {segment['end']:.2f}] {segment['text']}\n")

def summarize_with_gpt(text):
    try:
        response = openai.chat.completions.create(
            model="gpt-4o-mini",
            messages=[
                {"role": "system", "content": "You supposed to summarize the following meeting transcript. Output should have what was discussed and any action items or agreements. out put should be divided into sections for clear reading and navigating with headlines like 'Questions, HR agreements, Agreed meeting and dates etc..'. Summary should also be in finnish language."},
                {"role": "user", "content": text}
            ]
        )
    except Exception as e:
        print(f"Error during summarization: {e}")
        raise
    return response.choices[0].message.content
    
def peak_normalize(segment, headroom_db=1.0):
    peak = segment.max_dBFS
    return segment.apply_gain(-peak - headroom_db)

def combine_audio():
    recordings_path = r"C:/Users/valle/Desktop/recordings"

    if not(os.path.exists(recordings_path)):
        os.makedirs(recordings_path)

    # Etsitään kaikki .wav -tiedostot
    all_files = glob.glob(os.path.join(recordings_path, "*.wav"))

    # Käytetään regexiä tunnistamaan muodot: YYYY-MM-DD_HH-MM-SS_mic.wav ja YYYY-MM-DD_HH-MM-SS_speaker.wav
    pattern = re.compile(r"(\d{4}-\d{2}-\d{2}_\d{2}-\d{2}-\d{2})_(mic|speaker|combined)\.wav")

    # Tämä dict tallentaa tiedostot niiden päiväysajan perusteella
    recordings = {}

    for file_path in all_files:
        filename = os.path.basename(file_path)
        match = pattern.match(filename)
        if match:
            dt_string = match.group(1)  # Esim. "2025-01-12_06-01-25"
            audio_type = match.group(2) # "mic" tai "speaker"
            
            # Luodaan avain, jos ei vielä löydy
            if dt_string not in recordings:
                recordings[dt_string] = {}
            # Tallennetaan polku roolin mukaan
            recordings[dt_string][audio_type] = file_path
    
    # Otetaan uusin pvm-aika (ts. suurin merkkijono)
    latest_datetime = max(recordings.keys())

    #if one combined file already exists on the latest datetime, skip combining

    if os.path.exists(os.path.join(recordings_path, f"{latest_datetime}_combined.wav")):
        return os.path.join(recordings_path, f"{latest_datetime}_combined.wav")

    try:

        mic_file = recordings[latest_datetime].get("mic")
        speaker_file = recordings[latest_datetime].get("speaker")

        audio_mic = AudioSegment.from_file(mic_file, format="wav")
        audio_speaker = AudioSegment.from_file(speaker_file, format="wav")

        audio_mic = peak_normalize(audio_mic, 1.0)
        audio_speaker = peak_normalize(audio_speaker, 1.0)

        combined = audio_mic.overlay(audio_speaker)

        output_name = f"{latest_datetime}_combined.wav"
        output_path = os.path.join(recordings_path, output_name)
        combined.export(output_path, format="wav")

        #if new file is created, delete the old ones
        if os.path.exists(output_path):
            os.remove(mic_file)
            os.remove(speaker_file)

        return output_path
    
    except Exception as e:
        print(f"Error during combining audio: {e}")
        raise
    

if __name__ == "__main__":
    output_transcripts_path = r"C:/Users/valle/Desktop/transcripts"

    if not(os.path.exists(output_transcripts_path)):
        os.makedirs(output_transcripts_path)

    audio_file = combine_audio()

    mic_result = transcribe_audio(audio_file)

    #add date to the output file name
    audio_file_name = os.path.basename(audio_file)
    audio_file_name = audio_file_name.replace("_combined.wav", "_transcript.txt")

    print(f"Transcript for {audio_file_name}:")

    output_file = os.path.join(output_transcripts_path, audio_file_name)
    save_transcript(mic_result, output_file)

    with open(output_file, "r", encoding="utf-8") as f:
        transcript_text = f.read()

    summary = summarize_with_gpt(transcript_text)

    summary_file_name = os.path.basename(audio_file)
    summary_file_name = summary_file_name.replace("_combined.wav", "_summary.txt")

    summary_output_file = os.path.join(output_transcripts_path, summary_file_name)
    with open(summary_output_file, "w", encoding="utf-8") as f:
        f.write(summary)
    
    print(f"Transcript saved to: {output_file}")
    print(f"Summary saved to: {summary_output_file}")

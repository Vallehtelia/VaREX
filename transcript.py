import whisper
import os
import torch
import openai

openai.api_key = os.getenv("OPENAI_API_KEY")

def transcribe_audio(audio_file):
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

    print("gpu available: ", torch.cuda.is_available())

    model = whisper.load_model("base", device=device)

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
                {"role": "system", "content": "You supposed to summarize the following meeting transcript. Output should have what was discussed and any action items or agreements. out put should be divided into sections for clear reading and navigating with headlines like 'Questions, HR agreements, Agreed meeting and dates etc..'."},
                {"role": "user", "content": text}
            ]
        )
    except Exception as e:
        print(f"Error during summarization: {e}")
        raise
    return response.choices[0].message.content
    

if __name__ == "__main__":
    path_to_audio_files = "C:/Users/valle/Desktop/recordings/"
    output_transcripts_path = "C:/Users/valle/Desktop/transcripts/"
    mic_file_name = "mic.wav"
    #speaker_file_name = "speaker.wav"
    mic_file = os.path.join(path_to_audio_files, mic_file_name)
    #speaker_file = os.path.join(path_to_audio_files, speaker_file_name)

    os.makedirs(output_transcripts_path, exist_ok=True)

    mic_result = transcribe_audio(mic_file)
    #speaker_result = transcribe_audio(speaker_file)

    output_file = os.path.join(output_transcripts_path, "mic_transcript.txt")
    save_transcript(mic_result, output_file)
    #save_transcript(speaker_result, "speaker_transcript.txt")

    with open(output_file, "r", encoding="utf-8") as f:
        transcript_text = f.read()

    summary = summarize_with_gpt(transcript_text)
    summary_output_file = os.path.join(output_transcripts_path, "mic_summary.txt")
    with open(summary_output_file, "w", encoding="utf-8") as f:
        f.write(summary)
    
    print(f"Transcript saved to: {output_file}")
    print(f"Summary saved to: {summary_output_file}")

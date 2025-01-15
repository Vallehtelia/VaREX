import os
import glob
import re
from pydub import AudioSegment

# Polku kansioon, missä äänitiedostot ovat
recordings_path = r"C:/Users/valle/Desktop/recordings"

# Etsitään kaikki .wav -tiedostot
all_files = glob.glob(os.path.join(recordings_path, "*.wav"))

# Käytetään regexiä tunnistamaan muodot: YYYY-MM-DD_HH-MM-SS_mic.wav ja YYYY-MM-DD_HH-MM-SS_speaker.wav
pattern = re.compile(r"(\d{4}-\d{2}-\d{2}_\d{2}-\d{2}-\d{2})_(mic|speaker)\.wav")

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

mic_file = recordings[latest_datetime].get("mic")
speaker_file = recordings[latest_datetime].get("speaker")

# Ladataan tiedostot
audio_mic = AudioSegment.from_file(mic_file, format="wav")
audio_speaker = AudioSegment.from_file(speaker_file, format="wav")

mic_level = audio_mic.dBFS
speaker_level = audio_speaker.dBFS
gain_needed = mic_level - speaker_level
audio_speaker = audio_speaker.apply_gain(gain_needed)
# Yhdistetään niin, että molemmat starttaa samaan aikaan
combined = audio_mic.overlay(audio_speaker)

# Tallennetaan lopullinen yhdistetty tiedosto
output_name = f"{latest_datetime}_combined.wav"
output_path = os.path.join(recordings_path, output_name)
combined.export(output_path, format="wav")

print(f"Combined file saved at: {output_path}")

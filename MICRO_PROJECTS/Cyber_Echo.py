import os

print("Welcome to the text to voice cyber tool by THE_VKR")

while True:
    X = input("\nEnter your text which you want me to speak: ")
    
    if not X.strip():
        continue

    command = f'powershell -Command "Add-Type -AssemblyName System.Speech; (New-Object System.Speech.Synthesis.SpeechSynthesizer).Speak(\'{X}\')"'
    os.system(command)
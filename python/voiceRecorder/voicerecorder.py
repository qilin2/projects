#Program: Voice Recorder
#About  : Record an audio file based on the inputted time interval.
#Name   : Brandon Qilin Hung
#Date   : 07-09-2022

#Libraries
import sounddevice
from scipy.io.wavfile import write

# Variables
fs = 44100 # sample rate

second = int(input("Enter the Recording Time in second(s): "))

# Records Audio
print("Recording......\n")
record_voice=sounddevice.rec(int(second * fs), samplerate=fs, channels=2)
sounddevice.wait()

# Creates and saves the .wav file with recorded audio.
write("Recording.wav", fs, record_voice)
print("Recording Completed!") 
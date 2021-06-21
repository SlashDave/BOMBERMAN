/*
** EPITECH PROJECT, 2021
** B-YEP-400-COT-4-1-indiestudio-dodji.akuesson
** File description:
** Audio
*/

#ifndef AUDIO_HPP_
#define AUDIO_HPP_
#include "../base.hpp"

namespace Raylib
{
    /** Raylib::Audio
     * Base classe to manage Raylib'audio module
     **/
    
    class Audio
    {
    public:
        Audio();
        ~Audio();
        static void initAudioDevice(void);         // Initialize audio device and context
        static void closeAudioDevice(void);        // Close the audio device and context
        static bool isAudioDeviceReady(void);      // Check if audio device has been initialized successfully
        static void setMasterVolume(float volume); // Set master volume (listener)

        // Wave/Sound loading/unloading functions
        static Wave loadWave(const char *fileName);                                                        // Load wave data from file
        static Wave loadWaveFromMemory(const char *fileType, const unsigned char *fileData, int dataSize); // Load wave from memory buffer
        static Sound loadSound(const char *fileName);                                                      // Load sound from file
        static Sound loadSoundFromWave(Wave wave);                                                         // Load sound from wave data
        static void updateSound(Sound sound, const void *data, int samplesCount);                          // Update sound buffer with new data
        static void unloadWave(Wave wave);                                                                 // Unload wave data
        static void unloadSound(Sound sound);                                                              // Unload sound
        static bool exportWave(Wave wave, const char *fileName);                                           // Export wave data to file, returns true on success
        static bool exportWaveAsCode(Wave wave, const char *fileName);                                     // Export wave sample data to code (.h), returns true on success

        // Wave/Sound management functions
        static void playSound(Sound sound);                                               // Play a sound
        static void stopSound(Sound sound);                                               // Stop playing a sound
        static void pauseSound(Sound sound);                                              // Pause a sound
        static void resumeSound(Sound sound);                                             // Resume a paused sound
        static void playSoundMulti(Sound sound);                                          // Play a sound (using multichannel buffer pool)
        static void stopSoundMulti(void);                                                 // Stop any sound playing (using multichannel buffer pool)
        static int petSoundsPlaying(void);                                                // Get number of sounds playing in the multichannel
        static bool isSoundPlaying(Sound sound);                                          // Check if a sound is currently playing
        static void setSoundVolume(Sound sound, float volume);                            // Set volume for a sound (1.0 is max level)
        static void setSoundPitch(Sound sound, float pitch);                              // Set pitch for a sound (1.0 is base level)
        static void waveFormat(Wave *wave, int sampleRate, int sampleSize, int channels); // Convert wave data to desired format
        static Wave waveCopy(Wave wave);                                                  // Copy a wave to a new wave
        static void waveCrop(Wave *wave, int initSample, int finalSample);                // Crop a wave to defined samples range
        static float *loadWaveSamples(Wave wave);                                         // Load samples data from wave as a floats array
        static void unloadWaveSamples(float *samples);                                    // Unload samples data loaded with LoadWaveSamples()

        // Music management functions
        static Music loadMusicStream(const char *fileName);                                              // Load music stream from file
        static Music loadMusicStreamFromMemory(const char *fileType, unsigned char *data, int dataSize); // Load music stream from data
        static void unloadMusicStream(Music music);                                                      // Unload music stream
        static void playMusicStream(Music music);                                                        // Start music playing
        static bool isMusicPlaying(Music music);                                                         // Check if music is playing
        static void updateMusicStream(Music music);                                                      // Updates buffers for music streaming
        static void stopMusicStream(Music music);                                                        // Stop music playing
        static void pauseMusicStream(Music music);                                                       // Pause music playing
        static void resumeMusicStream(Music music);                                                      // Resume playing paused music
        static void setMusicVolume(Music music, float volume);                                           // Set volume for music (1.0 is max level)
        static void setMusicPitch(Music music, float pitch);                                             // Set pitch for a music (1.0 is base level)
        static float getMusicTimeLength(Music music);                                                    // Get music time length (in seconds)
        static float getMusicTimePlayed(Music music);                                                    // Get current music time played (in seconds)
        static int getSoundsPlaying(void);

        // AudioStream management functions
        static AudioStream initAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels); // Init audio stream (to stream raw audio pcm data)
        static void updateAudioStream(AudioStream stream, const void *data, int samplesCount);                       // Update audio stream buffers with data
        static void closeAudioStream(AudioStream stream);                                                            // Close audio stream and free memory
        static bool isAudioStreamProcessed(AudioStream stream);                                                      // Check if any audio stream buffers requires refill
        static void playAudioStream(AudioStream stream);                                                             // Play audio stream
        static void pauseAudioStream(AudioStream stream);                                                            // Pause audio stream
        static void resumeAudioStream(AudioStream stream);                                                           // Resume audio stream
        static bool isAudioStreamPlaying(AudioStream stream);                                                        // Check if audio stream is playing
        static void stopAudioStream(AudioStream stream);                                                             // Stop audio stream
        static void setAudioStreamVolume(AudioStream stream, float volume);                                          // Set volume for audio stream (1.0 is max level)
        static void setAudioStreamPitch(AudioStream stream, float pitch);                                            // Set pitch for audio stream (1.0 is base level)
        static void setAudioStreamBufferSizeDefault(int size);                                                       // Default size for new audio streams
    private:
    };

} // namespace Raylib

#endif /* !AUDIO_HPP_ */

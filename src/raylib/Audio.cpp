/*
** EPITECH PROJECT, 2021
** B-YEP-400-COT-4-1-indiestudio-dodji.akuesson
** File description:
** Audio
*/

#include "../../inc/raylib/Audio.hpp"

using namespace Raylib;

Audio::Audio(){};

Audio::~Audio(){};

void Audio::initAudioDevice(void)
{
    InitAudioDevice();
}

void Audio::closeAudioDevice(void)
{
    CloseAudioDevice();
}

bool Audio::isAudioDeviceReady(void)
{
    return (IsAudioDeviceReady());
}

void Audio::setMasterVolume(float volume)
{
    SetMasterVolume(volume);
}

Wave Audio::loadWave(const char *fileName)
{
    return (LoadWave(fileName));
}

Wave Audio::loadWaveFromMemory(const char *fileType, const unsigned char *fileData, int dataSize)
{
    return (LoadWaveFromMemory(fileType, fileData, dataSize));
}

Sound Audio::loadSound(const char *fileName)
{
    return (LoadSound(fileName));
}
Sound Audio::loadSoundFromWave(Wave wave)
{
    return LoadSoundFromWave(wave);
}
void Audio::updateSound(Sound sound, const void *data, int samplesCount)
{
    UpdateSound(sound, data, samplesCount);
}
void Audio::unloadWave(Wave wave)
{
    UnloadWave(wave);
}
void Audio::unloadSound(Sound sound)
{
    UnloadSound(sound);
}
bool Audio::exportWave(Wave wave, const char *fileName)
{
    return (ExportWave(wave, fileName));
}

bool Audio::exportWaveAsCode(Wave wave, const char *fileName)
{
    return (ExportWaveAsCode(wave, fileName));
}
void Audio::playSound(Sound sound)
{
    PlaySound(sound);
}
void Audio::stopSound(Sound sound)
{
    StopSound(sound);
}
void Audio::pauseSound(Sound sound)
{
    PauseSound(sound);
}
void Audio::resumeSound(Sound sound)
{
    ResumeSound(sound);
}
void Audio::playSoundMulti(Sound sound)
{
    PlaySoundMulti(sound);
}
void Audio::stopSoundMulti(void)
{
    StopSoundMulti();
}
int Audio::getSoundsPlaying(void)
{
    return (GetSoundsPlaying());
}
bool Audio::isSoundPlaying(Sound sound)
{
    return (IsSoundPlaying(sound));
}
void Audio::setSoundVolume(Sound sound, float volume)
{
    SetSoundVolume(sound, volume);
}
void Audio::setSoundPitch(Sound sound, float pitch)
{
    SetSoundPitch(sound, pitch);
}

void Audio::waveFormat(Wave *wave, int sampleRate, int sampleSize, int channels)
{
    WaveFormat(wave, sampleRate, sampleSize, channels);
}
Wave Audio::waveCopy(Wave wave)
{
    return (WaveCopy(wave));
}
void Audio::waveCrop(Wave *wave, int initSample, int finalSample)
{
    WaveCrop(wave, initSample, finalSample);
}

float *Audio::loadWaveSamples(Wave wave)
{
    return (LoadWaveSamples(wave));
}
void Audio::unloadWaveSamples(float *samples)
{
    UnloadWaveSamples(samples);
}

Music Audio::loadMusicStream(const char *fileName)
{
    return (LoadMusicStream(fileName));
}
Music Audio::loadMusicStreamFromMemory(const char *fileType, unsigned char *data, int dataSize)
{
    return (LoadMusicStreamFromMemory(fileType, data, dataSize));
}
void Audio::unloadMusicStream(Music music)
{
    UnloadMusicStream(music);
}
void Audio::playMusicStream(Music music)
{
    PlayMusicStream(music);
}
bool Audio::isMusicPlaying(Music music)
{
    return (IsMusicStreamPlaying(music));
}
void Audio::updateMusicStream(Music music)
{
    UpdateMusicStream(music);
}
void Audio::stopMusicStream(Music music)
{
    StopMusicStream(music);
}
void Audio::pauseMusicStream(Music music)
{
    PauseMusicStream(music);
}
void Audio::resumeMusicStream(Music music)
{
    ResumeMusicStream(music);
}
void Audio::setMusicVolume(Music music, float volume)
{
    SetMusicVolume(music, volume);
}
void Audio::setMusicPitch(Music music, float pitch)
{
    SetMusicPitch(music, pitch);
}
float Audio::getMusicTimeLength(Music music)
{
    return (GetMusicTimeLength(music));
}
float Audio::getMusicTimePlayed(Music music)
{
    return (GetMusicTimePlayed(music));
}

AudioStream Audio::initAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
{
    return (InitAudioStream(sampleRate, sampleSize, channels));
}
void Audio::updateAudioStream(AudioStream stream, const void *data, int samplesCount)
{
    UpdateAudioStream(stream, data, samplesCount);
}
void Audio::closeAudioStream(AudioStream stream)
{
    CloseAudioStream(stream);
}
bool Audio::isAudioStreamProcessed(AudioStream stream)
{
    return (IsAudioStreamProcessed(stream));
}
void Audio::playAudioStream(AudioStream stream)
{
    PlayAudioStream(stream);
}
void Audio::pauseAudioStream(AudioStream stream)
{
    PauseAudioStream(stream);
}
void Audio::resumeAudioStream(AudioStream stream)
{
    ResumeAudioStream(stream);
}
bool Audio::isAudioStreamPlaying(AudioStream stream)
{
    return (IsAudioStreamPlaying(stream));
}
void Audio::stopAudioStream(AudioStream stream)
{
    StopAudioStream(stream);
}
void Audio::setAudioStreamVolume(AudioStream stream, float volume)
{
    SetAudioStreamVolume(stream, volume);
}
void Audio::setAudioStreamPitch(AudioStream stream, float pitch)
{
    SetAudioStreamPitch(stream, pitch);
}
void Audio::setAudioStreamBufferSizeDefault(int size)
{
    SetAudioStreamBufferSizeDefault(size);
}
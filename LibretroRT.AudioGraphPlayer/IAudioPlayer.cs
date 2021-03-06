﻿using System.Runtime.InteropServices.WindowsRuntime;

namespace LibretroRT.AudioGraphPlayer
{
    public interface IAudioPlayer
    {
        uint SampleRate { get; }
        bool ShouldDelayNextFrame { get; }

        void AddSamples([ReadOnlyArray] short[] samples);
        void SetSampleRate(uint sampleRate);
        void Stop();
    }
}
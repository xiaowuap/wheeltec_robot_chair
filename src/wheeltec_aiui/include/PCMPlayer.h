#ifndef SRC_TEST_ALSA_PCMPLAYER_H_
#define SRC_TEST_ALSA_PCMPLAYER_H_

#include <alsa/asoundlib.h>
#include "aiui/AIUI_V2.h"
#include <iostream>
#include <vector>

#define DEVICE_NAME  "plughw:CARD=Device,DEV=0"

using namespace std;
using namespace aiui_v2;

class PCMPlayer {
private:
    snd_pcm_t* playback_handle;
    unsigned int sample_rate;
    snd_pcm_format_t format;
    int channels;

public:
    PCMPlayer(unsigned int rate, snd_pcm_format_t, int ch);
    ~PCMPlayer();

    bool init_alsa() ;

    void play_pcm(const char* audio_data, int len, int dts);

    void write_audio(const char* data,int len);

    void stop();

};


#endif /* SRC_TEST_ALSA_AUDIOPROVIDER_H_ */
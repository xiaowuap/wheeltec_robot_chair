#include "PCMPlayer.h"

using namespace std;
using namespace aiui_v2;

PCMPlayer::PCMPlayer(unsigned int rate = 16000, 
         snd_pcm_format_t fmt = SND_PCM_FORMAT_S16_LE, 
         int ch = 1)
    : sample_rate(rate), format(fmt), channels(ch), playback_handle(nullptr) {}

PCMPlayer::~PCMPlayer() {
    if (playback_handle) {
        snd_pcm_drain(playback_handle);
        snd_pcm_close(playback_handle);
    }
}

bool PCMPlayer::init_alsa() {
    int err;
    if (err = snd_pcm_open(&playback_handle, DEVICE_NAME, SND_PCM_STREAM_PLAYBACK, 0)) {
        cerr << "ALSA open error: " << snd_strerror(err) << endl;
        return false;
    }

    snd_pcm_hw_params_t* params;
    snd_pcm_hw_params_alloca(&params);
    snd_pcm_hw_params_any(playback_handle, params);

    if ((err = snd_pcm_hw_params_set_access(playback_handle, params, 
                                          SND_PCM_ACCESS_RW_INTERLEAVED))) {
        cerr << "Set access error: " << snd_strerror(err) << endl;
        return false;
    }

    // 设置音频参数（需要与输入PCM数据匹配）
    snd_pcm_hw_params_set_format(playback_handle, params, format);
    snd_pcm_hw_params_set_channels(playback_handle, params, channels);
    snd_pcm_hw_params_set_rate_near(playback_handle, params, &sample_rate, 0);

    if ((err = snd_pcm_hw_params(playback_handle, params))) {
        cerr << "Params set error: " << snd_strerror(err) << endl;
        return false;
    }

    return true;
}

void PCMPlayer::stop() {
    if (!playback_handle) {
        std::cerr << "Playback device not initialized." << std::endl;
        return;
    }

    int err = snd_pcm_drain(playback_handle);
    if (err < 0) {
        std::cerr << "Error draining PCM device: " << snd_strerror(err) << std::endl;
        snd_pcm_drop(playback_handle);
    }

    snd_pcm_prepare(playback_handle);
}

void PCMPlayer::play_pcm(const char* audio_data, int len, int dts) {
    if (!playback_handle) return;

    switch (dts) {
        case 0: // 音频开始
            snd_pcm_prepare(playback_handle);
            break;
            
        case 1: // 音频中间块
            write_audio(audio_data, len);
            break;
            
        case 2: // 音频结束
            write_audio(audio_data, len);
            snd_pcm_drain(playback_handle); // 排出所有剩余音频
            break;
    }
}

void PCMPlayer::write_audio(const char* data, int len) {
    snd_pcm_uframes_t frames = len / (channels * snd_pcm_format_width(format)/8);
    int err;
    
    if ((err = snd_pcm_writei(playback_handle, data, frames)) < 0) {
        //cerr << "Write error: " << snd_strerror(err) << endl;
        if (err == -EPIPE) {
            cerr << "Underrun occurred, recovering..." << endl;
            if (snd_pcm_recover(playback_handle, err, 0) < 0) {
                cerr << "Recovery failed, preparing device..." << endl;
                snd_pcm_prepare(playback_handle);
            } else {
                 cout << "Recovery Success." << endl;
            }
        } else if (err == -ESTRPIPE) { // 暂停状态
            cerr << "Stream suspended, resuming..." << endl;
            while ((err = snd_pcm_resume(playback_handle)) == -EAGAIN) {
                usleep(1000); // 等待设备恢复
            }
            if (err < 0) {
                cerr << "Resume failed, preparing device..." << endl;
                snd_pcm_prepare(playback_handle);
            }
        } else { // 其他错误
            cerr << "Unknown error, preparing device..." << endl;
            snd_pcm_prepare(playback_handle);
        }
    }
}

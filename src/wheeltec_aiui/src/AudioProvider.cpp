#include "AudioProvider.h"

namespace aiui_v2 {

	const string AudioProvider::TAG = "AudioProvider";

	AudioProvider::AudioProvider()
	:retries(10),retryDelay(20 * 1000),chanel(1),sampleRate(16000),deviceName(RECORD_DEVICE_NAME)
	{
		snd_pcm_hw_params_t* params;

		int err,i;
		unsigned int buffer_time, period_time; 
		for (i = 0; i < retries; ++i)
		{
			if (snd_pcm_open(&recordData.handle,  deviceName, SND_PCM_STREAM_CAPTURE, 0) == 0)
			{
				//cout << "Open device success. " << " DeviceName: " << deviceName <<endl;
				break;
			} else {
	        cerr << "snd_pcm_open failed (attempt " << i+1 << "): " << snd_strerror(err) << endl;
	        usleep(retryDelay);
	    	}
		}
		assert( i < retries);

		snd_pcm_hw_params_alloca(&params);
		err = snd_pcm_hw_params_any(recordData.handle, params);
		if (err < 0)
		{
			fprintf(stderr, "无法初始化硬件参数: %s\n", snd_strerror(err));
		}
		err = snd_pcm_hw_params_set_access(recordData.handle, params, SND_PCM_ACCESS_RW_INTERLEAVED);
		if (err < 0)
		{
			fprintf(stderr, "无法设置访问模式: %s\n", snd_strerror(err));
		}
		assert(snd_pcm_hw_params_set_format(recordData.handle, params, SND_PCM_FORMAT_S16_LE) == 0);
		assert(snd_pcm_hw_params_set_channels(recordData.handle, params, chanel) == 0);
		assert(snd_pcm_hw_params_set_rate_near(recordData.handle, params, &sampleRate, 0) == 0);

	    // 获取最大缓冲区时间
	    err = snd_pcm_hw_params_get_buffer_time_max(params, &buffer_time, 0);
	    if (err < 0) {
	        fprintf(stderr, "无法获取最大缓冲区时间: %s\n", snd_strerror(err));
	    }
	    if (buffer_time > 500000) {
	        buffer_time = 500000;
	    }
	    // 设置缓冲区时间
	    err = snd_pcm_hw_params_set_buffer_time_near(recordData.handle, params, &buffer_time, 0);
	    if (err < 0) {
	        fprintf(stderr, "无法设置缓冲区时间: %s\n", snd_strerror(err));
	    }

	    // 设置周期时间
	    period_time = buffer_time / 4;
	    err = snd_pcm_hw_params_set_period_time_near(recordData.handle, params, &period_time, 0);
	    if (err < 0) {
	        fprintf(stderr, "无法设置周期时间: %s\n", snd_strerror(err));
	    }
	    if ((err = snd_pcm_hw_params(recordData.handle,params)) < 0)
	    {
	        printf("写入配置参数失败 : [%s]\n",snd_strerror(err));
	    }

	    // 获取周期大小
	    err = snd_pcm_hw_params_get_period_size(params, &recordData.frames, 0);
	    if (err < 0) {
	        fprintf(stderr, "无法获取周期大小: %s\n", snd_strerror(err));
	    }

	    // 获取缓冲区大小
	    snd_pcm_uframes_t buffer_size;
	    err = snd_pcm_hw_params_get_buffer_size(params, &buffer_size);
	    if (err < 0) {
	        fprintf(stderr, "无法获取缓冲区大小: %s\n", snd_strerror(err));
	    }

	    recordData.size = recordData.frames *2 *1;
		recordData.buf = (char*)malloc(recordData.size);
		if (recordData.buf == NULL)
		{
			cout << "pcm read buf failed!" <<endl;
		}
		//cout << "AudioProvider finish"<<endl;
	}

	const char* AudioProvider::startRecord()
	{
		if (NULL != recordData.handle)
		{
			int ret = pcm_read(recordData.handle, recordData.buf);
			return  recordData.buf;
		}

		std::cout <<" startRecord error! "<<std::endl;
		return NULL;
		}

	void AudioProvider::stopRecord()
	{
		assert(snd_pcm_close(recordData.handle) == 0);
	}

	AudioProvider::~AudioProvider()
	{
		if ( recordData.handle != NULL) {
			//snd_pcm_drain(handle);
			snd_pcm_drain(recordData.handle);
			snd_pcm_close(recordData.handle);
		}
		recordData.handle = NULL;
		if (recordData.buf != NULL) {
		    free(recordData.buf);
		    recordData.buf = NULL;
		}
	}

	int AudioProvider::pcm_read(snd_pcm_t *handle, char *buf)
	{

		int ret = snd_pcm_readi(handle, buf, recordData.frames);
			if(ret == -EPIPE)
			{
				printf("overrun occurred\n");
				snd_pcm_prepare(recordData.handle);
				return -1;
			}
			else if(ret < 0)
			{
				printf("error from read: %s\n",snd_strerror(ret));
				return -1;
			}
		    else if (ret == -EAGAIN)
		    {
		        snd_pcm_wait(recordData.handle, 1000);
		        printf("snd_pcm_readi return EAGAIN.\n");
		    	return -1;
		    }
		    else if (ret == -ESTRPIPE)
		    {
		       printf("snd_pcm_readi return ESTRPIPE.\n");
		   	   return -1;
		    }
			else if(ret != (int)recordData.frames)
			{
				printf("short read, read %d frames\n", ret);
				return -1;
			}
			else
				return ret;
	}
}


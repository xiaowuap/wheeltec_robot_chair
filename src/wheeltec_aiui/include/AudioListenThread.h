#ifndef SRC_TEST_ALSA_AUDIOLISTENTHREAD_H_
#define SRC_TEST_ALSA_AUDIOLISTENTHREAD

#include <string>
#include <iostream>
#include "aiui/AIUI_V2.h"
#include "../src/utils/file/FileUtil.h"
#include "AudioProvider.h"
#include <pthread.h>
#include <thread>

using namespace std;
using namespace aiui_v2;

class AudioListenThread
{
private:

	IAIUIAgent* mAIUIAgent;
	std::unique_ptr<AudioProvider> mAudioProvider;

	bool mRun;
	bool thread_created;
	const int bufferSize;
	const char * audioBuffer;

	thread thread_;
	
private:

	bool threadLoop();

	void threadProc();

public:
	AudioListenThread(IAIUIAgent* agent);

	~AudioListenThread();

	void stopRun();
	
	bool run();
};

#endif
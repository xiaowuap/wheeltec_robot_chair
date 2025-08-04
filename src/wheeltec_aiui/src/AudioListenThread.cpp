#include "AudioListenThread.h"
#include <unistd.h>

#define AIUI_SLEEP(x) usleep(x * 1000);

using namespace std;
using namespace aiui_v2;

AudioListenThread::AudioListenThread(IAIUIAgent* agent)
:mAIUIAgent(agent),bufferSize(4000),mRun(true),
audioBuffer(new char[bufferSize]),thread_created(false)
{
	mAudioProvider = std::make_unique<AudioProvider>();
}

AudioListenThread::~AudioListenThread( )
{
	stopRun();
}

void AudioListenThread::stopRun()
{
	if (thread_created) {
	mRun = false;
    if (thread_.joinable()) {
        thread_.join(); // 等待线程完成
    }
	thread_created = false;
	}
}

bool AudioListenThread::run()
{
	if (thread_created == false) {
		thread_ = std::thread(&AudioListenThread::threadProc, this);
		thread_created = true;
		return true;
	}
	return false;
}

bool AudioListenThread::threadLoop()
{
	if (!mRun) {
        return false;
    }

	audioBuffer = mAudioProvider->startRecord();

	AIUIBuffer frameData = aiui_create_buffer_from_data(audioBuffer, bufferSize);

	IAIUIMessage * writeMsg = IAIUIMessage::create(AIUIConstant::CMD_WRITE,
			0,0, "data_type=audio,sample_rate=16000", frameData);
	if (NULL != mAIUIAgent)
	{
		mAIUIAgent->sendMessage(writeMsg);
		cout << "录音中......" << endl;
		//cout << "write audio data." << endl;

	}

	AIUI_SLEEP(120);
	return mRun;
}

void AudioListenThread::threadProc() {
    while (mRun) {
        if (!threadLoop()) {
            break;
        }
    }
}
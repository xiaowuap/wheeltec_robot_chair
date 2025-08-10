#include "Processor.h"

using namespace std;
using namespace aiui_va;
using namespace aiui_v2;

string gSyncSid;
string gVoiceCloneResId;
string awake_word = "请问有什么指示";
string thinking = "稍等，正在思索中";
bool record_status = false;

/*********************播放回调函数************************/
void onStarted()
{
    cout << "PcmPlayer, onStarted" << endl;
}

void onPaused()
{
    cout << "PcmPlayer, onPaused" << endl;
}

void onResumed()
{
    cout << "PcmPlayer, onResumed" << endl;
}

void onStopped()
{
    cout << "PcmPlayer, onStopped" << endl;
}

void onError(int error, const char* des)
{
    cout << "PcmPlayer, onError, error=" << error << ", des=" << des << endl;
}

void onProgress(int streamId, int progress, const char* audio, int len, bool isCompleted)
{
//    cout << "PcmPlayer, onProgress, streamId=" << streamId << ", progress=" << progress
//         << ", len=" << len << ", isCompleted=" << isCompleted << endl;
}

void startTTS(const string& text, const string& tag = "");

int init_player()
{   
    player = std::make_unique<PCMPlayer>(16000,SND_PCM_FORMAT_S16_LE,1);
    bool initialized = false;
    if (!initialized) {
        if (player->init_alsa()) {
            initialized = true;
            return 0;
        } else {
            // 处理初始化失败
            return -1;
        }
    }
}

void alsaStart()
{
    record_status = true;
    std::lock_guard<std::mutex> lock(threadMutex);
    if (!audioListeningThread)
    {

        audioListeningThread = std::make_unique<AudioListenThread>(g_pAgent);
        audioListeningThread->run();
    }
}

void alsaStop()
{
    std::lock_guard<std::mutex> lock(threadMutex);  
    if (audioListeningThread)
    {
        audioListeningThread->stopRun();
        audioListeningThread.reset(); // 释放资源
        record_status = false;
    }
}

/**
 * 销毁AIUIAgent对象。
 */
void destroyAgent()
{
    if (g_pAgent) {
        g_pAgent->destroy();
        g_pAgent = nullptr;
    }
}


// 从StreamNlpTtsHelper::Listener派生流式合成监听器，用于监听大模型结果的合成
void DemoListener::TtsHelperListener::onText(const StreamNlpTtsHelper::OutTextSeg& textSeg)
{
    if (textSeg.isBegin() || textSeg.isEnd()) {
        if (aiui_pcm_player_get_state() != PCM_PLAYER_STATE_STARTED) {
            aiui_pcm_player_start();
        }
        if (textSeg.isBegin()) {
            aiui_pcm_player_clear();
        }
    }

    // 调用合成
    startTTS(textSeg.mText, textSeg.mTag);  
}

void DemoListener::TtsHelperListener::onFinish(const string& fullText)
{
    // 文本合成完成回调
    cout << "tts, fullText=" << fullText << endl;
}

void DemoListener::TtsHelperListener::onTtsData(const Json::Value& bizParamJson, const char* audio, int len)
{
    const Json::Value& data = (bizParamJson["data"])[0];
    const Json::Value& content = (data["content"])[0];
    int dts = content["dts"].asInt();
    int progress = content["text_percent"].asInt();

    // 将合成数据写入播放器
    aiui_pcm_player_write(0, audio, len, dts, progress);
}

DemoListener::DemoListener()
{  
    // 创建内置的pcm播放器，并初始化，设置回调，启动起来
    // aiui_pcm_player_create();
    // aiui_pcm_player_init();
    // aiui_pcm_player_set_callbacks(
    //     onStarted, onPaused, onResumed, onStopped, onProgress, onError);
    // aiui_pcm_player_start();

    init_player();

    std::shared_ptr<TtsHelperListener> listener = std::make_shared<TtsHelperListener>();
    m_pTtsHelper = std::make_shared<StreamNlpTtsHelper>(listener);
    m_pTtsHelper->setTextMinLimit(20);
}

DemoListener::~DemoListener()
{
    // 析构时销毁播放器，释放资源
    //aiui_pcm_player_destroy();
}

/**
 * 重写onEvent方法，SDK通过回调该方法抛出各种事件，在这里针对事件做对应的处理。
 *
 * @param event
 */
void DemoListener::onEvent(const IAIUIEvent& event)
{
    try {
        handleEvent(event);
    } catch (std::exception& e) {
        cout << e.what() << endl;
    }
}

void DemoListener::processIntentJson(Json::Value& params,
                       Json::Value& intentJson,
                       std::string& resultStr,
                       int eosRsltTime,
                       std::string& sid)
{
    int rc = intentJson["rc"].asInt();

    Json::Value answerJson = intentJson["answer"];
    string answer = answerJson["text"].asString();

    // 正常nlp结果（AIUI通用语义模型返回的语义结果）
    cout << "----------------------------------" << endl;
    cout << "params: " << params.asString() << endl;
    cout << "nlp: " << resultStr << endl;
    cout << "eos_result=" << eosRsltTime << "ms" << endl;
    cout << "结果解析：" << endl;
    cout << "sid=" << sid << endl;
    cout << "text（请求文本）: " << intentJson["text"].asString() << endl;
    cout << "rc=" << rc << ", answer（应答语）: " << answer << endl;

    if (!answer.empty()) {
        startTTS(answer);
    }
}

void DemoListener::handleEvent(const IAIUIEvent& event)
{
    switch (event.getEventType()) {
        // SDK状态
        case AIUIConstant::EVENT_STATE: {
            switch (event.getArg1()) {
                case AIUIConstant::STATE_IDLE: {
                    // 空闲状态，即最初始的状态
                    cout << "EVENT_STATE: STATE_IDLE" << endl;
                } break;

                case AIUIConstant::STATE_READY: {
                    // 准备好状态（待唤醒），可以进行唤醒
                    cout << "EVENT_STATE: STATE_READY" << endl;
                } break;

                case AIUIConstant::STATE_WORKING: {
                    // 工作状态（即已唤醒状态），可以语音交互，也可以再次唤醒
                    cout << "EVENT_STATE: STATE_WORKING" << endl;
                } break;
            }
        } break;

        // 唤醒事件
        case AIUIConstant::EVENT_WAKEUP: {
            //cout << "EVENT_WAKEUP: " << event.getInfo() << endl;

            // 唤醒时停止播放
            //aiui_pcm_player_stop();
        } break;

        // 休眠事件，即一段时间无有效交互或者外部主动要求，SDK会自动进入STATE_READY状态
        case AIUIConstant::EVENT_SLEEP: {
            // arg1用来区分休眠类型，是自动休眠还是外部要求，可参考AIUIConstant.h中EVENT_SLEEP的注释
            cout << "EVENT_SLEEP: arg1=" << event.getArg1() << endl;
        } break;

        // VAD事件，如语音活动检测
        case AIUIConstant::EVENT_VAD: {
            // arg1为活动类型
            switch (event.getArg1()) {
                case AIUIConstant::VAD_BOS_TIMEOUT: {
                    cout << "EVENT_VAD: VAD_BOS_TIMEOUT" << endl;
                } break;

                // 检测到前端点，即开始说话
                case AIUIConstant::VAD_BOS: {
                    cout << "EVENT_VAD: BOS" << endl;
                } break;

                // 检测到后端点，即说话结束
                case AIUIConstant::VAD_EOS: {
                    cout << "EVENT_VAD: EOS" << endl;
                    alsaStop();
                } break;

                // 音量，arg2为音量级别（0-30）
                case AIUIConstant::VAD_VOL: {
                    //cout << "EVENT_VAD: vol=" << event.getArg2() << endl;
                } break;
            }
        } break;

        // 结果事件
        case AIUIConstant::EVENT_RESULT: {
            Json::Value bizParamJson;
            Json::Reader reader;

            if (!reader.parse(event.getInfo(), bizParamJson, false)) {
                cout << "parse error! info=" << event.getInfo() << endl;
                break;
            }

            Json::Value& data = (bizParamJson["data"])[0];
            Json::Value& params = data["params"];
            Json::Value& content = (data["content"])[0];

            string sub = params["sub"].asString();
            if (sub != "iat" && sub != "esr_pgs" && sub != "esr_iat" && sub != "nlp" && sub != "tts" 
                && sub != "cbm_intent_split" && sub != "cbm_semantic") {
                return;
            }

            // sid即唯一标识一次会话的id
            string sid = event.getData()->getString("sid", "");
            if (sub == "iat") {
                if (sid != mCurIatSid) {
                    cout << "**********************************" << endl;
                    cout << "sid=" << sid << endl;

                    mCurIatSid = sid;

                    // 新的会话，清空之前识别缓存
                    mIatTextBuffer.clear();
                    mStreamNlpAnswerBuffer.clear();
                    m_pTtsHelper->clear();
                    mIntentCnt = 0;
                }
            } else if (sub == "tts") {
                if (sid != mCurTtsSid) {
                    cout << "**********************************" << endl;
                    cout << "sid=" << sid << endl;

                    mCurTtsSid = sid;
                }
            }

            Json::Value empty;
            string cnt_id = content.get("cnt_id", empty).asString();

            int dataLen = 0;

            // 注意：当buffer里存字符串时也不是以0结尾，当使用C语言时，转成字符串则需要自已在末尾加0
            const char* buffer = event.getData()->getBinary(cnt_id.c_str(), &dataLen);

            if (sub == "tts") {
                // 语音合成结果，返回url或者pcm音频
                //cout << "tts: " << content.toString() << endl;

                Json::Value&& isUrl = content.get("url", empty);
                if (isUrl.asString() == "1") {
                    // 云端返回的是url链接，可以用播放器播放
                    cout << "tts_url=" << string(buffer, dataLen) << endl;
                } else {
                    // 云端返回的是pcm音频，分成一块块流式返回
                    int progress = 0;
                    int dts = content["dts"].asInt();

                    string tag = event.getData()->getString("tag", "");
                    if (tag.find("stream_nlp_tts") == 0) {
                        // 流式语义应答的合成
                        m_pTtsHelper->onOriginTtsData(tag, bizParamJson, buffer, dataLen);
                    } else {
                        if (dts == AIUIConstant::DTS_BLOCK_FIRST || dts == AIUIConstant::DTS_ONE_BLOCK) {
                            // 只有碰到开始块，才开启播放器
                            // if (aiui_pcm_player_get_state() != PCM_PLAYER_STATE_STARTED) {
                            //     aiui_pcm_player_start();
                            // }

                        }
                        /////////////////////////////////////////////////////////////////
                        
                        // 播放音频（需要确保audio_data是PCM原始数据）
                        if (buffer) {
                            player->play_pcm(buffer, dataLen, dts);
                        }
                        /////////////////////////////////////////////////////////////////

                        //aiui_pcm_player_write(0, buffer, dataLen, dts, progress);

                        // 若要保存合成音频，请打开以下开关
#if 1
                        // 音频开始
                        if (dts == AIUIConstant::DTS_BLOCK_FIRST || dts == AIUIConstant::DTS_ONE_BLOCK) {
                            mFs.open("tts.pcm", ios::binary | ios::out);
                        }

                        if (mFs.is_open()) {
                            if (buffer){
                                mFs.write(buffer, dataLen);
                            }
                        } else {
                            cerr << "文件未打开，写入失败！" << endl;
                        }

                        // 音频结束
                        if (dts == AIUIConstant::DTS_BLOCK_LAST || dts == AIUIConstant::DTS_ONE_BLOCK) {
                            //mFs.close();
                            if (mFs.is_open())
                            {
                                mFs.close();
                            }
                        }
#endif
                    }
                }
            } else if (sub == "iat") {
                // 语音识别结果
                string resultStr = string(buffer, dataLen);     // 注意：这里不能用string resultStr = buffer，因为buffer不一定以0结尾
                Json::Value resultJson;
                if (reader.parse(resultStr, resultJson, false)) {
                    Json::Value textJson = resultJson["text"];
                    bool isWpgs = false;
                    if (textJson.isMember("pgs")) {
                        isWpgs = true;
                    }

                    if (isWpgs) {
                        mIatTextBuffer = IatResultUtil::parsePgsIatText(textJson);
                    } else {
                        // 结果拼接起来
                        mIatTextBuffer.append(IatResultUtil::parseIatResult(textJson));
                    }

                    // 是否是该次会话最后一个识别结果
                    bool isLast = textJson["ls"].asBool();
                    if (isLast) {
                        cout << "params: " << params.asString() << endl;
                        cout << "iat: " << mIatTextBuffer << endl;

                        mIatTextBuffer.clear();
                    }
                }
            } 
            else if (sub == "esr_pgs") {
                // 语音识别结果(流式)
                string resultStr = string(buffer, dataLen);     // 注意：这里不能用string resultStr = buffer，因为buffer不一定以0结尾
                Json::Value resultJson;
                if (reader.parse(resultStr, resultJson, false)) {
                    Json::Value textJson = resultJson["text"];

                    cout << "esr_pgs: " << resultJson["text"] << endl;
                }
            } 
            else if (sub == "esr_iat") {
                // 语音识别结果
                string resultStr = string(buffer, dataLen);     // 注意：这里不能用string resultStr = buffer，因为buffer不一定以0结尾
                Json::Value resultJson;
                if (reader.parse(resultStr, resultJson, false)) {
                    Json::Value textJson = resultJson["text"];

                    mIatTextBuffer.append(IatResultUtil::parseEsrIatResult(textJson));
                    cout << "语音: " << mIatTextBuffer << endl;
                    node->sendMessage(mIatTextBuffer);

                    mIatTextBuffer.clear();
                }
            }
            else if (sub == "nlp") {
                // 语义理解结果
                string resultStr = string(buffer, dataLen);     // 注意：这里不能用string resultStr = buffer，因为buffer不一定以0结尾

                // 从说完话到语义结果返回的时长
                long eosRsltTime = event.getData()->getLong("eos_rslt", -1);

                Json::Value resultJson;
                if (reader.parse(resultStr, resultJson, false)) {
                    // 判断是否为有效结果
                    if (resultJson.isMember("intent") &&
                        resultJson["intent"].isMember("rc")) {
                        // AIUI v1的语义结果
                        Json::Value intentJson = resultJson["intent"];
                        processIntentJson(params, intentJson, resultStr, eosRsltTime, sid);
                    } else if (resultJson.isMember("nlp")) {
                        // AIUI v2的语义结果
                        Json::Value nlpJson = resultJson["nlp"];
                        string text = nlpJson["text"].asString();

                        if (text.find("{\"intent\":") == 0) {
                            // 通用语义结果
                            Json::Value textJson;
                            if (reader.parse(text, textJson, false)) {
                                Json::Value intentJson = textJson["intent"];
                                processIntentJson(params, intentJson, resultStr, eosRsltTime, sid);
                            }
                        } else {
                            // 大模型语义结果
                            // 流式nlp结果里面有seq和status字段
                            int seq = nlpJson["seq"].asInt();
                            int status = nlpJson["status"].asInt();

                            /* 多意图取最后一次问题的结果进行tts合成 */
                            if (mIntentCnt > 0) {
                                int currentIntentIndex = 0;
                                Json::Value metaNlpJson;
                                Json::Value textJson = resultJson["cbm_meta"].get("text", metaNlpJson);
                                if (reader.parse(textJson.asString(), metaNlpJson, false)) {
                                    currentIntentIndex = metaNlpJson["nlp"]["intent"].asInt();
                                    if ((mIntentCnt - 1) != currentIntentIndex) {
                                        cout << "ignore nlp:" << resultStr << endl;
                                        return;
                                    }
                                } else {
                                    cout << "ignore nlp:" << resultStr << endl;
                                    return;
                                }
                            }

#ifndef USE_POST_SEMANTIC_TTS
                            //如果使用应用的语义后合成不需要在调用下面的函数否则tts的播报会重复
                            m_pTtsHelper->addText(text, seq, status);
#endif

                            cout << "----------------------------------" << endl;
                            cout << "params: " << params.asString() << endl;
                            cout << "nlp: " << resultStr << endl;

                            if (seq == 0) {
                                long eosRsltTime = event.getData()->getLong("eos_rslt", -1);
                                cout << "eos_result=" << eosRsltTime << "ms" << endl;
                            }

                            cout << "结果解析：" << endl;
                            cout << "sid=" << sid << endl;
                            cout << "seq=" << seq << ", status=" << status << ", answer（应答语）: " << text << endl;
                            cout << "fullAnswer=" << (mStreamNlpAnswerBuffer.append(text)) << endl;

                            if (status == 2) {
                                mStreamNlpAnswerBuffer.clear();
                            }
                        }
                    } else {
                        // 无效结果，把原始结果打印出来
                        cout << "----------------------------------" << endl;
                        cout << "nlp: " << resultStr << endl;
                        cout << "sid=" << sid << endl;
                    }
                }
            } else if (sub == "cbm_intent_split") {
                // 意图拆分的结果
                string intentStr = string(buffer, dataLen); // 注意：这里不能用string resultStr = buffer，因为buffer不一定以0结尾
                Json::Value tmpJson;
                if (reader.parse(intentStr, tmpJson, false)) {
                    Json::Value intentTextJson = tmpJson["cbm_intent_split"]["text"];
                    if (!intentTextJson.empty() &&
                        reader.parse(intentTextJson.asString(), tmpJson, false)) {
                        mIntentCnt = tmpJson["intent"].size();
                        cout << "cbm_intent_cnt: " << mIntentCnt
                             << " text: " << tmpJson.toString() << endl;
                    }
                }
            } else {
                // 其他结果
                string resultStr = string(buffer, dataLen);     // 注意：这里不能用string resultStr = buffer，因为buffer不一定以0结尾

                cout << sub << ": " << event.getInfo() << endl << resultStr << endl;
            }
        } break;

        // 与CMD命令对应的返回结果，arg1为CMD类型，arg2为错误码
        case AIUIConstant::EVENT_CMD_RETURN: {
            if (AIUIConstant::CMD_BUILD_GRAMMAR == event.getArg1()) {
                // 语法构建命令的结果
                // 注：需要集成本地esr引擎才能构建语法
                if (event.getArg2() == 0) {
                    cout << "build grammar success." << endl;
                } else {
                    cout << "build grammar, error=" << event.getArg2() << ", des=" << event.getInfo() << endl;
                }
            } else if (AIUIConstant::CMD_UPDATE_LOCAL_LEXICON == event.getArg1()) {
                // 更新本地语法槽的结果
                if (event.getArg2() == 0) {
                    cout << "update lexicon success" << endl;
                } else {
                    cout << "update lexicon, error=" << event.getArg2() << "des=" << event.getInfo() << endl;
                }
            } else if (AIUIConstant::CMD_VOICE_CLONE == event.getArg1()) {
                //声音复刻
                int dtype = event.getData()->getInt("sync_dtype", -1);
                int retCode = event.getArg2();
                string dataTypeStr;
                if (dtype == AIUIConstant::VOICE_CLONE_REG) { //注册资源
                    dataTypeStr = "注册音频资源";
                } else if (dtype == AIUIConstant::VOICE_CLONE_DEL) { //删除资源
                    dataTypeStr = "删除资源";
                }

                if (AIUIConstant::SUCCESS == retCode ) {
                    // 上传成功，会话的唯一id，用于反馈问题的日志索引字段，注意留存
                    // 注：上传成功立即生效
                    string sid = event.getData()->getString("sid", "");
                    // 获取上传调用时设置的自定义tag
                    string tag = event.getData()->getString("tag", "");
                    // 获取上传调用耗时，单位：ms
                    long timeSpent = event.getData()->getLong("time_spent", -1);
                    cout << "声音复刻" << dataTypeStr << "成功"
                         << "，耗时：" << timeSpent
                         << "ms, sid=" + sid + "，tag=" + tag;
                    if (dtype == AIUIConstant::VOICE_CLONE_REG) {
                        string resId = event.getData()->getString("res_id", "");
                        cout << "，res id = " << resId << endl;

                        //保存声音复刻的的res id
                        gVoiceCloneResId = resId;
                        fstream fs;
                        fs.open("./voice_clone_reg_id.txt", ios::binary | ios::out);
                        fs.write(resId.c_str(), resId.length());
                        fs.close();
                    } else {
                        cout << endl;
                    }
                } else {
                    string result = event.getData()->getString("result", "");
                    cout << "声音复刻" << dataTypeStr << "失败，错误码：" <<
                        retCode << " info:" << event.getInfo() << " result:" << result << endl;
                }
            } else if (AIUIConstant::CMD_SYNC == event.getArg1()) {
                // 数据同步的返回
                int dtype = event.getData()->getInt("sync_dtype", -1);
                int retCode = event.getArg2();

            #ifdef AIUI_V2
                string dataTypeStr;
                string text;

                if (dtype == AIUIConstant::SYNC_DATA_UPLOAD) {
                    dataTypeStr = "上传实体";
                } else if (dtype == AIUIConstant::SYNC_DATA_DELETE) {
                    dataTypeStr = "删除实体";
                } else if (dtype == AIUIConstant::SYNC_DATA_DOWNLOAD) {
                    dataTypeStr = "下载实体";
                } else if (dtype == AIUIConstant::SYNC_DATA_SEE_SAY) {
                    dataTypeStr = "所见即可说";
                }

                if (AIUIConstant::SUCCESS == retCode ) {
                    // 上传成功，会话的唯一id，用于反馈问题的日志索引字段，注意留存
                    // 注：上传成功立即生效
                    gSyncSid = event.getData()->getString("sid", "");
                    // 获取上传调用时设置的自定义tag
                    string tag = event.getData()->getString("tag", "");
                    // 获取上传调用耗时，单位：ms
                    long timeSpent = event.getData()->getLong("time_spent", -1);
                    cout << "同步" << dataTypeStr << "成功"
                         << "，耗时：" << timeSpent
                         << "ms, sid=" + gSyncSid + "，tag=" + tag;
                    if (dtype == AIUIConstant::SYNC_DATA_UPLOAD) {
                        cout << "，你可以试着说“打电话给刘德华“" << endl;
                    } else {
                        cout << endl;
                    }
                    // 实体内容
                    if (dtype == AIUIConstant::SYNC_DATA_DOWNLOAD) {
                        text = event.getData()->getString("text", "");
                        cout << "下载的实体内容:\n" << Base64Util::decode(text) << endl;
                    }
                } else {
                    gSyncSid = "";
                    string result = event.getData()->getString("result", "");
                    cout << "同步" << dataTypeStr << "失败，错误码：" <<
                        retCode << " info:" << event.getInfo() << " result:" << result << endl;
                }
            #else
                if (dtype == AIUIConstant::SYNC_DATA_SCHEMA) {
                    if (AIUIConstant::SUCCESS == retCode) {
                        // 上传成功，记录上传会话的sid，以用于查询数据打包状态
                        // 注：上传成功并不表示数据打包成功，打包成功与否应以同步状态查询结果为准，数据只有打包成功后才能正常使用
                        gSyncSid = event.getData()->getString("sid", "");

                        // 获取上传调用时设置的自定义tag
                        string tag = event.getData()->getString("tag", "");

                        // 获取上传调用耗时，单位：ms
                        long timeSpent = event.getData()->getLong("time_spent", -1);

                        cout << "同步成功，"
                             << "耗时：" << timeSpent
                             << "ms, sid=" + gSyncSid + "，tag=" + tag +
                                    "，你可以试着说“打电话给刘德华“"
                             << endl;
                    } else {
                        gSyncSid = "";
                        cout << "同步失败，错误码：" << retCode << endl;
                    }
                }
            #endif
            }
        #ifndef AIUI_V2
            else if (AIUIConstant::CMD_QUERY_SYNC_STATUS == event.getArg1()) {
                // 数据同步状态查询的返回
                // 获取同步类型
                int syncType = event.getData()->getInt("sync_dtype", -1);
                if (AIUIConstant::SYNC_DATA_QUERY == syncType) {
                    // 若是同步数据查询，则获取查询结果，结果中error字段为0则表示上传数据打包成功，否则为错误码
                    string result = event.getData()->getString("result", "");

                    cout << "查询结果：" << result << endl;
                }
            }
        #endif
        } break;

        // 开始录音事件
        case AIUIConstant::EVENT_START_RECORD: {
            cout << "EVENT_START_RECORD " << endl;
        } break;

        // 停止录音事件
        case AIUIConstant::EVENT_STOP_RECORD: {
            cout << "EVENT_STOP_RECORD " << endl;
        } break;

        // 出错事件
        case AIUIConstant::EVENT_ERROR: {
            // 打印错误码和描述信息
            cout << "EVENT_ERROR: error=" << event.getArg1() << ", des=" << event.getInfo() << endl;
        } break;

        // 连接到服务器
        case AIUIConstant::EVENT_CONNECTED_TO_SERVER: {
            // 获取uid（为客户端在云端的唯一标识）并打印
            string uid = event.getData()->getString("uid", "");

            cout << "EVENT_CONNECTED_TO_SERVER, uid=" << uid << endl;
        } break;

        // 与服务器断开连接
        case AIUIConstant::EVENT_SERVER_DISCONNECTED: {
            cout << "EVENT_SERVER_DISCONNECTED " << endl;
        } break;
    }
}


#define TEST_ROOT_DIR       "/AIUI/"
#define TEST_ROOT_DIR_PATH  CURRENT_PATH TEST_ROOT_DIR
#
#ifdef TURING_UNIT_SUPPORT
    #define CFG_FILE    "/AIUI/cfg/turing.cfg"
    #define CFG_FILE_PATH CURRENT_PATH CFG_FILE
#else
    #define CFG_FILE    "/AIUI/cfg/aiui.cfg"
    #define CFG_FILE_PATH CURRENT_PATH CFG_FILE
#endif
#
#define TEST_AUDIO      "/AIUI/audio/test.pcm"
#define TEST_AUDIO_PATH CURRENT_PATH TEST_AUDIO
#define LOG_DIR         "/AIUI/msc/aiui.log"
#define LOG_DIR_PATH    CURRENT_PATH LOG_DIR
#define MSC_DIR         "/AIUI/msc/"
#define MSC_DIR_PATH    CURRENT_PATH MSC_DIR
#define TEST_TTS        "/AIUI/text/tts.txt"
#define TEST_TTS_PATH   CURRENT_PATH TEST_TTS
#define TEST_SEE_SAY    "/AIUI/text/see_say.txt"
#define TEST_SEE_SAY_PATH   CURRENT_PATH TEST_SEE_SAY


// 通讯录同步示例内容
string SYNC_CONTACT_CONTENT =       // NOLINT
    R"({"name":"刘得华", "phoneNumber":"13512345671"})" "\n"
    R"({"name":"张学诚", "phoneNumber":"13512345672"})" "\n"
    R"({"name":"张右兵", "phoneNumber":"13512345673"})" "\n"
    R"({"name":"吴羞波", "phoneNumber":"13512345674"})" "\n"
    R"({"name":"黎晓", "phoneNumber":"13512345675"})";

/**
 * 读取文件内容存到字符串。
 *
 * @param path
 * @return
 */
string readFileAsString(const string& path)
{
    ifstream t(path, ios_base::in | ios::binary);
    if (!t.is_open()) {
        std::cout << "Error open file: " << path << " fail.";
    }
    string str((istreambuf_iterator<char>(t)), istreambuf_iterator<char>());

    return str;
}

/**
 * 创建AIUIAgent对象。
 *
 * @param more
 * @param cfgPath
 */
void createAgent(bool more = true, const char* cfgPath = CFG_FILE_PATH)
{
    if (g_pAgent) {
        return;
    }

    string aiuiParams = readFileAsString(cfgPath);

    Json::Value paramJson;
    Json::Reader reader;
    if (reader.parse(aiuiParams, paramJson, false)) {
        if (more) {
            cout << paramJson.toString() << endl;
        }

        g_pListener->mMoreDetails = more;
        g_pAgent = IAIUIAgent::createAgent(paramJson.toString().c_str(), g_pListener);
    }

    if (!g_pAgent) {
        std::cout << string(cfgPath) << ", " << reader.getFormatedErrorMessages() << std::endl;
        return;
    }
}

/**
 * 唤醒AIUI。
 */
void wakeup()
{
    // 可以通过clear_data来控制是否要清除唤醒之前的数据（默认会清除），清除则唤醒之前的会话结果（tts除外）会被丢弃从而不再继续抛出
    SEND_AIUIMESSAGE4(AIUIConstant::CMD_WAKEUP, 0, 0, "clear_data=true");
}

/**
 * 重置唤醒，即回到待唤醒状态。
 */
void resetWakeup()
{
    SEND_AIUIMESSAGE1(AIUIConstant::CMD_RESET_WAKEUP);
}

/**
 * 开启AIUI服务，此接口是与stop()对应，调用stop()之后必须调用此接口才能继续与SDK交互。
 *
 * 注：AIUIAgent创建成功之后AIUI会自动开启，故若非调用过stop()则不需要调用start()。
 */
void start()
{
    SEND_AIUIMESSAGE1(AIUIConstant::CMD_START);
}

/**
 * 停止AIUI服务。
 */
void stop()
{
    SEND_AIUIMESSAGE1(AIUIConstant::CMD_STOP);
}

/**
 * 重置AIUI服务，相当于先调用stop()再调用start()。一般用不到。
 */
void resetAIUI()
{
    SEND_AIUIMESSAGE(AIUIConstant::CMD_RESET, 0, 0, "", nullptr);
}

/**
 * 从文件读音频写入SDK，即用文件数据模型实时录音数据。
 *
 * @param repeat
 */
void writeAudioFromLocal(bool repeat)
{
    if (!g_pAgent) {
        return;
    }

    ifstream testData(TEST_AUDIO_PATH, std::ios::in | std::ios::binary);

    if (testData.is_open()) {
        testData.seekg(0, std::ios::end);
        int total = testData.tellg();
        testData.seekg(0, std::ios::beg);

        char* audio = new char[total];
        testData.read(audio, total);
        testData.close();

        int offset = 0;
        int left = total;
        const int frameLen = 1280;
        char buff[frameLen];

        while (true) {
            if (left < frameLen) {
                if (repeat) {
                    offset = 0;
                    left = total;
                    continue;
                } else {
                    break;
                }
            }

            memset(buff, '\0', frameLen);
            memcpy(buff, audio + offset, frameLen);

            offset += frameLen;
            left -= frameLen;

            // frameData内存会在Message在内部处理完后自动release掉
            AIUIBuffer frameData = aiui_create_buffer_from_data(buff, frameLen);
            SEND_AIUIMESSAGE(AIUIConstant::CMD_WRITE, 0, 0, "data_type=audio,tag=audio-tag", frameData);

            // 必须暂停一会儿模拟人停顿，太快的话后端报错。1280字节16k采样16bit编码的pcm数据对应40ms时长
            AIUI_SLEEP(40);
        }

        // 音频写完后，要发CMD_STOP_WRITE停止写入消息
        SEND_AIUIMESSAGE4(AIUIConstant::CMD_STOP_WRITE, 0, 0, "data_type=audio");

        delete[] audio;
    } else {
        cout << "open file failed, path=" << TEST_AUDIO_PATH << endl;
    }

    cout << "write finish" << endl;
}

/**
 * 开启录音。
 */
void startRecordAudio()
{
    SEND_AIUIMESSAGE4(
        AIUIConstant::CMD_START_RECORD, 0, 0, "data_type=audio,pers_param={\"uid\":\"\"},tag=record-tag");
}

/**
 * 停止录音。
 */
void stopRecordAudio()
{
    SEND_AIUIMESSAGE1(AIUIConstant::CMD_STOP_RECORD);
}

/**
 * 写入文本进行交互。
 *
 * @param text 文本内容
 * @param needWakeup 是否需要唤醒
 */
void writeText(const string& text, bool needWakeup = true)
{
    AIUIBuffer textData = aiui_create_buffer_from_data(text.c_str(), text.length());

    if (needWakeup) {
        SEND_AIUIMESSAGE(AIUIConstant::CMD_WRITE, 0, 0, "data_type=text,pers_param={\"uid\":\"\"}", textData);
    } else {
        SEND_AIUIMESSAGE(AIUIConstant::CMD_WRITE, 0, 0, "data_type=text,need_wakeup=false", textData);
    }
}

/**
 * 测试语音合成，返回pcm数据。
 *
 * @param text
 */
void startTTS(const string& text, const string& tag)
{
    AIUIBuffer textData = aiui_create_buffer_from_data(text.c_str(), text.length());
    string params = "voice_name=xiaoyan";
    if (!tag.empty()) {
        params.append(",tag=").append(tag);
    }

    // 使用发音人xiaojuan合成，也可以使用其他发音人
    SEND_AIUIMESSAGE(AIUIConstant::CMD_TTS, AIUIConstant::START, 0, params.c_str(), textData);
}

/**
 * 测试超拟人语音合成，返回pcm数据。
 *
 * @param text
 */
void startHTS(const string& text, const string& tag)
{
    AIUIBuffer textData = aiui_create_buffer_from_data(text.c_str(), text.length());

    // 超拟人合成需要设置scene=IFLYTEK.hts
    string params = "voice_name=x4_lingxiaoxuan_oral,scene=IFLYTEK.hts";
    if (!tag.empty()) {
        params.append(",tag=").append(tag);
    }

    SEND_AIUIMESSAGE(AIUIConstant::CMD_TTS, AIUIConstant::START, 0, params.c_str(), textData);
}

/**
 * 测试语音合成，返回url。
 *
 * @param text
 */
void startTTSUrl(const string& text)
{
    AIUIBuffer textData = aiui_create_buffer_from_data(text.c_str(), text.length());

    // 使用发音人chongchong合成，也可以使用其他发音人
    SEND_AIUIMESSAGE(AIUIConstant::CMD_TTS, AIUIConstant::START, 0,
                     "text_encoding=utf-8,tts_res_type=url,vcn=x2_xiaojuan", textData);
}

/**
 * 构建asr语法。
 *
 * 注：当前版本已废弃，只有历史版本支持。
 */
void buildAsrGrammar()
{
    string grammar = readFileAsString("AIUI/asr/call.bnf");

    SEND_AIUIMESSAGE4(AIUIConstant::CMD_BUILD_GRAMMAR, 0, 0, grammar.c_str());
}

/**
 * 构建esr语法。
 *
 * 注：新版本SDK都只支持esr。
 */
void buildEsrGrammar()
{
    string grammar = readFileAsString("AIUI/esr/message.fsa");

    SEND_AIUIMESSAGE4(AIUIConstant::CMD_BUILD_GRAMMAR, 0, 0, grammar.c_str());
}

/**
 * 将麦克风参数切换到单麦设置。
 */
void changeMicTypeToMic1()
{
    constexpr const char* mic1_params = R"(
{
    "ivw": {
        "mic_type": "mic1"
    },
    "recorder": {
        "channel_filter": "0,-1"
    }
}
)";
    SEND_AIUIMESSAGE(AIUIConstant::CMD_SET_PARAMS, 0, 0, mic1_params, nullptr);
}

/**
 * 清除语义对话历史。
 */
void cleanDialogHistory()
{
    cout << "cleanDialogHistory" << endl;

    SEND_AIUIMESSAGE1(AIUIConstant::CMD_CLEAN_DIALOG_HISTORY);
}

/**
 * 同步动态实体。
 */
void syncSchemaData(int type = AIUIConstant::SYNC_DATA_SCHEMA)
{
    string dataStrBase64 = Base64Util::encode(SYNC_CONTACT_CONTENT);

    Json::Value syncSchemaJson;
    Json::Value dataParamJson;

    // 设置id_name为uid，即用户级个性化资源
    // 个性化资源使用方法可参见http://doc.xfyun.cn/aiui_mobile/的用户个性化章节
    dataParamJson["id_name"] = "uid";

    // 设置res_name为联系人
    dataParamJson["res_name"] = "IFLYTEK.telephone_contact";

#ifdef AIUI_V2
    // aiui开放平台的命名空间，在「技能工作室-我的实体-动态实体密钥」中查看
    dataParamJson["name_space"] = "OS13360977719";
#endif

    syncSchemaJson["param"] = dataParamJson;
    if (AIUIConstant::SYNC_DATA_SCHEMA == type || AIUIConstant::SYNC_DATA_UPLOAD == type) {
        syncSchemaJson["data"] = dataStrBase64;
    }

    string jsonStr = syncSchemaJson.toString();

    // 传入的数据一定要为utf-8编码
    AIUIBuffer syncData = aiui_create_buffer_from_data(jsonStr.c_str(), jsonStr.length());

    // 给该次同步加上自定义tag，在返回结果中可通过tag将结果和调用对应起来
    Json::Value paramJson;
    paramJson["tag"] = "sync-tag";

    // 用schema数据同步上传联系人
    // 注：数据同步请在连接服务器之后进行，否则可能失败
    SEND_AIUIMESSAGE(AIUIConstant::CMD_SYNC, type, 0,
                     paramJson.toString().c_str(), syncData);
}

#ifdef AIUI_V2
/**
 * 同步所见即可说的内容。
 */
void syncV2SeeSayData()
{
    string seeSayContent = readFileAsString(TEST_SEE_SAY_PATH);
    Json::Value contentJson;
    Json::Reader reader;
    if (!reader.parse(seeSayContent, contentJson, false)) {
        cout << "syncV2SeeSayData parse error! info=" << seeSayContent << endl;
        return;
    }
    /*注意：传入的数据一定要为utf-8编码
     * 　　可见即可说的内容为json数组
     [{
     　 //资源名称
　　　　"res_name": "IFLYTEK.telephone_contact",
       //内容要进行base64编码
　　　　"data": "base64"　
　　　}]
     */

    cout << "see say content: " << contentJson.asString() << endl;
    //整个json在进行base64编码
    string dataStrBase64 = Base64Util::encode(contentJson.asString());
    Json::Value syncSeeSayJson;
    syncSeeSayJson["data"] = dataStrBase64;
    string jsonStr = syncSeeSayJson.toString();
    AIUIBuffer syncData = aiui_create_buffer_from_data(jsonStr.c_str(), jsonStr.length());

    // 给该次同步加上自定义tag，在返回结果中可通过tag将结果和调用对应起来
    Json::Value paramJson;
    paramJson["tag"] = "sync_see_say_tag";

    // 注：数据同步请在连接服务器之后进行，否则可能失败
    SEND_AIUIMESSAGE(AIUIConstant::CMD_SYNC, AIUIConstant::SYNC_DATA_SEE_SAY, 0,
                     paramJson.toString().c_str(), syncData);
}

#endif

/**
 * 查询动态实体同步状态。
 */
void querySyncSchemaStatus()
{
    // 构造查询json字符串，填入同步schema数据返回的sid
    Json::Value queryJson;
    queryJson["sid"] = gSyncSid;

    // 发送同步数据状态查询消息，设置arg1为schema数据类型，params为查询字符串
    SEND_AIUIMESSAGE4(AIUIConstant::CMD_QUERY_SYNC_STATUS,
                      AIUIConstant::SYNC_DATA_SCHEMA,
                      0,
                      queryJson.toString().c_str());
}

/**
 * 同步可见即可说数据。
 */
void syncSpeakableData() {}

#if defined(__linux) || defined(__ANDROID__)
    #include <sys/socket.h>
    #include <net/if.h>
    #include <sys/ioctl.h>

/**
 * 获取mac地址。
 *
 * @param mac
 */
static void GenerateMACAddress(char* mac)
{
    // reference: https://stackoverflow.com/questions/1779715/how-to-get-mac-address-of-your-machine-using-a-c-program/35242525
    int sock = socket(AF_INET, SOCK_DGRAM, 0);
    if (sock < 0) {
        return;
    };

    struct ifconf ifc{};
    char buf[1024];
    int success = 0;

    ifc.ifc_len = sizeof(buf);
    ifc.ifc_buf = buf;
    if (ioctl(sock, SIOCGIFCONF, &ifc) == -1) {
        return;
    }

    struct ifreq* it = ifc.ifc_req;
    const struct ifreq* const end = it + (ifc.ifc_len / sizeof(struct ifreq));
    struct ifreq ifr{};

    for (; it != end; ++it) {
        strcpy(ifr.ifr_name, it->ifr_name);
        if (ioctl(sock, SIOCGIFFLAGS, &ifr) == 0) {
            if (!(ifr.ifr_flags & IFF_LOOPBACK)) {    // don't count loopback
                if (ioctl(sock, SIOCGIFHWADDR, &ifr) == 0) {
                    success = 1;
                    break;
                }
            }
        } else {
            return;
        }
    }

    unsigned char mac_address[6];
    if (success) memcpy(mac_address, ifr.ifr_hwaddr.sa_data, 6);

    sprintf(mac,
            "%02x:%02x:%02x:%02x:%02x:%02x",
            mac_address[0],
            mac_address[1],
            mac_address[2],
            mac_address[3],
            mac_address[4],
            mac_address[5]);
    close(sock);
}
#endif

long FileSize(const char* file_path) {
    struct stat st;
    if (stat(file_path, &st) == 0) {
        return st.st_size;
    }
    return -1; 
}

/**
 * 初始化设置。
 *
 * @param log
 */
static void initSetting(bool log = true)
{

    AIUISetting::setAIUIDir(TEST_ROOT_DIR_PATH);
    AIUISetting::setMscDir(MSC_DIR_PATH);
    AIUISetting::setNetLogLevel(log ? aiui_debug : aiui_none);

    long file_size = FileSize(LOG_DIR_PATH);
    if (file_size == -1) {
        std::cerr << "Error: Unable to get file size or file does not exist." << std::endl;
        return;
    }
    else {  
            if (file_size > 10*1024*1024){
            remove(LOG_DIR_PATH);
        }
    }  

    char mac[64] = {0};
    GenerateMACAddress(mac);

    // 为每一个设备设置唯一对应的序列号SN（最好使用设备硬件信息(mac地址，设备序列号等）生成），以便正确统计装机量，
    // 避免刷机或者应用卸载重装导致装机量重复计数
    AIUISetting::setSystemInfo(AIUI_KEY_SERIAL_NUM, mac);

    // 6.6.xxxx.xxxx版本设置用户唯一标识uid（可选，AIUI后台服务需要，不设置则会使用上面的SN作为uid）
    // 5.6.xxxx.xxxx版本SDK不能也不需要设置uid
    // AIUISetting::setSystemInfo(AIUI_KEY_UID, "1234567890");
}

void AIUI_Node::sendMessage(const std::string& message) {
    auto request = std::make_shared<ollama_ros_msgs::srv::Chat::Request>();
    request->content = message;
    waiting_for_response_ = true;
    cout << "正在思索整理中..." << endl;
    // 使用回调处理响应，不保存 future
    client_->async_send_request(
        request,
        [this](rclcpp::Client<ollama_ros_msgs::srv::Chat>::SharedFuture future) {
            this->response_callback(future);
        }
    );
}

void AIUI_Node::response_callback(rclcpp::Client<ollama_ros_msgs::srv::Chat>::SharedFuture future) {
    try {
        auto response = future.get();
        if (response) {
            string rmText = removeTags(response->content);
            std::cout << rmText << std::flush;
            startTTS(rmText);
            std::cout << "\nresponse done." << std::endl;
            waiting_for_response_ = false;
            player->stop();
        }
    } catch (const std::exception& e) {
        RCLCPP_ERROR(this->get_logger(), "Error processing response: %s", e.what());
    }
}

string AIUI_Node::removeTags(const std::string& input) {
    std::string result = input;
    size_t start_pos = 0;

    // 循环查找并移除 <think> 和 </think> 及其之间的内容
    while ((start_pos = result.find("<think>", start_pos)) != std::string::npos) {
        size_t end_pos = result.find("</think>", start_pos);
        if (end_pos == std::string::npos) {
            // 如果没有找到对应的结束标签，直接返回结果
            break;
        }

        // 计算需要移除的部分长度
        size_t length_to_remove = end_pos - start_pos + strlen("</think>");
        result.erase(start_pos, length_to_remove);

        // 更新搜索起点
        start_pos = start_pos; // 从当前位置继续查找
    }
    return result;
}

// topic通信
// void AIUI_Node::tts_Callback(std_msgs::msg::String::SharedPtr msg){
//     tts_text = msg->data;
//     Json::Value resultJson;
//     Json::Reader reader;
//     Json::Value contentJson;
//     Json::Value partialtJson;
//     if (reader.parse(tts_text, resultJson, false)){
//         contentJson = resultJson["content"];
//         partialtJson = resultJson["is_partial"];
//     }

//     if (partialtJson.asBool()) {
//         waiting_for_response_ = true;
//         cout << "正在思索整理中..." << endl;
//     } else {
//         string rmText = removeTags(contentJson.asString());
//         startTTS(rmText);
//         cout << "reslut_text : " << contentJson.asString() << endl;
//         cout << "Response done." << endl;
//         //RCLCPP_INFO(this->get_logger(), "Response done.");
//         waiting_for_response_ = false;
//         player->stop();
//     }

// }


void AIUI_Node::awake_Callback(std_msgs::msg::Int8::SharedPtr msg){
    awake_flag = msg->data;
    if (!is_wakeup_called) {
        wakeup();
        is_wakeup_called = true;  // 设置标志变量为true，表示wakeup已被调用
    }
    if (!waiting_for_response_){
        if (awake_flag == 1) {
            if (record_status){
                alsaStop();
            }
            startTTS(awake_word);
            player->stop();
            sleep(1.5);
            alsaStart();
        }
        else{
            is_wakeup_called = false;
        }
    }
}

AIUI_Node::AIUI_Node(const std::string &node_name,
    const rclcpp::NodeOptions &options) : rclcpp::Node(node_name, options){
    RCLCPP_INFO(this->get_logger(),"%s node init!\n",node_name.c_str());

    /***服务客户端创建***/
    client_ = this->create_client<ollama_ros_msgs::srv::Chat>("chat_service");

    /***识别文本话题发布者创建***/
    // chat_words_pub = this->create_publisher<std_msgs::msg::String>("chat_message",10);
    /***TTS输出文本话题订阅者创建***/
    // tts_words_sub = this->create_subscription<std_msgs::msg::String>(
    //     "chat_response",10,std::bind(&AIUI_Node::tts_Callback,this,std::placeholders::_1));
    /***唤醒标志位话题订阅者创建***/
    awake_flag_sub = this->create_subscription<std_msgs::msg::Int8>(
        "awake_flag",10,std::bind(&AIUI_Node::awake_Callback,this,std::placeholders::_1));

    // 等待服务可用
    while (!client_->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for service.");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Service not available, waiting again...");
    }
    
    RCLCPP_INFO(this->get_logger(), "Chat Client Node initialized");
}

AIUI_Node::~AIUI_Node(){
    destroyAgent();
    RCLCPP_INFO(this->get_logger(),"AIUI_Node over!\n");
}

void signal_handler(int) {
  if (node) {
    node->~AIUI_Node(); 
    rclcpp::shutdown();
  }
  exit(0);
}


int main(int argc, char** argv)
{
    rclcpp::init(argc,argv);
    node = std::make_shared<AIUI_Node>("aiui_node",rclcpp::NodeOptions());

    // 注册信号处理器
    signal(SIGINT, signal_handler);

    // 打印SDK版本
    std::cout << "Version: " << getVersion() << std::endl;

    initSetting();

    cout << "createAgent" << endl;
    if (nullptr == g_pListener)
        g_pListener = new DemoListener;
    createAgent();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
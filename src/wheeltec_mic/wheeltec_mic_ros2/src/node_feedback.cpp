/****************************************************************/
/* Copyright (c) 2023 WHEELTEC Technology, Inc   				*/
/* function:Functional node feedback							*/
/* 功能：功能节点反馈												*/
/****************************************************************/
#include "node_feedback.h"
/**************************************************************************
函数功能：获取节点进程pid
返回  值：int pid
**************************************************************************/
int Feedback::node_kill(const char*  progress)
{
	char get_pid[32] = "pgrep -f ";
	strcat(get_pid,progress);
	FILE *fp = popen(get_pid,"r");
	if (fp == NULL)
	{
		printf("popen failed,get_pid = %s",get_pid);
		return -1;
	}
	
	char pid[16] = {0};
	fgets(pid,16,fp);
	if (strlen(pid) == 0)
	{
		pclose(fp);
		return -1;
	}
	pclose(fp);
	
	char cmd[32] = "kill -9 ";
	strcat(cmd,pid);
	system(cmd);
	return 0;
}

/**************************************************************************
函数功能：雷达跟随开启成功标志位sub回调函数
入口参数：laser_follow_flag.msg  
返回  值：无
**************************************************************************/
void Feedback::laser_follow_Callback(const std_msgs::msg::Int8::SharedPtr msg){
	laser_follow_flag = msg->data;
	if (laser_follow_flag){
		WHOLE = head + audio_path + "/rplidar_open.wav";
		system(WHOLE.c_str());
		cout<<"雷达跟随打开成功"<<endl;
	}
}

/**************************************************************************
函数功能：离线命令词识别结果sub回调函数
入口参数：命令词字符串
返回  值：无
**************************************************************************/
void Feedback::voice_words_Callback(const std_msgs::msg::String::SharedPtr msg){
	string str1 = msg->data;    //取传入数据
	string str2 = "关闭雷达跟随";

	if (str1 == str2){
		node_kill("/laserfollower");
		cmd_vel_pub->publish(geometry_msgs::msg::Twist());
		sleep(1);
		WHOLE = head + audio_path + "/rplidar_close.wav";
		system(WHOLE.c_str());
		cout<<"已关闭雷达跟随"<<endl;
	}
}

Feedback::Feedback(const std::string &node_name)
: rclcpp::Node(node_name){
	RCLCPP_INFO(this->get_logger(),"%s node init!\n",node_name.c_str());
	/***声明参数并获取***/
	this->declare_parameter<string>("audio_path","");
	this->get_parameter("audio_path",audio_path);
	/***速度话题发布者创建***/
	cmd_vel_pub = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel",10);
	/***雷达跟随话题订阅者创建***/
	laser_follow_sub = this->create_subscription<std_msgs::msg::Int8>(
		"laser_follow_flag",10,std::bind(&Feedback::laser_follow_Callback,this,_1));
	/***离线命令词识别结果话题订阅者创建***/
	voice_words_sub = this->create_subscription<std_msgs::msg::String>(
		"voice_words",10,std::bind(&Feedback::voice_words_Callback,this,_1));
}

Feedback::~Feedback(){
	RCLCPP_INFO(this->get_logger(),"node_feedback over!\n");
}

void Feedback::run(){
	while(rclcpp::ok()){
		rclcpp::spin_some(this->get_node_base_interface());
	}
}

int main(int argc, char const *argv[])
{
	rclcpp::init(argc,argv);
	Feedback feedback("node_feedback");
	feedback.run();
	return 0;
}
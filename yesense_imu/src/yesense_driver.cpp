#include "yesense_driver.h"
#include <map>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/case_conv.hpp>

namespace yesense{

YesenseDriver::YesenseDriver(ros::NodeHandle& nh, ros::NodeHandle& nh_private)
    : nh_(nh)
    , nh_private_(nh_private)
    , port_("/dev/ttyUSB0")
    , baudrate_(460800)
    , buffer_size_(4096)
    , wait_response_flag_(false)
    , check_respose_flag_(false)
    , error_respose_cnt_(0)
    , configured_(false)
{
    nh_private_.param("yesense_port",port_,port_);
    nh_private_.param("yesense_baudrate",baudrate_,baudrate_);

    nh_private_.param<std::string>("tf_parent_frame_id", tf_parent_frame_id_, "imu_base");
	nh_private_.param<std::string>("tf_frame_id", tf_frame_id_, "imu_link");
	nh_private_.param<std::string>("frame_id", frame_id_, "imu_link");
    nh_private_.param<std::string>("imu_topic", imu_topic_, "/imu");


	nh_private_.param<double>("time_offset_in_seconds", time_offset_in_seconds_, 0.0);
	nh_private_.param<bool>("broadcast_tf", broadcast_tf_, true);
	nh_private_.param<double>("linear_acceleration_stddev", linear_acceleration_stddev_, 0.0);
	nh_private_.param<double>("angular_velocity_stddev", angular_velocity_stddev_, 0.0);
	nh_private_.param<double>("orientation_stddev", orientation_stddev_, 0.0);


    // sensor_msgs::Imu g_imu;
	g_imu_.header.frame_id = frame_id_;

	g_imu_.linear_acceleration_covariance[0] = linear_acceleration_stddev_;
	g_imu_.linear_acceleration_covariance[4] = linear_acceleration_stddev_;
	g_imu_.linear_acceleration_covariance[8] = linear_acceleration_stddev_;

	g_imu_.angular_velocity_covariance[0] = angular_velocity_stddev_;
	g_imu_.angular_velocity_covariance[4] = angular_velocity_stddev_;
	g_imu_.angular_velocity_covariance[8] = angular_velocity_stddev_;

	g_imu_.orientation_covariance[0] = orientation_stddev_;
	g_imu_.orientation_covariance[4] = orientation_stddev_;
	g_imu_.orientation_covariance[8] = orientation_stddev_;

    // 数据缓冲区
    data_buffer_ptr_ = boost::shared_ptr<boost::circular_buffer<char> >(new boost::circular_buffer<char>(buffer_size_));

    // 读取串口数据所需的变量
    bytes_    = 0;
    
    /*********     参数设置   ********/

    //产品信息相关
    sub_product_info_ = nh_.subscribe<std_msgs::Int8>("production_query",1,&YesenseDriver::onProductionInformationQuery,this);

    //波特率相关
    sub_baudrate_request_ = nh_.subscribe<std_msgs::Empty>("baudrate_query",1,&YesenseDriver::onBaudrateQuery,this);
    sub_baudrate_setting_ = nh_.subscribe<std_msgs::UInt8>("baudrate_setting",1,&YesenseDriver::onBaudrateSetting,this);

    //频率相关
    sub_frequency_request_ = nh_.subscribe<std_msgs::Empty>("freequency_query",1,&YesenseDriver::onFrequencyQuery,this);
    sub_frequency_setting_ = nh_.subscribe<std_msgs::UInt8>("freequency_setting",1,&YesenseDriver::onFrequencySetting,this);

    //输出内容相关
    sub_output_content_request_ = nh_.subscribe<std_msgs::Empty>("output_content_query",1,&YesenseDriver::onOutputContentQuery,this);
    sub_output_content_setting_ = nh_.subscribe<std_msgs::UInt8>("output_content_setting",1,&YesenseDriver::onOutputContentSetting,this);

    sub_standard_request_ = nh_.subscribe<std_msgs::UInt8>("standard_param_query",1,&YesenseDriver::onStandardParamQuery,this);
    sub_standard_setting_ = nh_.subscribe<std_msgs::UInt8>("standard_param_setting",1,&YesenseDriver::onStandardParamSetting,this);

    sub_mode_request_ = nh_.subscribe<std_msgs::UInt8>("mode_query",1,&YesenseDriver::onModeSettingQuery,this);
    sub_mode_setting_ = nh_.subscribe<std_msgs::UInt8>("mode_setting",1,&YesenseDriver::onModeSettingSetting,this);

    sub_nmea_request_ = nh_.subscribe<std_msgs::Empty>("nmea_query",1,&YesenseDriver::onNmeaQuery,this);
    sub_nmea_setting_ = nh_.subscribe<std_msgs::UInt8>("nmea_setting",1,&YesenseDriver::onNmeaSetting,this);

    sub_gyro_bias_estimate_ = nh_.subscribe<std_msgs::String>("yesense/gyro_bias_estimate", 1, &YesenseDriver::on_gyro_bias_estimate,this);

    // data subscribe
    imu_pub_        = nh_.advertise<sensor_msgs::Imu>(imu_topic_, 100);
    imu_marker_pub_ = nh_.advertise<visualization_msgs::Marker>("imu/marker", 100);
	imu_inertial_data_pub_ = nh_.advertise<yesense_imu::YesenseImuInertialData>("yesense/inertial_data", 100);
	imu_nav_pub_ = nh_.advertise<yesense_imu::YesenseImuNavData>("yesense/nav_data", 100);

	imu_gnss_data_pub_ = nh_.advertise<yesense_imu::YesenseImuGnssData>("yesense/gnss_data", 100);
	imu_gps_data_pub_ = nh_.advertise<yesense_imu::YesenseImuGpsData>("yesense/gps_data", 100);
    imu_status_pub_ = nh_.advertise<yesense_imu::YesenseImuStatus>("yesense/imu_status", 100);
    imu_sensor_data_pub_ = nh_.advertise<yesense_imu::YesenseImuSensorData>("yesense/sensor_data", 100);
    pub_cmd_exec_resp_ = nh_.advertise<yesense_imu::YesenseImuCmdResp>("yesense/command_resp", 100);

    response.response_need = false;
    response.response_found = false;
    response.response_recv_done = false;
    response.len = 0;
    memset((uint8_t *)&yesense_out, 0, sizeof(yesense_out));

    initSerial();

    deseralize_thread_ = boost::thread(boost::bind(&YesenseDriver::_spin,this));
}

YesenseDriver::~YesenseDriver()
{
    ROS_INFO("Close yesense device.");
    if(serial_.isOpen())
    {
        serial_.close();
    }
    data_buffer_ptr_.reset();

    configured_ = false;
    deseralize_thread_.join();
}

void YesenseDriver::run()
{   
    try 
    {
        ros::Rate rate(1000);

        while(ros::ok())
        {
            //read data from serial
            if (serial_.available())
            {
                data_ = serial_.read(serial_.available());
                //ROS_INFO("Read data size: %d",data_.length());
            
                {
                    boost::mutex::scoped_lock lock(m_mutex_);  
                
                    for(int i=0;i<data_.length();i++)
                    {
                        data_buffer_ptr_->push_back(data_[i]);
                    }
                }
            
            }

            ros::spinOnce();  
            rate.sleep();
        }

        ROS_WARN("ROS Exited !");
    } 
    catch (std::exception &err) 
    {
        ROS_ERROR("error in 'run' function, msg: %s", err.what());
    }    
}

void YesenseDriver::initSerial()
{
    while (serial_.isOpen() == false)
    {
        try
        {
            ROS_INFO("port:%s, rate:%d", port_.c_str(), baudrate_);
            serial_.setPort(port_);
            serial_.setBaudrate(baudrate_);
            serial::Timeout to = serial::Timeout::simpleTimeout(1000);
            serial_.setTimeout(to);
            serial_.open();
            serial_.flushInput();
        }
        catch (serial::IOException &e)
        {
            ROS_INFO("Unable to open serial port: %s ,Trying again in 5 seconds.",serial_.getPort().c_str());
            ros::Duration(5).sleep();
        }
    }
    
    if (serial_.isOpen())
    {
        ROS_INFO("Serial port: %s initialized and opened.", serial_.getPort().c_str());

        configured_ = true;
    }
}

void YesenseDriver::onProductionInformationQuery(const std_msgs::Int8::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);
    param_prev_topic_id_ = "product info query";

    if(msg->data == 1) //查询软件版本信息
    {
        param_prev_topic_cmd_ = "softver";
        //header
        buffer[0] = 0x59;
        buffer[1] = 0x53;

        //class
        buffer[2]    = PORDUCTION_INFO;
        
        // id & length
        unsigned short id_length = 0;

        //设置id 为 0
        // id_length |= 0 << 0;

        //长度设置
        id_length |= (1 << 3);

        buffer[3] = id_length & 0xff;
		buffer[4] = id_length >> 8 & 0xff;

        //data
        buffer[5] = 0x02;

        //crc check
        uint8_t ck1=0, ck2=0;
        for(int i=0;i<4;i++)
        {
            ck1 += buffer[2+i];
            ck2 += ck1;
        } 

        buffer[6] = ck1;
        buffer[7] = ck2;
    }
    else if(msg->data == 2)
    {
        param_prev_topic_cmd_ = "product_info";        
        //查询产品信息
        //header
        buffer[0] = 0x59;
        buffer[1] = 0x53;

        //class
        buffer[2]    = PORDUCTION_INFO;

        // id & length
        unsigned short id_length = 0;

        //长度设置
        id_length |= (1 << 3);

        buffer[3] = id_length & 0xff;
		buffer[4] = id_length >> 8 & 0xff;

        //data
        buffer[5] = 0x04;

        //crc check
        uint8_t ck1=0, ck2=0;
        for(int i=0;i<4;i++)
        {
            ck1 += buffer[2+i];
            ck2 += ck1;
        } 

        buffer[6] = ck1;
        buffer[7] = ck2;
    }

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense: "<<std::endl;
    for(int i=0;i<8;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),8);

        //暂时不考虑写入不成功的情况
        if(size == 8)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2];//param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07;//param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//
}

/*
 *查询当前波特率的值
*/
void YesenseDriver::onBaudrateQuery(const std_msgs::Empty::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);

    param_prev_topic_id_ = "baudrate command";
    param_prev_topic_cmd_ = "query";

    //header
    buffer[0] = 0x59;
    buffer[1] = 0x53;

    //class
    buffer[2]    = BAUDRATE;
    
    // id & length
    unsigned short id_length = 0;

    //设置id 为 0（查询）
    // id_length |= 0 << 0;

    //长度设置为0
    // id_length |= (1 << 3);

    buffer[3] = id_length & 0xff;
    buffer[4] = id_length >> 8 & 0xff;

    //crc check
    uint8_t ck1=0, ck2=0;
    for(int i=0;i<3;i++)
    {
        ck1 += buffer[2+i];
        ck2 += ck1;
    } 

    buffer[5] = ck1;
    buffer[6] = ck2;

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense: "<<std::endl;
    for(int i=0;i<7;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),7);
        
        if(size == 7)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2]; //param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07; //param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//
}

/*
 *设置波特率
*/
void YesenseDriver::onBaudrateSetting(const std_msgs::UInt8::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);
    param_prev_topic_id_ = "baudrate command";
    param_prev_topic_cmd_ = "setting";

    //header
    buffer[0] = 0x59;
    buffer[1] = 0x53;

    //class
    buffer[2]    = BAUDRATE;
    
    // id & length
    unsigned short id_length = 0;

    //设置id  (最高位表示写入到内存或者flash)
    if(msg->data >> 7 & 0x01 )
        id_length |= 1 << 0;     //设置到memery
    else
        id_length |= 1 << 1;     //设置到flash

    //长度设置为1
    id_length |= (1 << 3);
    

    buffer[3] = id_length & 0xff;
    buffer[4] = id_length >> 8 & 0xff;

    //data
    buffer[5] = (msg->data) & 0x0f;

    //crc check
    uint8_t ck1=0, ck2=0;
    for(int i=0;i<4;i++)
    {
        ck1 += buffer[2+i];
        ck2 += ck1;
    } 

    // crc
    buffer[6] = ck1;
    buffer[7] = ck2;

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense: "<<std::endl;
    for(int i=0;i<8;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),8);
        if(size == 8)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2]; //param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07; //param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//

}

/*
 *查询输出频率
*/
void YesenseDriver::onFrequencyQuery(const std_msgs::Empty::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);

    param_prev_topic_id_ = "output frequency command";
    param_prev_topic_cmd_ = "query";

    //header
    buffer[0] = 0x59;
    buffer[1] = 0x53;

    //class
    buffer[2]    = OUTPUT_FREEQUENCY;
    
    // id & length
    unsigned short id_length = 0;

    //设置id 为 0（查询）
    // id_length |= 0 << 0;

    //长度设置为0
    // id_length |= (1 << 3);

    buffer[3] = id_length & 0xff;
    buffer[4] = id_length >> 8 & 0xff;

    //crc check
    uint8_t ck1=0, ck2=0;
    for(int i=0;i<3;i++)
    {
        ck1 += buffer[2+i];
        ck2 += ck1;
    } 

    buffer[5] = ck1;
    buffer[6] = ck2;

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense: "<<std::endl;
    for(int i=0;i<7;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),7);
        if(size == 7)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2]; //param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07; //param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//


}

/*
 *设置输出频率
*/
void YesenseDriver::onFrequencySetting(const std_msgs::UInt8::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);

    param_prev_topic_id_ = "output frequency command";
    param_prev_topic_cmd_ = "setting";

    //header
    buffer[0] = 0x59;
    buffer[1] = 0x53;

    //class
    buffer[2]    = OUTPUT_FREEQUENCY;
    
    // id & length
    unsigned short id_length = 0;

    //设置id 
    if(msg->data >> 7 & 0x01 )
        id_length |= 1 << 0;     //设置到memery    id设置为0
    else 
        id_length |= 1 << 1;     //设置到flash     id设置为1

    //长度设置为1
    id_length |= (1 << 3);

    buffer[3] = id_length & 0xff;
    buffer[4] = id_length >> 8 & 0xff;

    //低4位为参数值
    buffer[5] = (msg->data) & 0x0f;

    //crc check
    uint8_t ck1=0, ck2=0;
    for(int i=0;i<4;i++)
    {
        ck1 += buffer[2+i];
        ck2 += ck1;
    } 

    buffer[6] = ck1;
    buffer[7] = ck2;

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense: "<<std::endl;
    for(int i=0;i<8;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),8);
        if(size == 8)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2]; //param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07; //param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//

}

/*
 *查询输出内容
*/
void YesenseDriver::onOutputContentQuery(const std_msgs::Empty::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);

    param_prev_topic_id_ = "output contend command";
    param_prev_topic_cmd_ = "query";

    //header
    buffer[0] = 0x59;
    buffer[1] = 0x53;

    //class
    buffer[2]    = OUTPUT_CONTENT;

    // id & length
    unsigned short id_length = 0;

    //设置id 为 0（查询）
    // id_length |= 0 << 0;

    //长度设置为0
    // id_length |= (1 << 3);

    buffer[3] = id_length & 0xff;
    buffer[4] = id_length >> 8 & 0xff;

    //crc check
    uint8_t ck1=0, ck2=0;
    for(int i=0;i<3;i++)
    {
        ck1 += buffer[2+i];
        ck2 += ck1;
    } 

    buffer[5] = ck1;
    buffer[6] = ck2;

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense: "<<std::endl;
    for(int i=0;i<7;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),7);

        if(size == 7)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2]; //param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07; //param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//

}

/*
 *设置输出内容
*/
void YesenseDriver::onOutputContentSetting(const std_msgs::UInt8::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);

    param_prev_topic_id_ = "output contend command";
    param_prev_topic_cmd_ = "setting";

    //header
    buffer[0] = 0x59;
    buffer[1] = 0x53;

    //class
    buffer[2]    = OUTPUT_CONTENT;

    // id & length
    unsigned short id_length = 0;

     //设置id 
    if(msg->data >> 7 & 0x01 )
        id_length |= 1 << 0;     //设置到memery    id设置为0
    else 
        id_length |= 1 << 1;     //设置到flash     id设置为1

    //长度设置为2
    id_length |= (1 << 4);

    buffer[3] = id_length & 0xff;
    buffer[4] = id_length >> 8 & 0xff;

    //低4位为参数值
    uint8_t data_type = (msg->data) & 0x0f;
    if(data_type == 0x00)
    {
        //全部不输出
        buffer[5] = 0x00;
        buffer[6] = 0x00;
    }
    else if (data_type == 0x01)
    {
        //输出加计、陀螺、磁、欧拉、四元素
        buffer[5] = 0xf8;
        buffer[6] = 0x00;
    }
    else if(data_type == 0x02)
    {
        //输出位置、速度、UTC、加计、陀螺、磁、欧拉、四元素
        buffer[5] = 0xff;
        buffer[6] = 0x00;
    }

    //crc check
    uint8_t ck1=0, ck2=0;
    for(int i=0;i<5;i++)
    {
        ck1 += buffer[2+i];
        ck2 += ck1;
    } 

    buffer[7] = ck1;
    buffer[8] = ck2;

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense: "<<std::endl;
    for(int i=0;i<9;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),9);

        if(size == 9)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2]; //param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07; //param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//

}

 // 标准参数设置相关0x05
void YesenseDriver::onStandardParamQuery(const std_msgs::UInt8::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);

    param_prev_topic_id_ = "parameter command";
    param_prev_topic_cmd_ = "query";

    //header
    buffer[0] = 0x59;
    buffer[1] = 0x53;

    //class
    buffer[2]    = STANDARD_PARAM;

    // id & length
    unsigned short id_length = 0;

    //设置id 为 0（查询）
    // id_length |= 0 << 0;

    //长度设置为1
    id_length |= (1 << 3);

    buffer[3] = id_length & 0xff;
    buffer[4] = id_length >> 8 & 0xff;

    if(msg->data == 1)
        buffer[5] = 0x03;    //陀螺用户零偏
    else if(msg->data ==2)
        buffer[5] = 0x81;    //读静态阈值

    //crc check
    uint8_t ck1=0, ck2=0;
    for(int i=0;i<4;i++)
    {
        ck1 += buffer[2+i];
        ck2 += ck1;
    } 
    
    buffer[6] = ck1;
    buffer[7] = ck2;

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense: "<<std::endl;
    for(int i=0;i<8;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),8);

        if(size == 8)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2]; //param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07; //param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//

}

//标准参数设置0x05
void YesenseDriver::onStandardParamSetting(const std_msgs::UInt8::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);

    int pkg_length = 0;
    param_prev_topic_id_ = "parameter command";
    param_prev_topic_cmd_ = "setting";  

    //header
    buffer[0] = 0x59;
    buffer[1] = 0x53;

    //class
    buffer[2]    = STANDARD_PARAM;

    // id & length
    unsigned short id_length = 0;

    //设置id 
    if(msg->data >> 7 & 0x01 )
    {
        //设置到memery 
        buffer[3]    = 0x71;
        buffer[4]    = 0x00;

        buffer[5]     = 0x03;   buffer[6]    = 0x0C;    buffer[7]     = 0x00;    buffer[8]     = 0x00;    buffer[9]     = 0x00;   buffer[10]    = 0x00;
        buffer[11]    = 0x00;   buffer[12]   = 0x00;    buffer[13]    = 0x00;    buffer[14]    = 0x00;    buffer[15]    = 0x00;   buffer[16]    = 0x00;
        buffer[17]    = 0x00;   buffer[18]   = 0x00;

        //crc check
        uint8_t ck1=0, ck2=0;
        for(int i=0;i<17;i++)
        {
            ck1 += buffer[2+i];
            ck2 += ck1;
        } 
        buffer[19]   = ck1;
        buffer[20]   = ck2;

        pkg_length = 21;
    }
    else 
    {
        //设置到flash     id设置为2
        uint8_t mode = msg->data & 0x0f;
        if(mode == 1)
        {
            //姿态角设置为0
            buffer[3]    = 0x32;
            buffer[4]    = 0x00;

            buffer[5]     = 0x11;   buffer[6]    = 0x04;    buffer[7]     = 0x00;    buffer[8]     = 0x00;    buffer[9]     = 0x00;   buffer[10]    = 0x00;
           
            //crc check
            uint8_t ck1=0, ck2=0;
            for(int i=0;i<9;i++)
            {
                ck1 += buffer[2+i];
                ck2 += ck1;
            } 
            buffer[11]   = ck1;
            buffer[12]   = ck2;

            pkg_length = 13;
        }
        else if(mode == 3)
        {
            //陀螺用户零偏差置0
            buffer[3]    = 0x72;
            buffer[4]    = 0x00;

            buffer[5]    = 0x03;  buffer[6]     = 0x0C;  buffer[7]     = 0x00;  buffer[8]     = 0x00;   buffer[9]    = 0x00;
            buffer[10]   = 0x00;  buffer[11]    = 0x00;  buffer[12]    = 0x00;  buffer[13]    = 0x00;   buffer[14]   = 0x00;   
            buffer[15]   = 0x00;  buffer[16]    = 0x00;  buffer[17]    = 0x00;  buffer[18]    = 0x00;   
           
            //crc check
            uint8_t ck1=0, ck2=0;
            for(int i=0;i<17;i++)
            {
                ck1 += buffer[2+i];
                ck2 += ck1;
            } 
            buffer[19]   = ck1;
            buffer[20]   = ck2;

            pkg_length = 21;
        }
    }

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense[YesenseDriver::onStandardParamSetting]: "<<std::endl;
    for(int i=0;i<pkg_length;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),pkg_length);
        
        if(size == pkg_length)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2]; //param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07; //param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//
}

// 模式设置相关0x4D
void YesenseDriver::onModeSettingQuery(const std_msgs::UInt8::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);

    param_prev_topic_id_ = "function mode command";
    param_prev_topic_cmd_ = "query"; 

    //header
    buffer[0] = 0x59;
    buffer[1] = 0x53;

    //class
    buffer[2]    = MODE_SETTING;

    // id & length
    unsigned short id_length = 0;

    //长度设置为1
    id_length |= (1 << 3);

    buffer[3] = id_length & 0xff;
    buffer[4] = id_length >> 8 & 0xff;

    if(msg->data == 1)
        buffer[5] = 0x02;
    else if(msg->data ==2)
        buffer[5] = 0x20;
    else if(msg->data ==3)
        buffer[5] = 0x4f;

    //crc check
    uint8_t ck1=0, ck2=0;
    for(int i=0;i<4;i++)
    {
        ck1 += buffer[2+i];
        ck2 += ck1;
    } 
    
    buffer[6] = ck1;
    buffer[7] = ck2;

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense: "<<std::endl;
    for(int i=0;i<8;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),8);

        if(size == 8)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2]; //param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07; //param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//

}

//0x4D
void YesenseDriver::onModeSettingSetting(const std_msgs::UInt8::ConstPtr& msg)
{
    boost::shared_array<uint8_t> buffer = boost::shared_array<uint8_t>(new uint8_t[64]);

    param_prev_topic_id_ = "function mode command";
    param_prev_topic_cmd_ = "setting"; 

    //header
    buffer[0] = 0x59;
    buffer[1] = 0x53;

    //class
    buffer[2]    = MODE_SETTING;

    // id & length
    unsigned short id_length = 0;
    
    //设置id 
    if(msg->data >> 7 & 0x01 )
        id_length |= 1 << 0;     //设置到memery    id设置为0
    else 
        id_length |= 1 << 1;     //设置到flash     id设置为1

    //长度设置为2
    id_length |= (1 << 4);

    buffer[3] = id_length & 0xff;
    buffer[4] = id_length >> 8 & 0xff;

    uint8_t mode = msg->data & 0x0f;
    if(mode == 1)
    {
        //
        buffer[5] = 0x50;
        buffer[6] = 0x01;
    } 
    else
        return;

    //crc check
    uint8_t ck1=0, ck2=0;
    for(int i=0;i<5;i++)
    {
        ck1 += buffer[2+i];
        ck2 += ck1;
    } 
    
    buffer[7] = ck1;
    buffer[8] = ck2;

#if(ENBALE_DEBUG_OUTPUT)
    std::cout<<"Write data to yesense: "<<std::endl;
    for(int i=0;i<9;i++)
        printf("%02X ", buffer[i]);
    std::cout<<std::endl;
#endif//

#if(ENABLE_SERIAL_INPUT)
    if(serial_.isOpen())
    {
        int size = serial_.write(buffer.get(),9);
        if(size == 9)
        {
            {
                boost::mutex::scoped_lock lock(m_response_mutex_);
                //wait_response_flag_ = true;
                response.response_need = true;
                response.type = buffer[2]; //param_class_ = buffer[2];
                response.op_id = buffer[3] & 0x07; //param_id_    = (buffer[3] & 0x07);
            }
        }
    }
#endif//

}

// NMEA输出设置相关0x4E
void YesenseDriver::onNmeaQuery(const std_msgs::Empty::ConstPtr& msg)
{
    
}


void YesenseDriver::onNmeaSetting(const std_msgs::UInt8::ConstPtr& msg)
{
    
}


void YesenseDriver::on_gyro_bias_estimate(const std_msgs::String::ConstPtr& msg)
{
#define BIAS_EST_ON  "\x59\x53\x4D\x11\x00\x51\x01\xB0\x68"
#define BIAS_EST_OFF "\x59\x53\x4D\x11\x00\x51\x02\xB1\x69"
#define BIAS_EST_GET "\x59\x53\x4D\x08\x00\x51\xA6\x9D"

    std::string cmd = boost::to_lower_copy(msg.get()->data);
    std::string err_msg = "";

    uint8_t *ys_cmd   = NULL;
    size_t ys_cmd_len = 0;

    param_prev_topic_id_  = "yesense/gyro_bias_estimate";
    param_prev_topic_cmd_ = cmd;

    if (cmd == "enable") 
    {
        ys_cmd = (uint8_t *)BIAS_EST_ON;
        ys_cmd_len = sizeof(BIAS_EST_ON);
    } 
    else if (cmd == "disable") 
    {
        ys_cmd = (uint8_t *)BIAS_EST_OFF;
        ys_cmd_len = sizeof(BIAS_EST_OFF);
    }
    else if (cmd == "query") 
    {
        ys_cmd = (uint8_t *)BIAS_EST_GET;
        ys_cmd_len = sizeof(BIAS_EST_GET);
    }
    else 
    {
        err_msg = "Invalid command: '" + cmd + "'";
        goto fail;
    }

    if(!serial_.isOpen()) 
    {
        err_msg = "serial port is not opened !";
        goto fail;
    }

    //
    {
        int size = serial_.write(ys_cmd, ys_cmd_len);
        if (size != ys_cmd_len)
        {
            err_msg = "serial write failed !, req_size != writed_size !";
            goto fail;
        }
        
        {
            boost::mutex::scoped_lock lock(m_response_mutex_);
            //wait_response_flag_ = true;
            response.response_need = true;
            response.type = ys_cmd[2];//param_class_ = ys_cmd[2];
            response.op_id = ys_cmd[3] & 0x07; //param_id_    = ys_cmd[3] & 0x07;
        }
    }

    return;

fail:
    yesense_imu::YesenseImuCmdResp resp_msg;
    resp_msg.id  = param_prev_topic_id_;
    resp_msg.cmd = param_prev_topic_cmd_;
    resp_msg.msg = err_msg;
    resp_msg.success = false;
    pub_cmd_exec_resp_.publish(resp_msg);
}

void YesenseDriver::_spin() 
{
    try 
    {
        this->spin();
    } 
    catch (std::exception &err)
    {
        ROS_ERROR("error in 'spin', msg: %s", err.what());
    }    
}

int YesenseDriver::proc_response(const yis_cmd_response_t &cmd, unsigned char *data)
{
    yesense_imu::YesenseImuCmdResp msg;
    unsigned short offset = sizeof(yis_tlv_header_t);

    if(NULL == data)
    {
        return -1;
    }

    msg.id  = param_prev_topic_id_;
    msg.cmd = param_prev_topic_cmd_;

    if(CONFIG_MEMERY == cmd.op_id || CONFIG_FLASH == cmd.op_id)
    {
        msg.success = (cmd.len > 1) ? (((uint8_t)0 == data[1]) ? true : false) : (((uint8_t)0 == data[0]) ? true : false);
        msg.msg = msg.success ? "ok" : "fail";        
    }
    else
    {
        msg.success = true;
        msg.msg = "ok";        

        switch(cmd.type)
        {
            case PORDUCTION_INFO:
            {
                for (int i = 0; i < cmd.len - offset; i++)
                {
                    msg.data.push_back(data[i + offset]);
                }
            }break;

            case BAUDRATE:
            {
                if((unsigned char)1 == cmd.len)
                {
                    msg.data.push_back(data[0]);
                }
                else
                {
                    msg.msg = "len err";
                }
            }break;       

            case OUTPUT_FREEQUENCY:
            {
                if((unsigned char)1 == cmd.len)
                {
                    msg.data.push_back(data[0]);
                }
                else
                {
                    msg.msg = "len err";
                }                
            }break;     

            case OUTPUT_CONTENT:
            {
                if((unsigned char)2 == cmd.len)
                {
                    msg.data.push_back(data[0]);
                    msg.data.push_back(data[1]);                    
                }
                else
                {
                    msg.msg = "len err";
                }                
            }break;     

            case STANDARD_PARAM:
            {     
                for(unsigned int i = 0; i < cmd.len - offset; i++)
                {
                    msg.data.push_back(data[i + offset]);   
                }       
            }break;    

            case MODE_SETTING:  /*type(1B) + data(1B)*/
            {
                if((unsigned char)2 == cmd.len)
                {
                    msg.data.push_back(data[1]);               
                }
                else
                {
                    msg.msg = "len err";
                }                
            }break;   

            default:
            {
                msg.success = false;
                msg.msg = "unkown";    
            }   
            break;                     
        }
    }

    pub_cmd_exec_resp_.publish(msg);

    return 0;
}

void YesenseDriver::spin()
{
    ros::Rate rate(500);

    #define RECV_TIMEOUT_THR    20  /*unit is equal to the above rate*/

    uint16_t tid = 0x00;
    uint16_t prev_tid = 0x00;

    uint32_t gps_header_sum;
    uint32_t recv_len = 0;      
    uint32_t timeout_cnt = 0;

    while(configured_)
    {
        recv_len = data_buffer_ptr_->size();
        //ROS_INFO("obtain len %d", recv_len);
        if(recv_len > 0)
        {          
            // ROS_INFO("recv data len %d,data is:\n", recv_len);
            boost::mutex::scoped_lock lock(m_mutex_);                  
            for(unsigned int i = 0; i < recv_len; i++)
            {
                // ROS_INFO("%02x ", (uint8_t)(data_buffer_ptr_->begin())[i]);
                message_in_[bytes_ + i] = data_buffer_ptr_->begin()[i];                    
            }
            bytes_ += recv_len;
            data_buffer_ptr_->erase_begin(recv_len);     
        }
 
        /*analysis data from message_in_ when total recieved data length is bigger than PROTOCOL_MIN_LEN*/
        if(bytes_ >= PROTOCOL_MIN_LEN)
        {
            int cnt = bytes_;
            int pos = 0;
            while(cnt > 0)
            {
                int ret = analysis_data(message_in_ + pos, cnt, &yesense_out, &response);

                /*未查找到帧头*/
                if(analysis_done == ret)
                {
                    pos++;
                    cnt--;
                }
                else if(data_len_err == ret)
                {
                    if(timeout_cnt >= RECV_TIMEOUT_THR)
                    {
                        timeout_cnt = 0;
                        cnt = 0;
                    }

                    break;
                }
                else if(crc_err == ret || analysis_ok == ret)
                {
                    /*删除已解析完的完整一帧*/               
                    output_data_header_t *header = (output_data_header_t *)(message_in_ + pos);
                    unsigned int frame_len = header->len + PROTOCOL_MIN_LEN;
                    if(response.response_recv_done)
                    {
                        frame_len = response.len + PROTOCOL_MIN_LEN;
                    }

                    if(analysis_ok == ret)
                    {                                      
                        if(response.response_recv_done)
                        {
                            //ROS_INFO("response recv");
                            boost::mutex::scoped_lock lock(m_response_mutex_);
                            response.response_need = false;
                            response.response_found = false;
                            response.response_recv_done = false;
                            proc_response(response, message_in_ + pos + YIS_RESPONSE_CMD_DATA_POS);
                        }
                        else
                        {
                            //ROS_INFO("tid is %d", yesense_out.tid);
                            if(prev_tid != 0 && tid > prev_tid && prev_tid != tid - 1) 
                            {
                                ROS_INFO("Frame losed: prev_TID: %d, cur_TID: %d", prev_tid, tid);
                            }

                            prev_tid = tid;
                            boost::mutex::scoped_lock lock(m_mutex_); 
                            publish_imu(yesense_out);
                        }                           
                    }

                    cnt -= frame_len;
                    pos += frame_len;                    
                }
            }

            //ROS_INFO("analysis once"); if(bytes_ > cnt && cnt > 0)
            memcpy(message_in_, message_in_ + pos, cnt);
            bytes_ = cnt;                         
        }

        rate.sleep();
    }
}

#define EARTH_RADIUS 6378.137 //地球半径
#define Angle_To_Rad(x) (((x) * 3.141592653589793) / 180.0)

void YesenseDriver::update_position_by_gps(const protocol_info_t &imu_data, geometry_msgs::PoseStamped &pose) 
{
    // initial gps location
    static double initial_lon, initial_lat, initial_alt;
    
    // update initial gps location at first invoke
    if(initial_lon == 0 || initial_lat == 0 || initial_alt == 0) 
    {
        ROS_INFO("update initial gps location !");
        
        initial_lon = imu_data.gnss.location.longtidue;
        initial_lat = imu_data.gnss.location.latitude;
        initial_alt = imu_data.gnss.location.altidue;
        
        pose.pose.position.x = 0.0;
        pose.pose.position.y = 0.0;
        pose.pose.position.z = 0.0;
        return; // exit
    }
    
    // calcu relative location
    double radLat1 ,radLat2, radLong1, radLong2, delta_lat, delta_long;
    
    radLat1 = Angle_To_Rad(initial_lat);
    radLong1 = Angle_To_Rad(initial_lon);
    radLat2 = Angle_To_Rad(imu_data.gnss.location.latitude);
    radLong2 = Angle_To_Rad(imu_data.gnss.location.longtidue);
    
    // calcu x
	delta_lat = radLat2 - radLat1;
    delta_long = 0;
    double x = 2*asin( sqrt( pow( sin( delta_lat/2 ),2) + cos( radLat1 )*cos( radLat2)*pow( sin( delta_long/2 ),2 ) ));
    x = x*EARTH_RADIUS*1000;

    // calcu y
    delta_lat = 0;
    delta_long = radLong1  - radLong2;
    double y = 2*asin( sqrt( pow( sin( delta_lat/2 ),2) + cos( radLat2 )*cos( radLat2)*pow( sin( delta_long/2 ),2 ) ) );
    y = y*EARTH_RADIUS*1000;

    // calcu z
    double z = imu_data.gnss.location.altidue - initial_alt;
    
    pose.pose.position.x = x;
    pose.pose.position.y = y;
    pose.pose.position.z = z;
}

void YesenseDriver::publish_imu(const protocol_info_t &imu_data)
{
    // publish imu message
    g_imu_.header.stamp = ros::Time::now();

    g_imu_.orientation = tf::createQuaternionMsgFromRollPitchYaw(
        imu_data.roll / 180.0 * M_PI, imu_data.pitch / 180.0 * M_PI,
        imu_data.yaw / 180.0 * M_PI);
    // std::cout << imu_data.roll << ", " << imu_data.pitch << ", " << imu_data.yaw << ", " << std::endl;

    g_imu_.angular_velocity.x = imu_data.angle_x / 180.0 * M_PI;
    g_imu_.angular_velocity.y = imu_data.angle_y / 180.0 * M_PI;
    g_imu_.angular_velocity.z = imu_data.angle_z / 180.0 * M_PI;

    g_imu_.linear_acceleration.x = imu_data.accel_x;
    g_imu_.linear_acceleration.y = imu_data.accel_y;
    g_imu_.linear_acceleration.z = imu_data.accel_z;

    imu_pub_.publish(g_imu_);

    // update imu marker
    visualization_msgs::Marker marker_info;
    marker_info.header.frame_id = "world";
    marker_info.header.stamp = ros::Time::now();

    // set namespace and id
    marker_info.ns = "basic_shapes";
    marker_info.id = 0;

    // set marker's shape
    marker_info.type = visualization_msgs::Marker::CUBE;

    // set action: ADD
    marker_info.action = visualization_msgs::Marker::ADD;

    // set imu pose
    marker_info.pose.position.x = 0.0;
    marker_info.pose.position.y = 0.0;
    marker_info.pose.position.z = 0.0;
    marker_info.pose.orientation.x = g_imu_.orientation.x;
    marker_info.pose.orientation.y = g_imu_.orientation.y;
    marker_info.pose.orientation.z = g_imu_.orientation.z;
    marker_info.pose.orientation.w = g_imu_.orientation.w;

    // set scale, unit: m
    marker_info.scale.x = 0.4;
    marker_info.scale.y = 0.4;
    marker_info.scale.z = 0.3;

    // set color
    marker_info.color.r = 0.2f;
    marker_info.color.g = 0.2f;
    marker_info.color.b = 0.2f;
    marker_info.color.a = 1.0;

    marker_info.lifetime = ros::Duration();
    
    imu_marker_pub_.publish(marker_info);
        
    /*-------------------publish inertial data topic----------------------*/
    yesense_imu::YesenseImuInertialData inertial_data;
               
    inertial_data.tid   = imu_data.tid;
    inertial_data.temperature = imu_data.imu_temp;
    inertial_data.sample_timestamp = imu_data.sample_timestamp;
    inertial_data.sync_timestamp = imu_data.out_sync_timestamp;

    inertial_data.accel.linear.x = imu_data.accel_x;
    inertial_data.accel.linear.y = imu_data.accel_y;
    inertial_data.accel.linear.z = imu_data.accel_z;
    inertial_data.accel.angular.x = imu_data.angle_x;
    inertial_data.accel.angular.y = imu_data.angle_y;
    inertial_data.accel.angular.z = imu_data.angle_z;  

    inertial_data.eulerAngle.roll = imu_data.roll;
    inertial_data.eulerAngle.pitch = imu_data.pitch;
    inertial_data.eulerAngle.yaw = imu_data.yaw;
    
    inertial_data.quaternion.q0 = imu_data.quaternion_data0;
    inertial_data.quaternion.q1 = imu_data.quaternion_data1;
    inertial_data.quaternion.q2 = imu_data.quaternion_data2;
    inertial_data.quaternion.q3 = imu_data.quaternion_data3;
    
    imu_inertial_data_pub_.publish(inertial_data);

    /*-------------------publish some topic----------------------*/
    yesense_imu::YesenseImuAllData  raw_data;
    yesense_imu::YesenseImuNavData  nav_data;

    raw_data.temperature = imu_data.imu_temp;
    raw_data.sample_timestamp = imu_data.sample_timestamp;
    raw_data.sync_timestamp = imu_data.out_sync_timestamp;

    raw_data.accel.linear.x = imu_data.accel_x;
    raw_data.accel.linear.y = imu_data.accel_y;
    raw_data.accel.linear.z = imu_data.accel_z;

    raw_data.accel.angular.x = imu_data.angle_x;
    raw_data.accel.angular.y = imu_data.angle_y;
    raw_data.accel.angular.z = imu_data.angle_z;
    
    raw_data.eulerAngle.roll = imu_data.roll;
    raw_data.eulerAngle.pitch = imu_data.pitch;
    raw_data.eulerAngle.yaw = imu_data.yaw;
    
    raw_data.quaternion.q0 = imu_data.quaternion_data0;
    raw_data.quaternion.q1 = imu_data.quaternion_data1;
    raw_data.quaternion.q2 = imu_data.quaternion_data2;
    raw_data.quaternion.q3 = imu_data.quaternion_data3;

    raw_data.location.longtidue = imu_data.gnss.location.longtidue;
    raw_data.location.latitude = imu_data.gnss.location.latitude;
    raw_data.location.altidue = imu_data.gnss.location.altidue;

    /*gnss basic topic*/
    nav_data.tid = imu_data.tid;
    nav_data.location.longtidue = imu_data.gnss.location.longtidue;
    nav_data.location.latitude = imu_data.gnss.location.latitude;
    nav_data.location.altidue = imu_data.gnss.location.altidue;        
    nav_data.utc_time.year = imu_data.gnss.utc_time.year;
    nav_data.utc_time.month = imu_data.gnss.utc_time.month;
    nav_data.utc_time.date = imu_data.gnss.utc_time.date;
    nav_data.utc_time.hour = imu_data.gnss.utc_time.hour;
    nav_data.utc_time.min = imu_data.gnss.utc_time.min;
    nav_data.utc_time.sec = imu_data.gnss.utc_time.sec;
    nav_data.utc_time.ms = imu_data.gnss.utc_time.ms;                      
    nav_data.status.fusion_status = imu_data.fusion_status & 0x0f;
    nav_data.status.gnss_status = (imu_data.fusion_status >> 4) & 0x0f;

    // raw_data.status.raw_code = imu_data.status;
    raw_data.status.fusion_status = imu_data.fusion_status & 0x0f;
    raw_data.status.gnss_status = (imu_data.fusion_status >> 4) & 0x0f;

    // gnss data
    raw_data.gnss.master.utc_time.year = imu_data.gnss.utc_time.year;
    raw_data.gnss.master.utc_time.month = imu_data.gnss.utc_time.month;
    raw_data.gnss.master.utc_time.date = imu_data.gnss.utc_time.date;
    raw_data.gnss.master.utc_time.hour = imu_data.gnss.utc_time.hour;
    raw_data.gnss.master.utc_time.min = imu_data.gnss.utc_time.min;
    raw_data.gnss.master.utc_time.sec = imu_data.gnss.utc_time.sec;
    raw_data.gnss.master.utc_time.ms = imu_data.gnss.utc_time.ms;

    raw_data.gnss.master.location.longtidue = imu_data.gnss.location.longtidue;
    raw_data.gnss.master.location.latitude = imu_data.gnss.location.latitude;
    raw_data.gnss.master.location.altidue = imu_data.gnss.location.altidue;

    raw_data.gnss.master.location_error.longtidue = imu_data.gnss.location_error.lon;
    raw_data.gnss.master.location_error.latitude = imu_data.gnss.location_error.lat;
    raw_data.gnss.master.location_error.altidue = imu_data.gnss.location_error.alt;
    
    raw_data.gnss.master.vel.v_e = imu_data.gnss.vel.vel_e;
    raw_data.gnss.master.vel.v_n = imu_data.gnss.vel.vel_n;
    raw_data.gnss.master.vel.v_u = imu_data.gnss.vel.vel_u;

    raw_data.gnss.master.speed = imu_data.gnss.ground_speed;
    raw_data.gnss.master.yaw = imu_data.gnss.yaw;
    raw_data.gnss.master.status = imu_data.gnss.status;
    raw_data.gnss.master.star_cnt = imu_data.gnss.star_cnt;
    raw_data.gnss.master.p_dop = imu_data.gnss.p_dop;
    raw_data.gnss.master.site_id = imu_data.gnss.site_id;

    raw_data.gnss.slave.dual_ant_yaw = imu_data.gnss_slave.dual_ant_yaw;
    raw_data.gnss.slave.dual_ant_yaw_error = imu_data.gnss_slave.dual_ant_yaw_error;
    raw_data.gnss.slave.dual_ant_baseline_len = imu_data.gnss_slave.dual_ant_baseline_len;

    for (std::map<uint32_t, std::string>::iterator inter = gps_raw.begin();
         inter != gps_raw.end(); 
         inter++)
    {
        raw_data.gps.raw_data.push_back(inter->second);
    }

    imu_sensor_data_pub_.publish((yesense_imu::YesenseImuSensorData&)raw_data);
    imu_nav_pub_.publish(nav_data);

    imu_gps_data_pub_.publish(raw_data.gps);
    imu_gnss_data_pub_.publish(raw_data.gnss);
    imu_status_pub_.publish(raw_data.status);
}

}

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "std_srvs/Empty.h"
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/synchronizer.h>
#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
#include <pcl/io/io.h>
#include <pcl/point_types.h>
#include <ros/ros.h>


//#define DEG2RAD(x) ((x)*M_PI/180.) // 角度转弧度
std::string frame_id;
std::string scan_topic_,scan1_topic_,scan2_topic_;
double lidar1_rotate,lidar2_rotate,lidar1_xoffset,lidar2_xoffset,lidar1_yoffset,lidar2_yoffset;
float angle_max,angle_min,angle_increment,x,y;
size_t node_count;
int truncated_mode_;
std::vector<int> disable_angle_min_range1, disable_angle_max_range1;
std::vector<int> disable_angle_min_range2, disable_angle_max_range2;

void callback(const sensor_msgs::LaserScan::ConstPtr &msg1,
              const sensor_msgs::LaserScan::ConstPtr &msg2,
              ros::Publisher *pub) {
sensor_msgs::LaserScan::ConstPtr msg1_= msg1;
  angle_max = msg1->angle_max;
  angle_min = msg1->angle_min;
  angle_increment = msg1->angle_increment;
  node_count = round((angle_max-angle_min)/angle_increment);

  // 创建点云
  pcl::PointCloud<pcl::PointXYZI> pointcloud;
  pcl::PointXYZI newPoint; // 创建一个点
  newPoint.z = 0.0;
  double newPointAngle;
  //将scan1的消息转换为点云
  for (int i=0;i<node_count;i++)
  {   
      //如果没有障碍物则跳过
      if(msg1->ranges[i]==std::numeric_limits<float>::infinity())
      {
        continue;
      }

      newPointAngle = msg1->angle_min + msg1->angle_increment * i;
      if(truncated_mode_==1)
      {
          int flag_truncate =0;
          //遍历数组disable_min与disable_max
          for (int j = 0; j < disable_angle_max_range1.size(); ++j) {
          //如果当前雷达识别的角度不在范围内，则重新赋值为inf无穷大
          if ((newPointAngle*180/M_PI <= -(disable_angle_min_range1[j]-180) ) && (newPointAngle*180/M_PI >= -(disable_angle_max_range1[j]-180))) {
             flag_truncate =1;
            }
          }
          if(flag_truncate)continue;
      }
      x = msg1->ranges[i] * cos(newPointAngle);
      y = msg1->ranges[i] * sin(newPointAngle);
      newPoint.x = x*cos(DEG2RAD(lidar1_rotate))-y*sin(DEG2RAD(lidar1_rotate))+float(lidar1_xoffset);
      newPoint.y = x*sin(DEG2RAD(lidar1_rotate))+y*cos(DEG2RAD(lidar1_rotate))+float(lidar1_yoffset);
      newPoint.intensity = msg1->intensities[i];
      pointcloud.push_back(newPoint);
  }
  //将scan2的消息转换为点云
  for (int i=0;i<node_count;i++)
  {   
      //如果没有障碍物则跳过
      if(msg2->ranges[i]==std::numeric_limits<float>::infinity())
      {
        continue;
      }
newPointAngle = msg2->angle_min + msg2->angle_increment * i;
      if(truncated_mode_==1)
      {
          int flag_truncate =0;
          //遍历数组disable_min与disable_max
          for (int j = 0; j < disable_angle_max_range2.size(); ++j) {
          //如果当前雷达识别的角度不在范围内，则重新赋值为inf无穷大
          if ((newPointAngle*180/M_PI <= -(disable_angle_min_range2[j]-180) ) && (newPointAngle*180/M_PI >= -(disable_angle_max_range2[j]-180))) {
             flag_truncate =1;
            }
          }
          if(flag_truncate)continue;
      }
      
      x = msg2->ranges[i] * cos(newPointAngle);
      y = msg2->ranges[i] * sin(newPointAngle);
      newPoint.x = x*cos(DEG2RAD(lidar2_rotate))-y*sin(DEG2RAD(lidar2_rotate))+lidar2_xoffset;
      newPoint.y = x*sin(DEG2RAD(lidar2_rotate))+y*cos(DEG2RAD(lidar2_rotate))+lidar2_yoffset;
      newPoint.intensity = msg2->intensities[i];
      pointcloud.push_back(newPoint);
  }


  // 创建LaserScan消息
  sensor_msgs::LaserScan scan_msg;
  scan_msg.header.stamp = ros::Time::now();
  scan_msg.header.frame_id = frame_id;
  scan_msg.angle_min = angle_min;
  scan_msg.angle_max = angle_max;
  scan_msg.angle_increment = angle_increment;
  scan_msg.scan_time = (ros::Time::now()-scan_msg.header.stamp).toSec();
  scan_msg.time_increment = scan_msg.scan_time / (double)(node_count);
  scan_msg.range_min = (msg1->range_min)<=(msg2->range_min)?msg1->range_min:msg2->range_min;
  scan_msg.range_max = (msg1->range_max)>=(msg2->range_max)?msg1->range_max:msg2->range_max;
  
  //先将数组用inf及0填充
  scan_msg.ranges.assign(node_count, std::numeric_limits<float>::infinity());
  scan_msg.intensities.assign(node_count, 0);

  for (auto point : pointcloud.points)
  {
    float range = hypot(point.x, point.y);
    float angle = atan2(point.y, point.x);
    int index = round((angle - scan_msg.angle_min) / scan_msg.angle_increment); // 当前扫描点的索引号
    if (index >= 0 && index < node_count)
    {
      //如果range小于range[index]则赋值
      if (range<scan_msg.ranges[index])
      {
        scan_msg.ranges[index] = range;
        point.intensity = 0 ; //M10 have no intensity
        scan_msg.intensities[index] = point.intensity;
      }

    }
  }
  pub->publish(scan_msg);
}

int main(int argc, char **argv) {
  // 节点初始化
  ros::init(argc, argv, "laser_double");
  ROS_INFO("laser_double init");
  // 创建句柄
  ros::NodeHandle nh;
  ros::NodeHandle nh_private("~");
  // 参数获取
  nh_private.param<std::string>("frame_id",frame_id,"laser");
  nh_private.param<std::string>("scan_topic",scan_topic_,"scan");
  nh_private.param<std::string>("scan1_topic",scan1_topic_,"scan1");
  nh_private.param<std::string>("scan2_topic",scan2_topic_,"scan2");
  nh_private.param<double>("lidar1_rotate",lidar1_rotate,0);
  nh_private.param<double>("lidar2_rotate",lidar2_rotate,0);
  nh_private.param<double>("lidar1_xoffset",lidar1_xoffset,0);
  nh_private.param<double>("lidar2_xoffset",lidar2_xoffset,0);
  nh_private.param<double>("lidar1_yoffset",lidar1_yoffset,0);
  nh_private.param<double>("lidar2_yoffset",lidar2_yoffset,0);
  nh_private.param("truncated_mode", truncated_mode_, 0);
  nh_private.param<std::vector<int>>("disable_min1", disable_angle_min_range1, {0});
  nh_private.param<std::vector<int>>("disable_max1", disable_angle_max_range1, {0});
  nh_private.param<std::vector<int>>("disable_min2", disable_angle_min_range2, {0});
  nh_private.param<std::vector<int>>("disable_max2", disable_angle_max_range2, {0});

  lidar1_rotate = (360-lidar1_rotate) +90;
  lidar2_rotate = (360-lidar2_rotate) +90;

  // 分别订阅两个topic
  message_filters::Subscriber<sensor_msgs::LaserScan> sub_scan1(
      nh, scan1_topic_, 1, ros::TransportHints().tcpNoDelay());
  message_filters::Subscriber<sensor_msgs::LaserScan> sub_scan2(
      nh, scan2_topic_, 1, ros::TransportHints().tcpNoDelay());
  ros::Publisher scan_pub = nh.advertise<sensor_msgs::LaserScan>(scan_topic_, 1000);

  // 将两个topic的数据进行同步
  typedef message_filters::sync_policies::ApproximateTime<sensor_msgs::LaserScan,
                                         sensor_msgs::LaserScan>
      syncPolicy;
  message_filters::Synchronizer<syncPolicy> sync(syncPolicy(10), sub_scan1, sub_scan2);
  sync.registerCallback(boost::bind(&callback, _1, _2,&scan_pub));

  ros::spin();

  return 0;
}

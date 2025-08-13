#pragma once                       // Only include once per compile
#ifndef POINTCLOUD_CONCATENATE_HPP // Conditional compiling
#define POINTCLOUD_CONCATENATE_HPP

// Includes
#include <rclcpp/rclcpp.hpp> // ROS header

#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>

#include <pcl_ros/transforms.hpp>
#include <pcl_conversions/pcl_conversions.h>

#include <sensor_msgs/msg/point_cloud2.hpp>

// Macro to warn about unset parameters
#define PARAM_WARN(param_name, default_val)                                 \
  std::cout << "\033[33m"                                                   \
            << "[WARN] Param is not set: " << param_name                    \
            << ". Setting to default value: " << default_val << "\033[0m\n" \
            << std::endl

// Define class
class PointcloudConcatenate : public rclcpp::Node
{
public:
  // Constructor and destructor
  PointcloudConcatenate();
  ~PointcloudConcatenate();

  // Public functions
  void handleParams();
  void update();
  double getHz();

  // Public variables and objects

private:
  // Parameters
  std::string param_frame_target_;
  int param_clouds_;
  double param_hz_;
  std::string cloud_in1_topic_;
  std::string cloud_in2_topic_;
  std::string cloud_in3_topic_;
  std::string cloud_in4_topic_;
  std::string cloud_out_topic_;

  // Publisher and subscribers
  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr sub_cloud_in1_;
  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr sub_cloud_in2_;
  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr sub_cloud_in3_;
  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr sub_cloud_in4_;
  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pub_cloud_out_;

  // Private functions
  void subCallbackCloudIn1(const sensor_msgs::msg::PointCloud2::SharedPtr msg);
  void subCallbackCloudIn2(const sensor_msgs::msg::PointCloud2::SharedPtr msg);
  void subCallbackCloudIn3(const sensor_msgs::msg::PointCloud2::SharedPtr msg);
  void subCallbackCloudIn4(const sensor_msgs::msg::PointCloud2::SharedPtr msg);
  void publishPointcloud(sensor_msgs::msg::PointCloud2 &cloud);

  // Other

  sensor_msgs::msg::PointCloud2 cloud_in1_;
  sensor_msgs::msg::PointCloud2 cloud_in2_;
  sensor_msgs::msg::PointCloud2 cloud_in3_;
  sensor_msgs::msg::PointCloud2 cloud_in4_;
  sensor_msgs::msg::PointCloud2 cloud_out_;
  bool cloud_in1_received_ = false;
  bool cloud_in2_received_ = false;
  bool cloud_in3_received_ = false;
  bool cloud_in4_received_ = false;
  bool cloud_in1_received_recent_ = false;
  bool cloud_in2_received_recent_ = false;
  bool cloud_in3_received_recent_ = false;
  bool cloud_in4_received_recent_ = false;

  // Initialization tf2 listener
  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
};

#endif // POINTCLOUD_CONCATENATE_HPP
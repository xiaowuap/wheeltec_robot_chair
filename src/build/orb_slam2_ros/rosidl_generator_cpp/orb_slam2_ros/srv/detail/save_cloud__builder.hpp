// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from orb_slam2_ros:srv/SaveCloud.idl
// generated code does not contain a copyright notice

#ifndef ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__BUILDER_HPP_
#define ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "orb_slam2_ros/srv/detail/save_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace orb_slam2_ros
{

namespace srv
{

namespace builder
{

class Init_SaveCloud_Request_name
{
public:
  Init_SaveCloud_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::orb_slam2_ros::srv::SaveCloud_Request name(::orb_slam2_ros::srv::SaveCloud_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orb_slam2_ros::srv::SaveCloud_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::orb_slam2_ros::srv::SaveCloud_Request>()
{
  return orb_slam2_ros::srv::builder::Init_SaveCloud_Request_name();
}

}  // namespace orb_slam2_ros


namespace orb_slam2_ros
{

namespace srv
{

namespace builder
{

class Init_SaveCloud_Response_success
{
public:
  Init_SaveCloud_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::orb_slam2_ros::srv::SaveCloud_Response success(::orb_slam2_ros::srv::SaveCloud_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orb_slam2_ros::srv::SaveCloud_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::orb_slam2_ros::srv::SaveCloud_Response>()
{
  return orb_slam2_ros::srv::builder::Init_SaveCloud_Response_success();
}

}  // namespace orb_slam2_ros

#endif  // ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__BUILDER_HPP_

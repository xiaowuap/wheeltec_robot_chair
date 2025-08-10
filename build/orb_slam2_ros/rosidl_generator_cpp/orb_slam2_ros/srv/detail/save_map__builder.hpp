// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from orb_slam2_ros:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef ORB_SLAM2_ROS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
#define ORB_SLAM2_ROS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "orb_slam2_ros/srv/detail/save_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace orb_slam2_ros
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Request_name
{
public:
  Init_SaveMap_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::orb_slam2_ros::srv::SaveMap_Request name(::orb_slam2_ros::srv::SaveMap_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orb_slam2_ros::srv::SaveMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::orb_slam2_ros::srv::SaveMap_Request>()
{
  return orb_slam2_ros::srv::builder::Init_SaveMap_Request_name();
}

}  // namespace orb_slam2_ros


namespace orb_slam2_ros
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Response_success
{
public:
  Init_SaveMap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::orb_slam2_ros::srv::SaveMap_Response success(::orb_slam2_ros::srv::SaveMap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orb_slam2_ros::srv::SaveMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::orb_slam2_ros::srv::SaveMap_Response>()
{
  return orb_slam2_ros::srv::builder::Init_SaveMap_Response_success();
}

}  // namespace orb_slam2_ros

#endif  // ORB_SLAM2_ROS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_

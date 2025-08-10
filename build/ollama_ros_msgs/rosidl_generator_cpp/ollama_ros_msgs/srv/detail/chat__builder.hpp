// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ollama_ros_msgs:srv/Chat.idl
// generated code does not contain a copyright notice

#ifndef OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__BUILDER_HPP_
#define OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ollama_ros_msgs/srv/detail/chat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ollama_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_Chat_Request_content
{
public:
  Init_Chat_Request_content()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ollama_ros_msgs::srv::Chat_Request content(::ollama_ros_msgs::srv::Chat_Request::_content_type arg)
  {
    msg_.content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ollama_ros_msgs::srv::Chat_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ollama_ros_msgs::srv::Chat_Request>()
{
  return ollama_ros_msgs::srv::builder::Init_Chat_Request_content();
}

}  // namespace ollama_ros_msgs


namespace ollama_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_Chat_Response_is_done
{
public:
  explicit Init_Chat_Response_is_done(::ollama_ros_msgs::srv::Chat_Response & msg)
  : msg_(msg)
  {}
  ::ollama_ros_msgs::srv::Chat_Response is_done(::ollama_ros_msgs::srv::Chat_Response::_is_done_type arg)
  {
    msg_.is_done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ollama_ros_msgs::srv::Chat_Response msg_;
};

class Init_Chat_Response_model
{
public:
  explicit Init_Chat_Response_model(::ollama_ros_msgs::srv::Chat_Response & msg)
  : msg_(msg)
  {}
  Init_Chat_Response_is_done model(::ollama_ros_msgs::srv::Chat_Response::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_Chat_Response_is_done(msg_);
  }

private:
  ::ollama_ros_msgs::srv::Chat_Response msg_;
};

class Init_Chat_Response_content
{
public:
  Init_Chat_Response_content()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chat_Response_model content(::ollama_ros_msgs::srv::Chat_Response::_content_type arg)
  {
    msg_.content = std::move(arg);
    return Init_Chat_Response_model(msg_);
  }

private:
  ::ollama_ros_msgs::srv::Chat_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ollama_ros_msgs::srv::Chat_Response>()
{
  return ollama_ros_msgs::srv::builder::Init_Chat_Response_content();
}

}  // namespace ollama_ros_msgs

#endif  // OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__BUILDER_HPP_

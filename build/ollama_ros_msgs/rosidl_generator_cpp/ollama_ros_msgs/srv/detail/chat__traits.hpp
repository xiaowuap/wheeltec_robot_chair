// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ollama_ros_msgs:srv/Chat.idl
// generated code does not contain a copyright notice

#ifndef OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__TRAITS_HPP_
#define OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ollama_ros_msgs/srv/detail/chat__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ollama_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Chat_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: content
  {
    out << "content: ";
    rosidl_generator_traits::value_to_yaml(msg.content, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "content: ";
    rosidl_generator_traits::value_to_yaml(msg.content, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ollama_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ollama_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ollama_ros_msgs::srv::Chat_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ollama_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ollama_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ollama_ros_msgs::srv::Chat_Request & msg)
{
  return ollama_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ollama_ros_msgs::srv::Chat_Request>()
{
  return "ollama_ros_msgs::srv::Chat_Request";
}

template<>
inline const char * name<ollama_ros_msgs::srv::Chat_Request>()
{
  return "ollama_ros_msgs/srv/Chat_Request";
}

template<>
struct has_fixed_size<ollama_ros_msgs::srv::Chat_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ollama_ros_msgs::srv::Chat_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ollama_ros_msgs::srv::Chat_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ollama_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Chat_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: content
  {
    out << "content: ";
    rosidl_generator_traits::value_to_yaml(msg.content, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: is_done
  {
    out << "is_done: ";
    rosidl_generator_traits::value_to_yaml(msg.is_done, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "content: ";
    rosidl_generator_traits::value_to_yaml(msg.content, out);
    out << "\n";
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: is_done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_done: ";
    rosidl_generator_traits::value_to_yaml(msg.is_done, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ollama_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ollama_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ollama_ros_msgs::srv::Chat_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ollama_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ollama_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ollama_ros_msgs::srv::Chat_Response & msg)
{
  return ollama_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ollama_ros_msgs::srv::Chat_Response>()
{
  return "ollama_ros_msgs::srv::Chat_Response";
}

template<>
inline const char * name<ollama_ros_msgs::srv::Chat_Response>()
{
  return "ollama_ros_msgs/srv/Chat_Response";
}

template<>
struct has_fixed_size<ollama_ros_msgs::srv::Chat_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ollama_ros_msgs::srv::Chat_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ollama_ros_msgs::srv::Chat_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ollama_ros_msgs::srv::Chat>()
{
  return "ollama_ros_msgs::srv::Chat";
}

template<>
inline const char * name<ollama_ros_msgs::srv::Chat>()
{
  return "ollama_ros_msgs/srv/Chat";
}

template<>
struct has_fixed_size<ollama_ros_msgs::srv::Chat>
  : std::integral_constant<
    bool,
    has_fixed_size<ollama_ros_msgs::srv::Chat_Request>::value &&
    has_fixed_size<ollama_ros_msgs::srv::Chat_Response>::value
  >
{
};

template<>
struct has_bounded_size<ollama_ros_msgs::srv::Chat>
  : std::integral_constant<
    bool,
    has_bounded_size<ollama_ros_msgs::srv::Chat_Request>::value &&
    has_bounded_size<ollama_ros_msgs::srv::Chat_Response>::value
  >
{
};

template<>
struct is_service<ollama_ros_msgs::srv::Chat>
  : std::true_type
{
};

template<>
struct is_service_request<ollama_ros_msgs::srv::Chat_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ollama_ros_msgs::srv::Chat_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__TRAITS_HPP_

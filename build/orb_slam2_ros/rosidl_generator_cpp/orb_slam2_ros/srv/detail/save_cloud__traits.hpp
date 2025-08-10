// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from orb_slam2_ros:srv/SaveCloud.idl
// generated code does not contain a copyright notice

#ifndef ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__TRAITS_HPP_
#define ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "orb_slam2_ros/srv/detail/save_cloud__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace orb_slam2_ros
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveCloud_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveCloud_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveCloud_Request & msg, bool use_flow_style = false)
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

}  // namespace orb_slam2_ros

namespace rosidl_generator_traits
{

[[deprecated("use orb_slam2_ros::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orb_slam2_ros::srv::SaveCloud_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  orb_slam2_ros::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orb_slam2_ros::srv::to_yaml() instead")]]
inline std::string to_yaml(const orb_slam2_ros::srv::SaveCloud_Request & msg)
{
  return orb_slam2_ros::srv::to_yaml(msg);
}

template<>
inline const char * data_type<orb_slam2_ros::srv::SaveCloud_Request>()
{
  return "orb_slam2_ros::srv::SaveCloud_Request";
}

template<>
inline const char * name<orb_slam2_ros::srv::SaveCloud_Request>()
{
  return "orb_slam2_ros/srv/SaveCloud_Request";
}

template<>
struct has_fixed_size<orb_slam2_ros::srv::SaveCloud_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<orb_slam2_ros::srv::SaveCloud_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<orb_slam2_ros::srv::SaveCloud_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace orb_slam2_ros
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveCloud_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveCloud_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveCloud_Response & msg, bool use_flow_style = false)
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

}  // namespace orb_slam2_ros

namespace rosidl_generator_traits
{

[[deprecated("use orb_slam2_ros::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orb_slam2_ros::srv::SaveCloud_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  orb_slam2_ros::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orb_slam2_ros::srv::to_yaml() instead")]]
inline std::string to_yaml(const orb_slam2_ros::srv::SaveCloud_Response & msg)
{
  return orb_slam2_ros::srv::to_yaml(msg);
}

template<>
inline const char * data_type<orb_slam2_ros::srv::SaveCloud_Response>()
{
  return "orb_slam2_ros::srv::SaveCloud_Response";
}

template<>
inline const char * name<orb_slam2_ros::srv::SaveCloud_Response>()
{
  return "orb_slam2_ros/srv/SaveCloud_Response";
}

template<>
struct has_fixed_size<orb_slam2_ros::srv::SaveCloud_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<orb_slam2_ros::srv::SaveCloud_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<orb_slam2_ros::srv::SaveCloud_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orb_slam2_ros::srv::SaveCloud>()
{
  return "orb_slam2_ros::srv::SaveCloud";
}

template<>
inline const char * name<orb_slam2_ros::srv::SaveCloud>()
{
  return "orb_slam2_ros/srv/SaveCloud";
}

template<>
struct has_fixed_size<orb_slam2_ros::srv::SaveCloud>
  : std::integral_constant<
    bool,
    has_fixed_size<orb_slam2_ros::srv::SaveCloud_Request>::value &&
    has_fixed_size<orb_slam2_ros::srv::SaveCloud_Response>::value
  >
{
};

template<>
struct has_bounded_size<orb_slam2_ros::srv::SaveCloud>
  : std::integral_constant<
    bool,
    has_bounded_size<orb_slam2_ros::srv::SaveCloud_Request>::value &&
    has_bounded_size<orb_slam2_ros::srv::SaveCloud_Response>::value
  >
{
};

template<>
struct is_service<orb_slam2_ros::srv::SaveCloud>
  : std::true_type
{
};

template<>
struct is_service_request<orb_slam2_ros::srv::SaveCloud_Request>
  : std::true_type
{
};

template<>
struct is_service_response<orb_slam2_ros::srv::SaveCloud_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/AttitudeMinVru.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/attitude_min_vru__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'imu_basic'
#include "yesense_interface/msg/detail/imu_data__traits.hpp"
// Member 'euler'
#include "yesense_interface/msg/detail/euler_angle__traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const AttitudeMinVru & msg,
  std::ostream & out)
{
  out << "{";
  // member: imu_basic
  {
    out << "imu_basic: ";
    to_flow_style_yaml(msg.imu_basic, out);
    out << ", ";
  }

  // member: euler
  {
    out << "euler: ";
    to_flow_style_yaml(msg.euler, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AttitudeMinVru & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: imu_basic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_basic:\n";
    to_block_style_yaml(msg.imu_basic, out, indentation + 2);
  }

  // member: euler
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "euler:\n";
    to_block_style_yaml(msg.euler, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AttitudeMinVru & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace yesense_interface

namespace rosidl_generator_traits
{

[[deprecated("use yesense_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yesense_interface::msg::AttitudeMinVru & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::AttitudeMinVru & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::AttitudeMinVru>()
{
  return "yesense_interface::msg::AttitudeMinVru";
}

template<>
inline const char * name<yesense_interface::msg::AttitudeMinVru>()
{
  return "yesense_interface/msg/AttitudeMinVru";
}

template<>
struct has_fixed_size<yesense_interface::msg::AttitudeMinVru>
  : std::integral_constant<bool, has_fixed_size<yesense_interface::msg::EulerAngle>::value && has_fixed_size<yesense_interface::msg::ImuData>::value> {};

template<>
struct has_bounded_size<yesense_interface::msg::AttitudeMinVru>
  : std::integral_constant<bool, has_bounded_size<yesense_interface::msg::EulerAngle>::value && has_bounded_size<yesense_interface::msg::ImuData>::value> {};

template<>
struct is_message<yesense_interface::msg::AttitudeMinVru>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/AttitudeMinAhrs.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/attitude_min_ahrs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'att_min_vru'
#include "yesense_interface/msg/detail/attitude_min_vru__traits.hpp"
// Member 'mag_norm'
// Member 'mag_raw'
#include "yesense_interface/msg/detail/three_axis__traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const AttitudeMinAhrs & msg,
  std::ostream & out)
{
  out << "{";
  // member: att_min_vru
  {
    out << "att_min_vru: ";
    to_flow_style_yaml(msg.att_min_vru, out);
    out << ", ";
  }

  // member: mag_norm
  {
    out << "mag_norm: ";
    to_flow_style_yaml(msg.mag_norm, out);
    out << ", ";
  }

  // member: mag_raw
  {
    out << "mag_raw: ";
    to_flow_style_yaml(msg.mag_raw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AttitudeMinAhrs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: att_min_vru
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "att_min_vru:\n";
    to_block_style_yaml(msg.att_min_vru, out, indentation + 2);
  }

  // member: mag_norm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_norm:\n";
    to_block_style_yaml(msg.mag_norm, out, indentation + 2);
  }

  // member: mag_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_raw:\n";
    to_block_style_yaml(msg.mag_raw, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AttitudeMinAhrs & msg, bool use_flow_style = false)
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
  const yesense_interface::msg::AttitudeMinAhrs & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::AttitudeMinAhrs & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::AttitudeMinAhrs>()
{
  return "yesense_interface::msg::AttitudeMinAhrs";
}

template<>
inline const char * name<yesense_interface::msg::AttitudeMinAhrs>()
{
  return "yesense_interface/msg/AttitudeMinAhrs";
}

template<>
struct has_fixed_size<yesense_interface::msg::AttitudeMinAhrs>
  : std::integral_constant<bool, has_fixed_size<yesense_interface::msg::AttitudeMinVru>::value && has_fixed_size<yesense_interface::msg::ThreeAxis>::value> {};

template<>
struct has_bounded_size<yesense_interface::msg::AttitudeMinAhrs>
  : std::integral_constant<bool, has_bounded_size<yesense_interface::msg::AttitudeMinVru>::value && has_bounded_size<yesense_interface::msg::ThreeAxis>::value> {};

template<>
struct is_message<yesense_interface::msg::AttitudeMinAhrs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__TRAITS_HPP_

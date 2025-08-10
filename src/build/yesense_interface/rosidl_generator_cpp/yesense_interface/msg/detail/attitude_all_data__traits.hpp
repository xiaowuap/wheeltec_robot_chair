// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/AttitudeAllData.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_ALL_DATA__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_ALL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/attitude_all_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'att_min_ahrs'
#include "yesense_interface/msg/detail/attitude_min_ahrs__traits.hpp"
// Member 'quat'
#include "yesense_interface/msg/detail/quat__traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const AttitudeAllData & msg,
  std::ostream & out)
{
  out << "{";
  // member: att_min_ahrs
  {
    out << "att_min_ahrs: ";
    to_flow_style_yaml(msg.att_min_ahrs, out);
    out << ", ";
  }

  // member: quat
  {
    out << "quat: ";
    to_flow_style_yaml(msg.quat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AttitudeAllData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: att_min_ahrs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "att_min_ahrs:\n";
    to_block_style_yaml(msg.att_min_ahrs, out, indentation + 2);
  }

  // member: quat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quat:\n";
    to_block_style_yaml(msg.quat, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AttitudeAllData & msg, bool use_flow_style = false)
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
  const yesense_interface::msg::AttitudeAllData & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::AttitudeAllData & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::AttitudeAllData>()
{
  return "yesense_interface::msg::AttitudeAllData";
}

template<>
inline const char * name<yesense_interface::msg::AttitudeAllData>()
{
  return "yesense_interface/msg/AttitudeAllData";
}

template<>
struct has_fixed_size<yesense_interface::msg::AttitudeAllData>
  : std::integral_constant<bool, has_fixed_size<yesense_interface::msg::AttitudeMinAhrs>::value && has_fixed_size<yesense_interface::msg::Quat>::value> {};

template<>
struct has_bounded_size<yesense_interface::msg::AttitudeAllData>
  : std::integral_constant<bool, has_bounded_size<yesense_interface::msg::AttitudeMinAhrs>::value && has_bounded_size<yesense_interface::msg::Quat>::value> {};

template<>
struct is_message<yesense_interface::msg::AttitudeAllData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_ALL_DATA__TRAITS_HPP_

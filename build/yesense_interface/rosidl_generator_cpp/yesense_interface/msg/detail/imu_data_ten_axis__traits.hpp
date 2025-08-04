// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/ImuDataTenAxis.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/imu_data_ten_axis__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'imu_basic'
#include "yesense_interface/msg/detail/imu_data__traits.hpp"
// Member 'mag_norm'
// Member 'mag_raw'
#include "yesense_interface/msg/detail/three_axis__traits.hpp"
// Member 'pressure'
#include "yesense_interface/msg/detail/pressure__traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuDataTenAxis & msg,
  std::ostream & out)
{
  out << "{";
  // member: imu_basic
  {
    out << "imu_basic: ";
    to_flow_style_yaml(msg.imu_basic, out);
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
    out << ", ";
  }

  // member: pressure
  {
    out << "pressure: ";
    to_flow_style_yaml(msg.pressure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuDataTenAxis & msg,
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

  // member: pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure:\n";
    to_block_style_yaml(msg.pressure, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuDataTenAxis & msg, bool use_flow_style = false)
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
  const yesense_interface::msg::ImuDataTenAxis & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::ImuDataTenAxis & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::ImuDataTenAxis>()
{
  return "yesense_interface::msg::ImuDataTenAxis";
}

template<>
inline const char * name<yesense_interface::msg::ImuDataTenAxis>()
{
  return "yesense_interface/msg/ImuDataTenAxis";
}

template<>
struct has_fixed_size<yesense_interface::msg::ImuDataTenAxis>
  : std::integral_constant<bool, has_fixed_size<yesense_interface::msg::ImuData>::value && has_fixed_size<yesense_interface::msg::Pressure>::value && has_fixed_size<yesense_interface::msg::ThreeAxis>::value> {};

template<>
struct has_bounded_size<yesense_interface::msg::ImuDataTenAxis>
  : std::integral_constant<bool, has_bounded_size<yesense_interface::msg::ImuData>::value && has_bounded_size<yesense_interface::msg::Pressure>::value && has_bounded_size<yesense_interface::msg::ThreeAxis>::value> {};

template<>
struct is_message<yesense_interface::msg::ImuDataTenAxis>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__TRAITS_HPP_

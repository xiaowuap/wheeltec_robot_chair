// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/ImuData.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/imu_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tid'
#include "yesense_interface/msg/detail/tid__traits.hpp"
// Member 'acc'
// Member 'gyro'
#include "yesense_interface/msg/detail/three_axis__traits.hpp"
// Member 'temp'
#include "yesense_interface/msg/detail/sensor_temp__traits.hpp"
// Member 'sample_timestamp'
#include "yesense_interface/msg/detail/sample_timestamp__traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuData & msg,
  std::ostream & out)
{
  out << "{";
  // member: tid
  {
    out << "tid: ";
    to_flow_style_yaml(msg.tid, out);
    out << ", ";
  }

  // member: acc
  {
    out << "acc: ";
    to_flow_style_yaml(msg.acc, out);
    out << ", ";
  }

  // member: gyro
  {
    out << "gyro: ";
    to_flow_style_yaml(msg.gyro, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    to_flow_style_yaml(msg.temp, out);
    out << ", ";
  }

  // member: sample_timestamp
  {
    out << "sample_timestamp: ";
    to_flow_style_yaml(msg.sample_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tid:\n";
    to_block_style_yaml(msg.tid, out, indentation + 2);
  }

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc:\n";
    to_block_style_yaml(msg.acc, out, indentation + 2);
  }

  // member: gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro:\n";
    to_block_style_yaml(msg.gyro, out, indentation + 2);
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp:\n";
    to_block_style_yaml(msg.temp, out, indentation + 2);
  }

  // member: sample_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_timestamp:\n";
    to_block_style_yaml(msg.sample_timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuData & msg, bool use_flow_style = false)
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
  const yesense_interface::msg::ImuData & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::ImuData & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::ImuData>()
{
  return "yesense_interface::msg::ImuData";
}

template<>
inline const char * name<yesense_interface::msg::ImuData>()
{
  return "yesense_interface/msg/ImuData";
}

template<>
struct has_fixed_size<yesense_interface::msg::ImuData>
  : std::integral_constant<bool, has_fixed_size<yesense_interface::msg::SampleTimestamp>::value && has_fixed_size<yesense_interface::msg::SensorTemp>::value && has_fixed_size<yesense_interface::msg::ThreeAxis>::value && has_fixed_size<yesense_interface::msg::Tid>::value> {};

template<>
struct has_bounded_size<yesense_interface::msg::ImuData>
  : std::integral_constant<bool, has_bounded_size<yesense_interface::msg::SampleTimestamp>::value && has_bounded_size<yesense_interface::msg::SensorTemp>::value && has_bounded_size<yesense_interface::msg::ThreeAxis>::value && has_bounded_size<yesense_interface::msg::Tid>::value> {};

template<>
struct is_message<yesense_interface::msg::ImuData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA__TRAITS_HPP_

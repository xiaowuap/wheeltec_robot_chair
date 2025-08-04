// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/NavAll.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/nav_all__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tid'
#include "yesense_interface/msg/detail/tid__traits.hpp"
// Member 'acc'
// Member 'gyro'
#include "yesense_interface/msg/detail/three_axis__traits.hpp"
// Member 'euler'
#include "yesense_interface/msg/detail/euler_angle__traits.hpp"
// Member 'quat'
#include "yesense_interface/msg/detail/quat__traits.hpp"
// Member 'temp'
#include "yesense_interface/msg/detail/sensor_temp__traits.hpp"
// Member 'pos'
#include "yesense_interface/msg/detail/gnss_pos__traits.hpp"
// Member 'status'
#include "yesense_interface/msg/detail/nav_status__traits.hpp"
// Member 'vel'
#include "yesense_interface/msg/detail/vel__traits.hpp"
// Member 'utc'
#include "yesense_interface/msg/detail/utc__traits.hpp"
// Member 'pressure'
#include "yesense_interface/msg/detail/pressure__traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavAll & msg,
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

  // member: euler
  {
    out << "euler: ";
    to_flow_style_yaml(msg.euler, out);
    out << ", ";
  }

  // member: quat
  {
    out << "quat: ";
    to_flow_style_yaml(msg.quat, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    to_flow_style_yaml(msg.temp, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    to_flow_style_yaml(msg.vel, out);
    out << ", ";
  }

  // member: utc
  {
    out << "utc: ";
    to_flow_style_yaml(msg.utc, out);
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
  const NavAll & msg,
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

  // member: euler
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "euler:\n";
    to_block_style_yaml(msg.euler, out, indentation + 2);
  }

  // member: quat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quat:\n";
    to_block_style_yaml(msg.quat, out, indentation + 2);
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp:\n";
    to_block_style_yaml(msg.temp, out, indentation + 2);
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel:\n";
    to_block_style_yaml(msg.vel, out, indentation + 2);
  }

  // member: utc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc:\n";
    to_block_style_yaml(msg.utc, out, indentation + 2);
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

inline std::string to_yaml(const NavAll & msg, bool use_flow_style = false)
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
  const yesense_interface::msg::NavAll & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::NavAll & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::NavAll>()
{
  return "yesense_interface::msg::NavAll";
}

template<>
inline const char * name<yesense_interface::msg::NavAll>()
{
  return "yesense_interface/msg/NavAll";
}

template<>
struct has_fixed_size<yesense_interface::msg::NavAll>
  : std::integral_constant<bool, has_fixed_size<yesense_interface::msg::EulerAngle>::value && has_fixed_size<yesense_interface::msg::GnssPos>::value && has_fixed_size<yesense_interface::msg::NavStatus>::value && has_fixed_size<yesense_interface::msg::Pressure>::value && has_fixed_size<yesense_interface::msg::Quat>::value && has_fixed_size<yesense_interface::msg::SensorTemp>::value && has_fixed_size<yesense_interface::msg::ThreeAxis>::value && has_fixed_size<yesense_interface::msg::Tid>::value && has_fixed_size<yesense_interface::msg::Utc>::value && has_fixed_size<yesense_interface::msg::Vel>::value> {};

template<>
struct has_bounded_size<yesense_interface::msg::NavAll>
  : std::integral_constant<bool, has_bounded_size<yesense_interface::msg::EulerAngle>::value && has_bounded_size<yesense_interface::msg::GnssPos>::value && has_bounded_size<yesense_interface::msg::NavStatus>::value && has_bounded_size<yesense_interface::msg::Pressure>::value && has_bounded_size<yesense_interface::msg::Quat>::value && has_bounded_size<yesense_interface::msg::SensorTemp>::value && has_bounded_size<yesense_interface::msg::ThreeAxis>::value && has_bounded_size<yesense_interface::msg::Tid>::value && has_bounded_size<yesense_interface::msg::Utc>::value && has_bounded_size<yesense_interface::msg::Vel>::value> {};

template<>
struct is_message<yesense_interface::msg::NavAll>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__TRAITS_HPP_

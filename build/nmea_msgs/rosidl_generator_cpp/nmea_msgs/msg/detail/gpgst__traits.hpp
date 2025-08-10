// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGST__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nmea_msgs/msg/detail/gpgst__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nmea_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gpgst & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: message_id
  {
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << ", ";
  }

  // member: utc_seconds
  {
    out << "utc_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_seconds, out);
    out << ", ";
  }

  // member: rms
  {
    out << "rms: ";
    rosidl_generator_traits::value_to_yaml(msg.rms, out);
    out << ", ";
  }

  // member: semi_major_dev
  {
    out << "semi_major_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_major_dev, out);
    out << ", ";
  }

  // member: semi_minor_dev
  {
    out << "semi_minor_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_minor_dev, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: lat_dev
  {
    out << "lat_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_dev, out);
    out << ", ";
  }

  // member: lon_dev
  {
    out << "lon_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_dev, out);
    out << ", ";
  }

  // member: alt_dev
  {
    out << "alt_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_dev, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gpgst & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: message_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << "\n";
  }

  // member: utc_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_seconds, out);
    out << "\n";
  }

  // member: rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rms: ";
    rosidl_generator_traits::value_to_yaml(msg.rms, out);
    out << "\n";
  }

  // member: semi_major_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semi_major_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_major_dev, out);
    out << "\n";
  }

  // member: semi_minor_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semi_minor_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_minor_dev, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << "\n";
  }

  // member: lat_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_dev, out);
    out << "\n";
  }

  // member: lon_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_dev, out);
    out << "\n";
  }

  // member: alt_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_dev, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gpgst & msg, bool use_flow_style = false)
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

}  // namespace nmea_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nmea_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nmea_msgs::msg::Gpgst & msg,
  std::ostream & out, size_t indentation = 0)
{
  nmea_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nmea_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nmea_msgs::msg::Gpgst & msg)
{
  return nmea_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nmea_msgs::msg::Gpgst>()
{
  return "nmea_msgs::msg::Gpgst";
}

template<>
inline const char * name<nmea_msgs::msg::Gpgst>()
{
  return "nmea_msgs/msg/Gpgst";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Gpgst>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Gpgst>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Gpgst>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPGST__TRAITS_HPP_

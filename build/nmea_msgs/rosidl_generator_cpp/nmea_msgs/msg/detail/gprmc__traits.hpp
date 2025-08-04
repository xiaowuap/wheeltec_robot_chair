// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPRMC__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPRMC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nmea_msgs/msg/detail/gprmc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nmea_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gprmc & msg,
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

  // member: position_status
  {
    out << "position_status: ";
    rosidl_generator_traits::value_to_yaml(msg.position_status, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: lat_dir
  {
    out << "lat_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_dir, out);
    out << ", ";
  }

  // member: lon_dir
  {
    out << "lon_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_dir, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: track
  {
    out << "track: ";
    rosidl_generator_traits::value_to_yaml(msg.track, out);
    out << ", ";
  }

  // member: date
  {
    out << "date: ";
    rosidl_generator_traits::value_to_yaml(msg.date, out);
    out << ", ";
  }

  // member: mag_var
  {
    out << "mag_var: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_var, out);
    out << ", ";
  }

  // member: mag_var_direction
  {
    out << "mag_var_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_var_direction, out);
    out << ", ";
  }

  // member: mode_indicator
  {
    out << "mode_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_indicator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gprmc & msg,
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

  // member: position_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_status: ";
    rosidl_generator_traits::value_to_yaml(msg.position_status, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: lat_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_dir, out);
    out << "\n";
  }

  // member: lon_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_dir, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track: ";
    rosidl_generator_traits::value_to_yaml(msg.track, out);
    out << "\n";
  }

  // member: date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "date: ";
    rosidl_generator_traits::value_to_yaml(msg.date, out);
    out << "\n";
  }

  // member: mag_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_var: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_var, out);
    out << "\n";
  }

  // member: mag_var_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_var_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_var_direction, out);
    out << "\n";
  }

  // member: mode_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_indicator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gprmc & msg, bool use_flow_style = false)
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
  const nmea_msgs::msg::Gprmc & msg,
  std::ostream & out, size_t indentation = 0)
{
  nmea_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nmea_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nmea_msgs::msg::Gprmc & msg)
{
  return nmea_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nmea_msgs::msg::Gprmc>()
{
  return "nmea_msgs::msg::Gprmc";
}

template<>
inline const char * name<nmea_msgs::msg::Gprmc>()
{
  return "nmea_msgs/msg/Gprmc";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Gprmc>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Gprmc>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Gprmc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPRMC__TRAITS_HPP_

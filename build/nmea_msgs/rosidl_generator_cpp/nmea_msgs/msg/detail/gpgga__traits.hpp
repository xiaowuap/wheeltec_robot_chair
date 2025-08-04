// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGGA__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGGA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nmea_msgs/msg/detail/gpgga__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nmea_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gpgga & msg,
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

  // member: gps_qual
  {
    out << "gps_qual: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_qual, out);
    out << ", ";
  }

  // member: num_sats
  {
    out << "num_sats: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sats, out);
    out << ", ";
  }

  // member: hdop
  {
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << ", ";
  }

  // member: alt
  {
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << ", ";
  }

  // member: altitude_units
  {
    out << "altitude_units: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_units, out);
    out << ", ";
  }

  // member: undulation
  {
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << ", ";
  }

  // member: undulation_units
  {
    out << "undulation_units: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation_units, out);
    out << ", ";
  }

  // member: diff_age
  {
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << ", ";
  }

  // member: station_id
  {
    out << "station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.station_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gpgga & msg,
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

  // member: gps_qual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_qual: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_qual, out);
    out << "\n";
  }

  // member: num_sats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sats: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sats, out);
    out << "\n";
  }

  // member: hdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << "\n";
  }

  // member: alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << "\n";
  }

  // member: altitude_units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_units: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_units, out);
    out << "\n";
  }

  // member: undulation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << "\n";
  }

  // member: undulation_units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undulation_units: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation_units, out);
    out << "\n";
  }

  // member: diff_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << "\n";
  }

  // member: station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.station_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gpgga & msg, bool use_flow_style = false)
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
  const nmea_msgs::msg::Gpgga & msg,
  std::ostream & out, size_t indentation = 0)
{
  nmea_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nmea_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nmea_msgs::msg::Gpgga & msg)
{
  return nmea_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nmea_msgs::msg::Gpgga>()
{
  return "nmea_msgs::msg::Gpgga";
}

template<>
inline const char * name<nmea_msgs::msg::Gpgga>()
{
  return "nmea_msgs/msg/Gpgga";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Gpgga>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Gpgga>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Gpgga>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPGGA__TRAITS_HPP_

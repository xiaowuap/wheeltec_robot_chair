// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/GpgsvSatellite.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nmea_msgs/msg/detail/gpgsv_satellite__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nmea_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GpgsvSatellite & msg,
  std::ostream & out)
{
  out << "{";
  // member: prn
  {
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: azimuth
  {
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << ", ";
  }

  // member: snr
  {
    out << "snr: ";
    rosidl_generator_traits::value_to_yaml(msg.snr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpgsvSatellite & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << "\n";
  }

  // member: snr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snr: ";
    rosidl_generator_traits::value_to_yaml(msg.snr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpgsvSatellite & msg, bool use_flow_style = false)
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
  const nmea_msgs::msg::GpgsvSatellite & msg,
  std::ostream & out, size_t indentation = 0)
{
  nmea_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nmea_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nmea_msgs::msg::GpgsvSatellite & msg)
{
  return nmea_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nmea_msgs::msg::GpgsvSatellite>()
{
  return "nmea_msgs::msg::GpgsvSatellite";
}

template<>
inline const char * name<nmea_msgs::msg::GpgsvSatellite>()
{
  return "nmea_msgs/msg/GpgsvSatellite";
}

template<>
struct has_fixed_size<nmea_msgs::msg::GpgsvSatellite>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nmea_msgs::msg::GpgsvSatellite>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nmea_msgs::msg::GpgsvSatellite>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__TRAITS_HPP_

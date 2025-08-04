// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nmea_msgs/msg/detail/gpgsv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'satellites'
#include "nmea_msgs/msg/detail/gpgsv_satellite__traits.hpp"

namespace nmea_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gpgsv & msg,
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

  // member: n_msgs
  {
    out << "n_msgs: ";
    rosidl_generator_traits::value_to_yaml(msg.n_msgs, out);
    out << ", ";
  }

  // member: msg_number
  {
    out << "msg_number: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_number, out);
    out << ", ";
  }

  // member: n_satellites
  {
    out << "n_satellites: ";
    rosidl_generator_traits::value_to_yaml(msg.n_satellites, out);
    out << ", ";
  }

  // member: satellites
  {
    if (msg.satellites.size() == 0) {
      out << "satellites: []";
    } else {
      out << "satellites: [";
      size_t pending_items = msg.satellites.size();
      for (auto item : msg.satellites) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gpgsv & msg,
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

  // member: n_msgs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_msgs: ";
    rosidl_generator_traits::value_to_yaml(msg.n_msgs, out);
    out << "\n";
  }

  // member: msg_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_number: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_number, out);
    out << "\n";
  }

  // member: n_satellites
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_satellites: ";
    rosidl_generator_traits::value_to_yaml(msg.n_satellites, out);
    out << "\n";
  }

  // member: satellites
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.satellites.size() == 0) {
      out << "satellites: []\n";
    } else {
      out << "satellites:\n";
      for (auto item : msg.satellites) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gpgsv & msg, bool use_flow_style = false)
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
  const nmea_msgs::msg::Gpgsv & msg,
  std::ostream & out, size_t indentation = 0)
{
  nmea_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nmea_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nmea_msgs::msg::Gpgsv & msg)
{
  return nmea_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nmea_msgs::msg::Gpgsv>()
{
  return "nmea_msgs::msg::Gpgsv";
}

template<>
inline const char * name<nmea_msgs::msg::Gpgsv>()
{
  return "nmea_msgs/msg/Gpgsv";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Gpgsv>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Gpgsv>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Gpgsv>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV__TRAITS_HPP_

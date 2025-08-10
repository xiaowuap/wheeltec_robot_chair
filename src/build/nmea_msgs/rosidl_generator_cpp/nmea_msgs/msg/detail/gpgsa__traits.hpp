// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Gpgsa.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSA__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nmea_msgs/msg/detail/gpgsa__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nmea_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gpgsa & msg,
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

  // member: auto_manual_mode
  {
    out << "auto_manual_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_manual_mode, out);
    out << ", ";
  }

  // member: fix_mode
  {
    out << "fix_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_mode, out);
    out << ", ";
  }

  // member: sv_ids
  {
    if (msg.sv_ids.size() == 0) {
      out << "sv_ids: []";
    } else {
      out << "sv_ids: [";
      size_t pending_items = msg.sv_ids.size();
      for (auto item : msg.sv_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pdop
  {
    out << "pdop: ";
    rosidl_generator_traits::value_to_yaml(msg.pdop, out);
    out << ", ";
  }

  // member: hdop
  {
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << ", ";
  }

  // member: vdop
  {
    out << "vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.vdop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gpgsa & msg,
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

  // member: auto_manual_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_manual_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_manual_mode, out);
    out << "\n";
  }

  // member: fix_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_mode, out);
    out << "\n";
  }

  // member: sv_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sv_ids.size() == 0) {
      out << "sv_ids: []\n";
    } else {
      out << "sv_ids:\n";
      for (auto item : msg.sv_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pdop: ";
    rosidl_generator_traits::value_to_yaml(msg.pdop, out);
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

  // member: vdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.vdop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gpgsa & msg, bool use_flow_style = false)
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
  const nmea_msgs::msg::Gpgsa & msg,
  std::ostream & out, size_t indentation = 0)
{
  nmea_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nmea_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nmea_msgs::msg::Gpgsa & msg)
{
  return nmea_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nmea_msgs::msg::Gpgsa>()
{
  return "nmea_msgs::msg::Gpgsa";
}

template<>
inline const char * name<nmea_msgs::msg::Gpgsa>()
{
  return "nmea_msgs/msg/Gpgsa";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Gpgsa>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Gpgsa>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Gpgsa>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSA__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wheeltec_mic_msg:srv/GetDeviceType.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__GET_DEVICE_TYPE__TRAITS_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__GET_DEVICE_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wheeltec_mic_msg/srv/detail/get_device_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wheeltec_mic_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDeviceType_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDeviceType_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDeviceType_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace wheeltec_mic_msg

namespace rosidl_generator_traits
{

[[deprecated("use wheeltec_mic_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wheeltec_mic_msg::srv::GetDeviceType_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::srv::GetDeviceType_Request & msg)
{
  return wheeltec_mic_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::srv::GetDeviceType_Request>()
{
  return "wheeltec_mic_msg::srv::GetDeviceType_Request";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::GetDeviceType_Request>()
{
  return "wheeltec_mic_msg/srv/GetDeviceType_Request";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::GetDeviceType_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::GetDeviceType_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wheeltec_mic_msg::srv::GetDeviceType_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace wheeltec_mic_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDeviceType_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDeviceType_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDeviceType_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace wheeltec_mic_msg

namespace rosidl_generator_traits
{

[[deprecated("use wheeltec_mic_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wheeltec_mic_msg::srv::GetDeviceType_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::srv::GetDeviceType_Response & msg)
{
  return wheeltec_mic_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::srv::GetDeviceType_Response>()
{
  return "wheeltec_mic_msg::srv::GetDeviceType_Response";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::GetDeviceType_Response>()
{
  return "wheeltec_mic_msg/srv/GetDeviceType_Response";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::GetDeviceType_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::GetDeviceType_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wheeltec_mic_msg::srv::GetDeviceType_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wheeltec_mic_msg::srv::GetDeviceType>()
{
  return "wheeltec_mic_msg::srv::GetDeviceType";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::GetDeviceType>()
{
  return "wheeltec_mic_msg/srv/GetDeviceType";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::GetDeviceType>
  : std::integral_constant<
    bool,
    has_fixed_size<wheeltec_mic_msg::srv::GetDeviceType_Request>::value &&
    has_fixed_size<wheeltec_mic_msg::srv::GetDeviceType_Response>::value
  >
{
};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::GetDeviceType>
  : std::integral_constant<
    bool,
    has_bounded_size<wheeltec_mic_msg::srv::GetDeviceType_Request>::value &&
    has_bounded_size<wheeltec_mic_msg::srv::GetDeviceType_Response>::value
  >
{
};

template<>
struct is_service<wheeltec_mic_msg::srv::GetDeviceType>
  : std::true_type
{
};

template<>
struct is_service_request<wheeltec_mic_msg::srv::GetDeviceType_Request>
  : std::true_type
{
};

template<>
struct is_service_response<wheeltec_mic_msg::srv::GetDeviceType_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__GET_DEVICE_TYPE__TRAITS_HPP_

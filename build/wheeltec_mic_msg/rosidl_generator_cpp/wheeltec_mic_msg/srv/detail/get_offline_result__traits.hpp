// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wheeltec_mic_msg:srv/GetOfflineResult.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__GET_OFFLINE_RESULT__TRAITS_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__GET_OFFLINE_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wheeltec_mic_msg/srv/detail/get_offline_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wheeltec_mic_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetOfflineResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: offline_recognise_start
  {
    out << "offline_recognise_start: ";
    rosidl_generator_traits::value_to_yaml(msg.offline_recognise_start, out);
    out << ", ";
  }

  // member: confidence_threshold
  {
    out << "confidence_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_threshold, out);
    out << ", ";
  }

  // member: time_per_order
  {
    out << "time_per_order: ";
    rosidl_generator_traits::value_to_yaml(msg.time_per_order, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetOfflineResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: offline_recognise_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offline_recognise_start: ";
    rosidl_generator_traits::value_to_yaml(msg.offline_recognise_start, out);
    out << "\n";
  }

  // member: confidence_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_threshold, out);
    out << "\n";
  }

  // member: time_per_order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_per_order: ";
    rosidl_generator_traits::value_to_yaml(msg.time_per_order, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetOfflineResult_Request & msg, bool use_flow_style = false)
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
  const wheeltec_mic_msg::srv::GetOfflineResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::srv::GetOfflineResult_Request & msg)
{
  return wheeltec_mic_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::srv::GetOfflineResult_Request>()
{
  return "wheeltec_mic_msg::srv::GetOfflineResult_Request";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::GetOfflineResult_Request>()
{
  return "wheeltec_mic_msg/srv/GetOfflineResult_Request";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::GetOfflineResult_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::GetOfflineResult_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wheeltec_mic_msg::srv::GetOfflineResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace wheeltec_mic_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetOfflineResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: fail_reason
  {
    out << "fail_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_reason, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetOfflineResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: fail_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fail_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_reason, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetOfflineResult_Response & msg, bool use_flow_style = false)
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
  const wheeltec_mic_msg::srv::GetOfflineResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::srv::GetOfflineResult_Response & msg)
{
  return wheeltec_mic_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::srv::GetOfflineResult_Response>()
{
  return "wheeltec_mic_msg::srv::GetOfflineResult_Response";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::GetOfflineResult_Response>()
{
  return "wheeltec_mic_msg/srv/GetOfflineResult_Response";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::GetOfflineResult_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::GetOfflineResult_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wheeltec_mic_msg::srv::GetOfflineResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wheeltec_mic_msg::srv::GetOfflineResult>()
{
  return "wheeltec_mic_msg::srv::GetOfflineResult";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::GetOfflineResult>()
{
  return "wheeltec_mic_msg/srv/GetOfflineResult";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::GetOfflineResult>
  : std::integral_constant<
    bool,
    has_fixed_size<wheeltec_mic_msg::srv::GetOfflineResult_Request>::value &&
    has_fixed_size<wheeltec_mic_msg::srv::GetOfflineResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::GetOfflineResult>
  : std::integral_constant<
    bool,
    has_bounded_size<wheeltec_mic_msg::srv::GetOfflineResult_Request>::value &&
    has_bounded_size<wheeltec_mic_msg::srv::GetOfflineResult_Response>::value
  >
{
};

template<>
struct is_service<wheeltec_mic_msg::srv::GetOfflineResult>
  : std::true_type
{
};

template<>
struct is_service_request<wheeltec_mic_msg::srv::GetOfflineResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<wheeltec_mic_msg::srv::GetOfflineResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__GET_OFFLINE_RESULT__TRAITS_HPP_

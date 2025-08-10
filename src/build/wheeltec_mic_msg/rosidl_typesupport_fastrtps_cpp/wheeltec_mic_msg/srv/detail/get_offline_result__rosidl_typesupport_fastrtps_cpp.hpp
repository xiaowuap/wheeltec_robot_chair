// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from wheeltec_mic_msg:srv/GetOfflineResult.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__GET_OFFLINE_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__GET_OFFLINE_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "wheeltec_mic_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "wheeltec_mic_msg/srv/detail/get_offline_result__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace wheeltec_mic_msg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
cdr_serialize(
  const wheeltec_mic_msg::srv::GetOfflineResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wheeltec_mic_msg::srv::GetOfflineResult_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
get_serialized_size(
  const wheeltec_mic_msg::srv::GetOfflineResult_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
max_serialized_size_GetOfflineResult_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace wheeltec_mic_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wheeltec_mic_msg, srv, GetOfflineResult_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "wheeltec_mic_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "wheeltec_mic_msg/srv/detail/get_offline_result__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace wheeltec_mic_msg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
cdr_serialize(
  const wheeltec_mic_msg::srv::GetOfflineResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wheeltec_mic_msg::srv::GetOfflineResult_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
get_serialized_size(
  const wheeltec_mic_msg::srv::GetOfflineResult_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
max_serialized_size_GetOfflineResult_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace wheeltec_mic_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wheeltec_mic_msg, srv, GetOfflineResult_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "wheeltec_mic_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wheeltec_mic_msg, srv, GetOfflineResult)();

#ifdef __cplusplus
}
#endif

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__GET_OFFLINE_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

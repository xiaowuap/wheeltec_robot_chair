// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yesense_interface:msg/AttitudeAllData.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/attitude_all_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yesense_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yesense_interface/msg/detail/attitude_all_data__struct.h"
#include "yesense_interface/msg/detail/attitude_all_data__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "yesense_interface/msg/detail/attitude_min_ahrs__functions.h"  // att_min_ahrs
#include "yesense_interface/msg/detail/quat__functions.h"  // quat

// forward declare type support functions
size_t get_serialized_size_yesense_interface__msg__AttitudeMinAhrs(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yesense_interface__msg__AttitudeMinAhrs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yesense_interface, msg, AttitudeMinAhrs)();
size_t get_serialized_size_yesense_interface__msg__Quat(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yesense_interface__msg__Quat(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yesense_interface, msg, Quat)();


using _AttitudeAllData__ros_msg_type = yesense_interface__msg__AttitudeAllData;

static bool _AttitudeAllData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AttitudeAllData__ros_msg_type * ros_message = static_cast<const _AttitudeAllData__ros_msg_type *>(untyped_ros_message);
  // Field name: att_min_ahrs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, AttitudeMinAhrs
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->att_min_ahrs, cdr))
    {
      return false;
    }
  }

  // Field name: quat
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, Quat
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->quat, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AttitudeAllData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AttitudeAllData__ros_msg_type * ros_message = static_cast<_AttitudeAllData__ros_msg_type *>(untyped_ros_message);
  // Field name: att_min_ahrs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, AttitudeMinAhrs
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->att_min_ahrs))
    {
      return false;
    }
  }

  // Field name: quat
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, Quat
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->quat))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yesense_interface
size_t get_serialized_size_yesense_interface__msg__AttitudeAllData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AttitudeAllData__ros_msg_type * ros_message = static_cast<const _AttitudeAllData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name att_min_ahrs

  current_alignment += get_serialized_size_yesense_interface__msg__AttitudeMinAhrs(
    &(ros_message->att_min_ahrs), current_alignment);
  // field.name quat

  current_alignment += get_serialized_size_yesense_interface__msg__Quat(
    &(ros_message->quat), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AttitudeAllData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yesense_interface__msg__AttitudeAllData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yesense_interface
size_t max_serialized_size_yesense_interface__msg__AttitudeAllData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: att_min_ahrs
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yesense_interface__msg__AttitudeMinAhrs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: quat
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yesense_interface__msg__Quat(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = yesense_interface__msg__AttitudeAllData;
    is_plain =
      (
      offsetof(DataType, quat) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AttitudeAllData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_yesense_interface__msg__AttitudeAllData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AttitudeAllData = {
  "yesense_interface::msg",
  "AttitudeAllData",
  _AttitudeAllData__cdr_serialize,
  _AttitudeAllData__cdr_deserialize,
  _AttitudeAllData__get_serialized_size,
  _AttitudeAllData__max_serialized_size
};

static rosidl_message_type_support_t _AttitudeAllData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AttitudeAllData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yesense_interface, msg, AttitudeAllData)() {
  return &_AttitudeAllData__type_support;
}

#if defined(__cplusplus)
}
#endif

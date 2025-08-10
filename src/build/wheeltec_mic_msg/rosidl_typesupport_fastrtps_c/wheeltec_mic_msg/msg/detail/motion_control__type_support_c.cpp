// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wheeltec_mic_msg:msg/MotionControl.idl
// generated code does not contain a copyright notice
#include "wheeltec_mic_msg/msg/detail/motion_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wheeltec_mic_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wheeltec_mic_msg/msg/detail/motion_control__struct.h"
#include "wheeltec_mic_msg/msg/detail/motion_control__functions.h"
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


// forward declare type support functions


using _MotionControl__ros_msg_type = wheeltec_mic_msg__msg__MotionControl;

static bool _MotionControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionControl__ros_msg_type * ros_message = static_cast<const _MotionControl__ros_msg_type *>(untyped_ros_message);
  // Field name: linear_x
  {
    cdr << ros_message->linear_x;
  }

  // Field name: linear_y
  {
    cdr << ros_message->linear_y;
  }

  // Field name: angular_z
  {
    cdr << ros_message->angular_z;
  }

  // Field name: cmd_vel_flag
  {
    cdr << ros_message->cmd_vel_flag;
  }

  // Field name: follow_flag
  {
    cdr << ros_message->follow_flag;
  }

  // Field name: goal_reached_flag
  {
    cdr << ros_message->goal_reached_flag;
  }

  return true;
}

static bool _MotionControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionControl__ros_msg_type * ros_message = static_cast<_MotionControl__ros_msg_type *>(untyped_ros_message);
  // Field name: linear_x
  {
    cdr >> ros_message->linear_x;
  }

  // Field name: linear_y
  {
    cdr >> ros_message->linear_y;
  }

  // Field name: angular_z
  {
    cdr >> ros_message->angular_z;
  }

  // Field name: cmd_vel_flag
  {
    cdr >> ros_message->cmd_vel_flag;
  }

  // Field name: follow_flag
  {
    cdr >> ros_message->follow_flag;
  }

  // Field name: goal_reached_flag
  {
    cdr >> ros_message->goal_reached_flag;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wheeltec_mic_msg
size_t get_serialized_size_wheeltec_mic_msg__msg__MotionControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionControl__ros_msg_type * ros_message = static_cast<const _MotionControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name linear_x
  {
    size_t item_size = sizeof(ros_message->linear_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linear_y
  {
    size_t item_size = sizeof(ros_message->linear_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_z
  {
    size_t item_size = sizeof(ros_message->angular_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_vel_flag
  {
    size_t item_size = sizeof(ros_message->cmd_vel_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name follow_flag
  {
    size_t item_size = sizeof(ros_message->follow_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_reached_flag
  {
    size_t item_size = sizeof(ros_message->goal_reached_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionControl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wheeltec_mic_msg__msg__MotionControl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wheeltec_mic_msg
size_t max_serialized_size_wheeltec_mic_msg__msg__MotionControl(
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

  // member: linear_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: linear_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angular_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cmd_vel_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: follow_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: goal_reached_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wheeltec_mic_msg__msg__MotionControl;
    is_plain =
      (
      offsetof(DataType, goal_reached_flag) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotionControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wheeltec_mic_msg__msg__MotionControl(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotionControl = {
  "wheeltec_mic_msg::msg",
  "MotionControl",
  _MotionControl__cdr_serialize,
  _MotionControl__cdr_deserialize,
  _MotionControl__get_serialized_size,
  _MotionControl__max_serialized_size
};

static rosidl_message_type_support_t _MotionControl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionControl,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wheeltec_mic_msg, msg, MotionControl)() {
  return &_MotionControl__type_support;
}

#if defined(__cplusplus)
}
#endif

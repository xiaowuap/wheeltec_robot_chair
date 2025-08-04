// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from bodyreader_msg:msg/Bodyposture.idl
// generated code does not contain a copyright notice
#include "bodyreader_msg/msg/detail/bodyposture__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "bodyreader_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "bodyreader_msg/msg/detail/bodyposture__struct.h"
#include "bodyreader_msg/msg/detail/bodyposture__functions.h"
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


using _Bodyposture__ros_msg_type = bodyreader_msg__msg__Bodyposture;

static bool _Bodyposture__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Bodyposture__ros_msg_type * ros_message = static_cast<const _Bodyposture__ros_msg_type *>(untyped_ros_message);
  // Field name: bodyid
  {
    cdr << ros_message->bodyid;
  }

  // Field name: centerofmass_x
  {
    cdr << ros_message->centerofmass_x;
  }

  // Field name: centerofmass_y
  {
    cdr << ros_message->centerofmass_y;
  }

  // Field name: centerofmass_z
  {
    cdr << ros_message->centerofmass_z;
  }

  // Field name: left_arm_out
  {
    cdr << ros_message->left_arm_out;
  }

  // Field name: right_arm_out
  {
    cdr << ros_message->right_arm_out;
  }

  // Field name: left_hand_raised
  {
    cdr << ros_message->left_hand_raised;
  }

  // Field name: right_hand_raised
  {
    cdr << ros_message->right_hand_raised;
  }

  // Field name: akimibo
  {
    cdr << ros_message->akimibo;
  }

  // Field name: left_foot_up
  {
    cdr << ros_message->left_foot_up;
  }

  // Field name: right_foot_up
  {
    cdr << ros_message->right_foot_up;
  }

  // Field name: fall
  {
    cdr << ros_message->fall;
  }

  // Field name: tips
  {
    cdr << ros_message->tips;
  }

  // Field name: lock_status
  {
    cdr << ros_message->lock_status;
  }

  return true;
}

static bool _Bodyposture__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Bodyposture__ros_msg_type * ros_message = static_cast<_Bodyposture__ros_msg_type *>(untyped_ros_message);
  // Field name: bodyid
  {
    cdr >> ros_message->bodyid;
  }

  // Field name: centerofmass_x
  {
    cdr >> ros_message->centerofmass_x;
  }

  // Field name: centerofmass_y
  {
    cdr >> ros_message->centerofmass_y;
  }

  // Field name: centerofmass_z
  {
    cdr >> ros_message->centerofmass_z;
  }

  // Field name: left_arm_out
  {
    cdr >> ros_message->left_arm_out;
  }

  // Field name: right_arm_out
  {
    cdr >> ros_message->right_arm_out;
  }

  // Field name: left_hand_raised
  {
    cdr >> ros_message->left_hand_raised;
  }

  // Field name: right_hand_raised
  {
    cdr >> ros_message->right_hand_raised;
  }

  // Field name: akimibo
  {
    cdr >> ros_message->akimibo;
  }

  // Field name: left_foot_up
  {
    cdr >> ros_message->left_foot_up;
  }

  // Field name: right_foot_up
  {
    cdr >> ros_message->right_foot_up;
  }

  // Field name: fall
  {
    cdr >> ros_message->fall;
  }

  // Field name: tips
  {
    cdr >> ros_message->tips;
  }

  // Field name: lock_status
  {
    cdr >> ros_message->lock_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bodyreader_msg
size_t get_serialized_size_bodyreader_msg__msg__Bodyposture(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Bodyposture__ros_msg_type * ros_message = static_cast<const _Bodyposture__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bodyid
  {
    size_t item_size = sizeof(ros_message->bodyid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name centerofmass_x
  {
    size_t item_size = sizeof(ros_message->centerofmass_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name centerofmass_y
  {
    size_t item_size = sizeof(ros_message->centerofmass_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name centerofmass_z
  {
    size_t item_size = sizeof(ros_message->centerofmass_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_arm_out
  {
    size_t item_size = sizeof(ros_message->left_arm_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_arm_out
  {
    size_t item_size = sizeof(ros_message->right_arm_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_hand_raised
  {
    size_t item_size = sizeof(ros_message->left_hand_raised);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_hand_raised
  {
    size_t item_size = sizeof(ros_message->right_hand_raised);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name akimibo
  {
    size_t item_size = sizeof(ros_message->akimibo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_foot_up
  {
    size_t item_size = sizeof(ros_message->left_foot_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_foot_up
  {
    size_t item_size = sizeof(ros_message->right_foot_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fall
  {
    size_t item_size = sizeof(ros_message->fall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tips
  {
    size_t item_size = sizeof(ros_message->tips);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lock_status
  {
    size_t item_size = sizeof(ros_message->lock_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Bodyposture__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_bodyreader_msg__msg__Bodyposture(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bodyreader_msg
size_t max_serialized_size_bodyreader_msg__msg__Bodyposture(
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

  // member: bodyid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: centerofmass_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: centerofmass_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: centerofmass_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_arm_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_arm_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_hand_raised
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_hand_raised
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: akimibo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_foot_up
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_foot_up
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fall
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tips
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lock_status
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
    using DataType = bodyreader_msg__msg__Bodyposture;
    is_plain =
      (
      offsetof(DataType, lock_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Bodyposture__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_bodyreader_msg__msg__Bodyposture(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Bodyposture = {
  "bodyreader_msg::msg",
  "Bodyposture",
  _Bodyposture__cdr_serialize,
  _Bodyposture__cdr_deserialize,
  _Bodyposture__get_serialized_size,
  _Bodyposture__max_serialized_size
};

static rosidl_message_type_support_t _Bodyposture__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Bodyposture,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bodyreader_msg, msg, Bodyposture)() {
  return &_Bodyposture__type_support;
}

#if defined(__cplusplus)
}
#endif

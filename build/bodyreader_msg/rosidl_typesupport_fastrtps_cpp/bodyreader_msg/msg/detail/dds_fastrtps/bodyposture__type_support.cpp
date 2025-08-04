// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from bodyreader_msg:msg/Bodyposture.idl
// generated code does not contain a copyright notice
#include "bodyreader_msg/msg/detail/bodyposture__rosidl_typesupport_fastrtps_cpp.hpp"
#include "bodyreader_msg/msg/detail/bodyposture__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace bodyreader_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
cdr_serialize(
  const bodyreader_msg::msg::Bodyposture & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bodyid
  cdr << ros_message.bodyid;
  // Member: centerofmass_x
  cdr << ros_message.centerofmass_x;
  // Member: centerofmass_y
  cdr << ros_message.centerofmass_y;
  // Member: centerofmass_z
  cdr << ros_message.centerofmass_z;
  // Member: left_arm_out
  cdr << ros_message.left_arm_out;
  // Member: right_arm_out
  cdr << ros_message.right_arm_out;
  // Member: left_hand_raised
  cdr << ros_message.left_hand_raised;
  // Member: right_hand_raised
  cdr << ros_message.right_hand_raised;
  // Member: akimibo
  cdr << ros_message.akimibo;
  // Member: left_foot_up
  cdr << ros_message.left_foot_up;
  // Member: right_foot_up
  cdr << ros_message.right_foot_up;
  // Member: fall
  cdr << ros_message.fall;
  // Member: tips
  cdr << ros_message.tips;
  // Member: lock_status
  cdr << ros_message.lock_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bodyreader_msg::msg::Bodyposture & ros_message)
{
  // Member: bodyid
  cdr >> ros_message.bodyid;

  // Member: centerofmass_x
  cdr >> ros_message.centerofmass_x;

  // Member: centerofmass_y
  cdr >> ros_message.centerofmass_y;

  // Member: centerofmass_z
  cdr >> ros_message.centerofmass_z;

  // Member: left_arm_out
  cdr >> ros_message.left_arm_out;

  // Member: right_arm_out
  cdr >> ros_message.right_arm_out;

  // Member: left_hand_raised
  cdr >> ros_message.left_hand_raised;

  // Member: right_hand_raised
  cdr >> ros_message.right_hand_raised;

  // Member: akimibo
  cdr >> ros_message.akimibo;

  // Member: left_foot_up
  cdr >> ros_message.left_foot_up;

  // Member: right_foot_up
  cdr >> ros_message.right_foot_up;

  // Member: fall
  cdr >> ros_message.fall;

  // Member: tips
  cdr >> ros_message.tips;

  // Member: lock_status
  cdr >> ros_message.lock_status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
get_serialized_size(
  const bodyreader_msg::msg::Bodyposture & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bodyid
  {
    size_t item_size = sizeof(ros_message.bodyid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: centerofmass_x
  {
    size_t item_size = sizeof(ros_message.centerofmass_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: centerofmass_y
  {
    size_t item_size = sizeof(ros_message.centerofmass_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: centerofmass_z
  {
    size_t item_size = sizeof(ros_message.centerofmass_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_arm_out
  {
    size_t item_size = sizeof(ros_message.left_arm_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_arm_out
  {
    size_t item_size = sizeof(ros_message.right_arm_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_hand_raised
  {
    size_t item_size = sizeof(ros_message.left_hand_raised);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_hand_raised
  {
    size_t item_size = sizeof(ros_message.right_hand_raised);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: akimibo
  {
    size_t item_size = sizeof(ros_message.akimibo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_foot_up
  {
    size_t item_size = sizeof(ros_message.left_foot_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_foot_up
  {
    size_t item_size = sizeof(ros_message.right_foot_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fall
  {
    size_t item_size = sizeof(ros_message.fall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tips
  {
    size_t item_size = sizeof(ros_message.tips);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lock_status
  {
    size_t item_size = sizeof(ros_message.lock_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
max_serialized_size_Bodyposture(
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


  // Member: bodyid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: centerofmass_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: centerofmass_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: centerofmass_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_arm_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_arm_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_hand_raised
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_hand_raised
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: akimibo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_foot_up
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_foot_up
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fall
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tips
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lock_status
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
    using DataType = bodyreader_msg::msg::Bodyposture;
    is_plain =
      (
      offsetof(DataType, lock_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Bodyposture__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const bodyreader_msg::msg::Bodyposture *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Bodyposture__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<bodyreader_msg::msg::Bodyposture *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Bodyposture__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const bodyreader_msg::msg::Bodyposture *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Bodyposture__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Bodyposture(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Bodyposture__callbacks = {
  "bodyreader_msg::msg",
  "Bodyposture",
  _Bodyposture__cdr_serialize,
  _Bodyposture__cdr_deserialize,
  _Bodyposture__get_serialized_size,
  _Bodyposture__max_serialized_size
};

static rosidl_message_type_support_t _Bodyposture__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Bodyposture__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bodyreader_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_bodyreader_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<bodyreader_msg::msg::Bodyposture>()
{
  return &bodyreader_msg::msg::typesupport_fastrtps_cpp::_Bodyposture__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bodyreader_msg, msg, Bodyposture)() {
  return &bodyreader_msg::msg::typesupport_fastrtps_cpp::_Bodyposture__handle;
}

#ifdef __cplusplus
}
#endif

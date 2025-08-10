// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from bodyreader_msg:msg/Lockedmaskwh.idl
// generated code does not contain a copyright notice
#include "bodyreader_msg/msg/detail/lockedmaskwh__rosidl_typesupport_fastrtps_cpp.hpp"
#include "bodyreader_msg/msg/detail/lockedmaskwh__struct.hpp"

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
  const bodyreader_msg::msg::Lockedmaskwh & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: width_l
  cdr << ros_message.width_l;
  // Member: width_r
  cdr << ros_message.width_r;
  // Member: height_t
  cdr << ros_message.height_t;
  // Member: height_b
  cdr << ros_message.height_b;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bodyreader_msg::msg::Lockedmaskwh & ros_message)
{
  // Member: width_l
  cdr >> ros_message.width_l;

  // Member: width_r
  cdr >> ros_message.width_r;

  // Member: height_t
  cdr >> ros_message.height_t;

  // Member: height_b
  cdr >> ros_message.height_b;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
get_serialized_size(
  const bodyreader_msg::msg::Lockedmaskwh & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: width_l
  {
    size_t item_size = sizeof(ros_message.width_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: width_r
  {
    size_t item_size = sizeof(ros_message.width_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height_t
  {
    size_t item_size = sizeof(ros_message.height_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height_b
  {
    size_t item_size = sizeof(ros_message.height_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
max_serialized_size_Lockedmaskwh(
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


  // Member: width_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: width_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: height_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: height_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = bodyreader_msg::msg::Lockedmaskwh;
    is_plain =
      (
      offsetof(DataType, height_b) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Lockedmaskwh__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const bodyreader_msg::msg::Lockedmaskwh *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Lockedmaskwh__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<bodyreader_msg::msg::Lockedmaskwh *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Lockedmaskwh__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const bodyreader_msg::msg::Lockedmaskwh *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Lockedmaskwh__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Lockedmaskwh(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Lockedmaskwh__callbacks = {
  "bodyreader_msg::msg",
  "Lockedmaskwh",
  _Lockedmaskwh__cdr_serialize,
  _Lockedmaskwh__cdr_deserialize,
  _Lockedmaskwh__get_serialized_size,
  _Lockedmaskwh__max_serialized_size
};

static rosidl_message_type_support_t _Lockedmaskwh__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Lockedmaskwh__callbacks,
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
get_message_type_support_handle<bodyreader_msg::msg::Lockedmaskwh>()
{
  return &bodyreader_msg::msg::typesupport_fastrtps_cpp::_Lockedmaskwh__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bodyreader_msg, msg, Lockedmaskwh)() {
  return &bodyreader_msg::msg::typesupport_fastrtps_cpp::_Lockedmaskwh__handle;
}

#ifdef __cplusplus
}
#endif

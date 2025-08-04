// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from yesense_interface:msg/EulerOnly.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/euler_only__rosidl_typesupport_fastrtps_cpp.hpp"
#include "yesense_interface/msg/detail/euler_only__struct.hpp"

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
namespace yesense_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const yesense_interface::msg::Tid &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  yesense_interface::msg::Tid &);
size_t get_serialized_size(
  const yesense_interface::msg::Tid &,
  size_t current_alignment);
size_t
max_serialized_size_Tid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace yesense_interface

namespace yesense_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const yesense_interface::msg::EulerAngle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  yesense_interface::msg::EulerAngle &);
size_t get_serialized_size(
  const yesense_interface::msg::EulerAngle &,
  size_t current_alignment);
size_t
max_serialized_size_EulerAngle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace yesense_interface


namespace yesense_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
cdr_serialize(
  const yesense_interface::msg::EulerOnly & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tid
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tid,
    cdr);
  // Member: euler
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.euler,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yesense_interface::msg::EulerOnly & ros_message)
{
  // Member: tid
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tid);

  // Member: euler
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.euler);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
get_serialized_size(
  const yesense_interface::msg::EulerOnly & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tid

  current_alignment +=
    yesense_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tid, current_alignment);
  // Member: euler

  current_alignment +=
    yesense_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.euler, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
max_serialized_size_EulerOnly(
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


  // Member: tid
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        yesense_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Tid(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: euler
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        yesense_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_EulerAngle(
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
    using DataType = yesense_interface::msg::EulerOnly;
    is_plain =
      (
      offsetof(DataType, euler) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EulerOnly__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const yesense_interface::msg::EulerOnly *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EulerOnly__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<yesense_interface::msg::EulerOnly *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EulerOnly__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const yesense_interface::msg::EulerOnly *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EulerOnly__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EulerOnly(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EulerOnly__callbacks = {
  "yesense_interface::msg",
  "EulerOnly",
  _EulerOnly__cdr_serialize,
  _EulerOnly__cdr_deserialize,
  _EulerOnly__get_serialized_size,
  _EulerOnly__max_serialized_size
};

static rosidl_message_type_support_t _EulerOnly__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EulerOnly__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace yesense_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_yesense_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<yesense_interface::msg::EulerOnly>()
{
  return &yesense_interface::msg::typesupport_fastrtps_cpp::_EulerOnly__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yesense_interface, msg, EulerOnly)() {
  return &yesense_interface::msg::typesupport_fastrtps_cpp::_EulerOnly__handle;
}

#ifdef __cplusplus
}
#endif

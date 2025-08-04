// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from yesense_interface:msg/SensorTemp.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/sensor_temp__rosidl_typesupport_fastrtps_cpp.hpp"
#include "yesense_interface/msg/detail/sensor_temp__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
cdr_serialize(
  const yesense_interface::msg::SensorTemp & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: temp
  cdr << ros_message.temp;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yesense_interface::msg::SensorTemp & ros_message)
{
  // Member: temp
  cdr >> ros_message.temp;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
get_serialized_size(
  const yesense_interface::msg::SensorTemp & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: temp
  {
    size_t item_size = sizeof(ros_message.temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
max_serialized_size_SensorTemp(
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


  // Member: temp
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
    using DataType = yesense_interface::msg::SensorTemp;
    is_plain =
      (
      offsetof(DataType, temp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SensorTemp__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const yesense_interface::msg::SensorTemp *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorTemp__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<yesense_interface::msg::SensorTemp *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorTemp__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const yesense_interface::msg::SensorTemp *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorTemp__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorTemp(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorTemp__callbacks = {
  "yesense_interface::msg",
  "SensorTemp",
  _SensorTemp__cdr_serialize,
  _SensorTemp__cdr_deserialize,
  _SensorTemp__get_serialized_size,
  _SensorTemp__max_serialized_size
};

static rosidl_message_type_support_t _SensorTemp__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorTemp__callbacks,
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
get_message_type_support_handle<yesense_interface::msg::SensorTemp>()
{
  return &yesense_interface::msg::typesupport_fastrtps_cpp::_SensorTemp__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yesense_interface, msg, SensorTemp)() {
  return &yesense_interface::msg::typesupport_fastrtps_cpp::_SensorTemp__handle;
}

#ifdef __cplusplus
}
#endif

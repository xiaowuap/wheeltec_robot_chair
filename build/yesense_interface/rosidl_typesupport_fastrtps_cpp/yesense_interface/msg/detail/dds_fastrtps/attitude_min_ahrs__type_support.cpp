// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from yesense_interface:msg/AttitudeMinAhrs.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/attitude_min_ahrs__rosidl_typesupport_fastrtps_cpp.hpp"
#include "yesense_interface/msg/detail/attitude_min_ahrs__struct.hpp"

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
  const yesense_interface::msg::AttitudeMinVru &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  yesense_interface::msg::AttitudeMinVru &);
size_t get_serialized_size(
  const yesense_interface::msg::AttitudeMinVru &,
  size_t current_alignment);
size_t
max_serialized_size_AttitudeMinVru(
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
  const yesense_interface::msg::ThreeAxis &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  yesense_interface::msg::ThreeAxis &);
size_t get_serialized_size(
  const yesense_interface::msg::ThreeAxis &,
  size_t current_alignment);
size_t
max_serialized_size_ThreeAxis(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace yesense_interface

// functions for yesense_interface::msg::ThreeAxis already declared above


namespace yesense_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
cdr_serialize(
  const yesense_interface::msg::AttitudeMinAhrs & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: att_min_vru
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.att_min_vru,
    cdr);
  // Member: mag_norm
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.mag_norm,
    cdr);
  // Member: mag_raw
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.mag_raw,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yesense_interface::msg::AttitudeMinAhrs & ros_message)
{
  // Member: att_min_vru
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.att_min_vru);

  // Member: mag_norm
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.mag_norm);

  // Member: mag_raw
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.mag_raw);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
get_serialized_size(
  const yesense_interface::msg::AttitudeMinAhrs & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: att_min_vru

  current_alignment +=
    yesense_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.att_min_vru, current_alignment);
  // Member: mag_norm

  current_alignment +=
    yesense_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.mag_norm, current_alignment);
  // Member: mag_raw

  current_alignment +=
    yesense_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.mag_raw, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
max_serialized_size_AttitudeMinAhrs(
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


  // Member: att_min_vru
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        yesense_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_AttitudeMinVru(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: mag_norm
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        yesense_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_ThreeAxis(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: mag_raw
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        yesense_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_ThreeAxis(
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
    using DataType = yesense_interface::msg::AttitudeMinAhrs;
    is_plain =
      (
      offsetof(DataType, mag_raw) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AttitudeMinAhrs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const yesense_interface::msg::AttitudeMinAhrs *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AttitudeMinAhrs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<yesense_interface::msg::AttitudeMinAhrs *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AttitudeMinAhrs__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const yesense_interface::msg::AttitudeMinAhrs *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AttitudeMinAhrs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AttitudeMinAhrs(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AttitudeMinAhrs__callbacks = {
  "yesense_interface::msg",
  "AttitudeMinAhrs",
  _AttitudeMinAhrs__cdr_serialize,
  _AttitudeMinAhrs__cdr_deserialize,
  _AttitudeMinAhrs__get_serialized_size,
  _AttitudeMinAhrs__max_serialized_size
};

static rosidl_message_type_support_t _AttitudeMinAhrs__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AttitudeMinAhrs__callbacks,
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
get_message_type_support_handle<yesense_interface::msg::AttitudeMinAhrs>()
{
  return &yesense_interface::msg::typesupport_fastrtps_cpp::_AttitudeMinAhrs__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yesense_interface, msg, AttitudeMinAhrs)() {
  return &yesense_interface::msg::typesupport_fastrtps_cpp::_AttitudeMinAhrs__handle;
}

#ifdef __cplusplus
}
#endif

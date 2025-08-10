// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from yesense_interface:msg/ImuDataTenAxis.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/imu_data_ten_axis__rosidl_typesupport_fastrtps_cpp.hpp"
#include "yesense_interface/msg/detail/imu_data_ten_axis__struct.hpp"

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
  const yesense_interface::msg::ImuData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  yesense_interface::msg::ImuData &);
size_t get_serialized_size(
  const yesense_interface::msg::ImuData &,
  size_t current_alignment);
size_t
max_serialized_size_ImuData(
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
bool cdr_serialize(
  const yesense_interface::msg::Pressure &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  yesense_interface::msg::Pressure &);
size_t get_serialized_size(
  const yesense_interface::msg::Pressure &,
  size_t current_alignment);
size_t
max_serialized_size_Pressure(
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
  const yesense_interface::msg::ImuDataTenAxis & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: imu_basic
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.imu_basic,
    cdr);
  // Member: mag_norm
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.mag_norm,
    cdr);
  // Member: mag_raw
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.mag_raw,
    cdr);
  // Member: pressure
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pressure,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yesense_interface::msg::ImuDataTenAxis & ros_message)
{
  // Member: imu_basic
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.imu_basic);

  // Member: mag_norm
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.mag_norm);

  // Member: mag_raw
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.mag_raw);

  // Member: pressure
  yesense_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pressure);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
get_serialized_size(
  const yesense_interface::msg::ImuDataTenAxis & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: imu_basic

  current_alignment +=
    yesense_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.imu_basic, current_alignment);
  // Member: mag_norm

  current_alignment +=
    yesense_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.mag_norm, current_alignment);
  // Member: mag_raw

  current_alignment +=
    yesense_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.mag_raw, current_alignment);
  // Member: pressure

  current_alignment +=
    yesense_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pressure, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yesense_interface
max_serialized_size_ImuDataTenAxis(
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


  // Member: imu_basic
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        yesense_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_ImuData(
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

  // Member: pressure
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        yesense_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Pressure(
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
    using DataType = yesense_interface::msg::ImuDataTenAxis;
    is_plain =
      (
      offsetof(DataType, pressure) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ImuDataTenAxis__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const yesense_interface::msg::ImuDataTenAxis *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImuDataTenAxis__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<yesense_interface::msg::ImuDataTenAxis *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImuDataTenAxis__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const yesense_interface::msg::ImuDataTenAxis *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImuDataTenAxis__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ImuDataTenAxis(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ImuDataTenAxis__callbacks = {
  "yesense_interface::msg",
  "ImuDataTenAxis",
  _ImuDataTenAxis__cdr_serialize,
  _ImuDataTenAxis__cdr_deserialize,
  _ImuDataTenAxis__get_serialized_size,
  _ImuDataTenAxis__max_serialized_size
};

static rosidl_message_type_support_t _ImuDataTenAxis__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImuDataTenAxis__callbacks,
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
get_message_type_support_handle<yesense_interface::msg::ImuDataTenAxis>()
{
  return &yesense_interface::msg::typesupport_fastrtps_cpp::_ImuDataTenAxis__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yesense_interface, msg, ImuDataTenAxis)() {
  return &yesense_interface::msg::typesupport_fastrtps_cpp::_ImuDataTenAxis__handle;
}

#ifdef __cplusplus
}
#endif

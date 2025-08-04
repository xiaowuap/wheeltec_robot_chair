// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nmea_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gpgsv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nmea_msgs/msg/detail/gpgsv__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace nmea_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nmea_msgs::msg::GpgsvSatellite &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nmea_msgs::msg::GpgsvSatellite &);
size_t get_serialized_size(
  const nmea_msgs::msg::GpgsvSatellite &,
  size_t current_alignment);
size_t
max_serialized_size_GpgsvSatellite(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nmea_msgs


namespace nmea_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
cdr_serialize(
  const nmea_msgs::msg::Gpgsv & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: message_id
  cdr << ros_message.message_id;
  // Member: n_msgs
  cdr << ros_message.n_msgs;
  // Member: msg_number
  cdr << ros_message.msg_number;
  // Member: n_satellites
  cdr << ros_message.n_satellites;
  // Member: satellites
  {
    size_t size = ros_message.satellites.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.satellites[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nmea_msgs::msg::Gpgsv & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: message_id
  cdr >> ros_message.message_id;

  // Member: n_msgs
  cdr >> ros_message.n_msgs;

  // Member: msg_number
  cdr >> ros_message.msg_number;

  // Member: n_satellites
  cdr >> ros_message.n_satellites;

  // Member: satellites
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.satellites.resize(size);
    for (size_t i = 0; i < size; i++) {
      nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.satellites[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
get_serialized_size(
  const nmea_msgs::msg::Gpgsv & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: message_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message_id.size() + 1);
  // Member: n_msgs
  {
    size_t item_size = sizeof(ros_message.n_msgs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_number
  {
    size_t item_size = sizeof(ros_message.msg_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: n_satellites
  {
    size_t item_size = sizeof(ros_message.n_satellites);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: satellites
  {
    size_t array_size = ros_message.satellites.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nmea_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.satellites[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
max_serialized_size_Gpgsv(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: message_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: n_msgs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: n_satellites
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: satellites
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        nmea_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GpgsvSatellite(
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
    using DataType = nmea_msgs::msg::Gpgsv;
    is_plain =
      (
      offsetof(DataType, satellites) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Gpgsv__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nmea_msgs::msg::Gpgsv *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Gpgsv__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nmea_msgs::msg::Gpgsv *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Gpgsv__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nmea_msgs::msg::Gpgsv *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Gpgsv__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Gpgsv(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Gpgsv__callbacks = {
  "nmea_msgs::msg",
  "Gpgsv",
  _Gpgsv__cdr_serialize,
  _Gpgsv__cdr_deserialize,
  _Gpgsv__get_serialized_size,
  _Gpgsv__max_serialized_size
};

static rosidl_message_type_support_t _Gpgsv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Gpgsv__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace nmea_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nmea_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nmea_msgs::msg::Gpgsv>()
{
  return &nmea_msgs::msg::typesupport_fastrtps_cpp::_Gpgsv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nmea_msgs, msg, Gpgsv)() {
  return &nmea_msgs::msg::typesupport_fastrtps_cpp::_Gpgsv__handle;
}

#ifdef __cplusplus
}
#endif

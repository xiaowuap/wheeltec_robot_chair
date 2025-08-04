// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nmea_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gpgga__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nmea_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nmea_msgs/msg/detail/gpgga__struct.h"
#include "nmea_msgs/msg/detail/gpgga__functions.h"
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

#include "rosidl_runtime_c/string.h"  // altitude_units, lat_dir, lon_dir, message_id, station_id, undulation_units
#include "rosidl_runtime_c/string_functions.h"  // altitude_units, lat_dir, lon_dir, message_id, station_id, undulation_units
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nmea_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nmea_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nmea_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Gpgga__ros_msg_type = nmea_msgs__msg__Gpgga;

static bool _Gpgga__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Gpgga__ros_msg_type * ros_message = static_cast<const _Gpgga__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: message_id
  {
    const rosidl_runtime_c__String * str = &ros_message->message_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: utc_seconds
  {
    cdr << ros_message->utc_seconds;
  }

  // Field name: lat
  {
    cdr << ros_message->lat;
  }

  // Field name: lon
  {
    cdr << ros_message->lon;
  }

  // Field name: lat_dir
  {
    const rosidl_runtime_c__String * str = &ros_message->lat_dir;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lon_dir
  {
    const rosidl_runtime_c__String * str = &ros_message->lon_dir;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: gps_qual
  {
    cdr << ros_message->gps_qual;
  }

  // Field name: num_sats
  {
    cdr << ros_message->num_sats;
  }

  // Field name: hdop
  {
    cdr << ros_message->hdop;
  }

  // Field name: alt
  {
    cdr << ros_message->alt;
  }

  // Field name: altitude_units
  {
    const rosidl_runtime_c__String * str = &ros_message->altitude_units;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: undulation
  {
    cdr << ros_message->undulation;
  }

  // Field name: undulation_units
  {
    const rosidl_runtime_c__String * str = &ros_message->undulation_units;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: diff_age
  {
    cdr << ros_message->diff_age;
  }

  // Field name: station_id
  {
    const rosidl_runtime_c__String * str = &ros_message->station_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Gpgga__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Gpgga__ros_msg_type * ros_message = static_cast<_Gpgga__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: message_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message_id.data) {
      rosidl_runtime_c__String__init(&ros_message->message_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message_id'\n");
      return false;
    }
  }

  // Field name: utc_seconds
  {
    cdr >> ros_message->utc_seconds;
  }

  // Field name: lat
  {
    cdr >> ros_message->lat;
  }

  // Field name: lon
  {
    cdr >> ros_message->lon;
  }

  // Field name: lat_dir
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lat_dir.data) {
      rosidl_runtime_c__String__init(&ros_message->lat_dir);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lat_dir,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lat_dir'\n");
      return false;
    }
  }

  // Field name: lon_dir
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lon_dir.data) {
      rosidl_runtime_c__String__init(&ros_message->lon_dir);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lon_dir,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lon_dir'\n");
      return false;
    }
  }

  // Field name: gps_qual
  {
    cdr >> ros_message->gps_qual;
  }

  // Field name: num_sats
  {
    cdr >> ros_message->num_sats;
  }

  // Field name: hdop
  {
    cdr >> ros_message->hdop;
  }

  // Field name: alt
  {
    cdr >> ros_message->alt;
  }

  // Field name: altitude_units
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->altitude_units.data) {
      rosidl_runtime_c__String__init(&ros_message->altitude_units);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->altitude_units,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'altitude_units'\n");
      return false;
    }
  }

  // Field name: undulation
  {
    cdr >> ros_message->undulation;
  }

  // Field name: undulation_units
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->undulation_units.data) {
      rosidl_runtime_c__String__init(&ros_message->undulation_units);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->undulation_units,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'undulation_units'\n");
      return false;
    }
  }

  // Field name: diff_age
  {
    cdr >> ros_message->diff_age;
  }

  // Field name: station_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->station_id.data) {
      rosidl_runtime_c__String__init(&ros_message->station_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->station_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'station_id'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nmea_msgs
size_t get_serialized_size_nmea_msgs__msg__Gpgga(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Gpgga__ros_msg_type * ros_message = static_cast<const _Gpgga__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name message_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message_id.size + 1);
  // field.name utc_seconds
  {
    size_t item_size = sizeof(ros_message->utc_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat
  {
    size_t item_size = sizeof(ros_message->lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon
  {
    size_t item_size = sizeof(ros_message->lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_dir
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lat_dir.size + 1);
  // field.name lon_dir
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lon_dir.size + 1);
  // field.name gps_qual
  {
    size_t item_size = sizeof(ros_message->gps_qual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sats
  {
    size_t item_size = sizeof(ros_message->num_sats);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hdop
  {
    size_t item_size = sizeof(ros_message->hdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alt
  {
    size_t item_size = sizeof(ros_message->alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude_units
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->altitude_units.size + 1);
  // field.name undulation
  {
    size_t item_size = sizeof(ros_message->undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name undulation_units
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->undulation_units.size + 1);
  // field.name diff_age
  {
    size_t item_size = sizeof(ros_message->diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name station_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->station_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Gpgga__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nmea_msgs__msg__Gpgga(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nmea_msgs
size_t max_serialized_size_nmea_msgs__msg__Gpgga(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: message_id
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
  // member: utc_seconds
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lat_dir
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
  // member: lon_dir
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
  // member: gps_qual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_sats
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: altitude_units
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
  // member: undulation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: undulation_units
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
  // member: diff_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: station_id
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nmea_msgs__msg__Gpgga;
    is_plain =
      (
      offsetof(DataType, station_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Gpgga__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nmea_msgs__msg__Gpgga(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Gpgga = {
  "nmea_msgs::msg",
  "Gpgga",
  _Gpgga__cdr_serialize,
  _Gpgga__cdr_deserialize,
  _Gpgga__get_serialized_size,
  _Gpgga__max_serialized_size
};

static rosidl_message_type_support_t _Gpgga__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Gpgga,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nmea_msgs, msg, Gpgga)() {
  return &_Gpgga__type_support;
}

#if defined(__cplusplus)
}
#endif

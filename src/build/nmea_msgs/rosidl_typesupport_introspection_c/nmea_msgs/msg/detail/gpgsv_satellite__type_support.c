// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nmea_msgs:msg/GpgsvSatellite.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nmea_msgs/msg/detail/gpgsv_satellite__rosidl_typesupport_introspection_c.h"
#include "nmea_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nmea_msgs/msg/detail/gpgsv_satellite__functions.h"
#include "nmea_msgs/msg/detail/gpgsv_satellite__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nmea_msgs__msg__GpgsvSatellite__init(message_memory);
}

void nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_fini_function(void * message_memory)
{
  nmea_msgs__msg__GpgsvSatellite__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_message_member_array[4] = {
  {
    "prn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__GpgsvSatellite, prn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__GpgsvSatellite, elevation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "azimuth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__GpgsvSatellite, azimuth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "snr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__GpgsvSatellite, snr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_message_members = {
  "nmea_msgs__msg",  // message namespace
  "GpgsvSatellite",  // message name
  4,  // number of fields
  sizeof(nmea_msgs__msg__GpgsvSatellite),
  nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_message_member_array,  // message members
  nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_init_function,  // function to initialize message memory (memory has to be allocated)
  nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_message_type_support_handle = {
  0,
  &nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nmea_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nmea_msgs, msg, GpgsvSatellite)() {
  if (!nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_message_type_support_handle.typesupport_identifier) {
    nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nmea_msgs__msg__GpgsvSatellite__rosidl_typesupport_introspection_c__GpgsvSatellite_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

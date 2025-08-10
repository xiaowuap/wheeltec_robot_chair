// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/NavAll.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tid'
#include "yesense_interface/msg/detail/tid__struct.h"
// Member 'acc'
// Member 'gyro'
#include "yesense_interface/msg/detail/three_axis__struct.h"
// Member 'euler'
#include "yesense_interface/msg/detail/euler_angle__struct.h"
// Member 'quat'
#include "yesense_interface/msg/detail/quat__struct.h"
// Member 'temp'
#include "yesense_interface/msg/detail/sensor_temp__struct.h"
// Member 'pos'
#include "yesense_interface/msg/detail/gnss_pos__struct.h"
// Member 'status'
#include "yesense_interface/msg/detail/nav_status__struct.h"
// Member 'vel'
#include "yesense_interface/msg/detail/vel__struct.h"
// Member 'utc'
#include "yesense_interface/msg/detail/utc__struct.h"
// Member 'pressure'
#include "yesense_interface/msg/detail/pressure__struct.h"

/// Struct defined in msg/NavAll in the package yesense_interface.
typedef struct yesense_interface__msg__NavAll
{
  yesense_interface__msg__Tid tid;
  yesense_interface__msg__ThreeAxis acc;
  yesense_interface__msg__ThreeAxis gyro;
  yesense_interface__msg__EulerAngle euler;
  yesense_interface__msg__Quat quat;
  yesense_interface__msg__SensorTemp temp;
  yesense_interface__msg__GnssPos pos;
  yesense_interface__msg__NavStatus status;
  yesense_interface__msg__Vel vel;
  yesense_interface__msg__Utc utc;
  yesense_interface__msg__Pressure pressure;
} yesense_interface__msg__NavAll;

// Struct for a sequence of yesense_interface__msg__NavAll.
typedef struct yesense_interface__msg__NavAll__Sequence
{
  yesense_interface__msg__NavAll * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__NavAll__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__STRUCT_H_

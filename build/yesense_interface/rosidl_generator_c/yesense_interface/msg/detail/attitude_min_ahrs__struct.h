// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/AttitudeMinAhrs.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'att_min_vru'
#include "yesense_interface/msg/detail/attitude_min_vru__struct.h"
// Member 'mag_norm'
// Member 'mag_raw'
#include "yesense_interface/msg/detail/three_axis__struct.h"

/// Struct defined in msg/AttitudeMinAhrs in the package yesense_interface.
typedef struct yesense_interface__msg__AttitudeMinAhrs
{
  yesense_interface__msg__AttitudeMinVru att_min_vru;
  yesense_interface__msg__ThreeAxis mag_norm;
  yesense_interface__msg__ThreeAxis mag_raw;
} yesense_interface__msg__AttitudeMinAhrs;

// Struct for a sequence of yesense_interface__msg__AttitudeMinAhrs.
typedef struct yesense_interface__msg__AttitudeMinAhrs__Sequence
{
  yesense_interface__msg__AttitudeMinAhrs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__AttitudeMinAhrs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__STRUCT_H_

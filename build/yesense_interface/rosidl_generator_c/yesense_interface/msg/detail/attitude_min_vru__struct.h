// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/AttitudeMinVru.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'imu_basic'
#include "yesense_interface/msg/detail/imu_data__struct.h"
// Member 'euler'
#include "yesense_interface/msg/detail/euler_angle__struct.h"

/// Struct defined in msg/AttitudeMinVru in the package yesense_interface.
typedef struct yesense_interface__msg__AttitudeMinVru
{
  yesense_interface__msg__ImuData imu_basic;
  yesense_interface__msg__EulerAngle euler;
} yesense_interface__msg__AttitudeMinVru;

// Struct for a sequence of yesense_interface__msg__AttitudeMinVru.
typedef struct yesense_interface__msg__AttitudeMinVru__Sequence
{
  yesense_interface__msg__AttitudeMinVru * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__AttitudeMinVru__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__STRUCT_H_

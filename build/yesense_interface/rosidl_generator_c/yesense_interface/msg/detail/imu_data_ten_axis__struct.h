// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/ImuDataTenAxis.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__STRUCT_H_

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
// Member 'mag_norm'
// Member 'mag_raw'
#include "yesense_interface/msg/detail/three_axis__struct.h"
// Member 'pressure'
#include "yesense_interface/msg/detail/pressure__struct.h"

/// Struct defined in msg/ImuDataTenAxis in the package yesense_interface.
typedef struct yesense_interface__msg__ImuDataTenAxis
{
  yesense_interface__msg__ImuData imu_basic;
  yesense_interface__msg__ThreeAxis mag_norm;
  yesense_interface__msg__ThreeAxis mag_raw;
  yesense_interface__msg__Pressure pressure;
} yesense_interface__msg__ImuDataTenAxis;

// Struct for a sequence of yesense_interface__msg__ImuDataTenAxis.
typedef struct yesense_interface__msg__ImuDataTenAxis__Sequence
{
  yesense_interface__msg__ImuDataTenAxis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__ImuDataTenAxis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__STRUCT_H_

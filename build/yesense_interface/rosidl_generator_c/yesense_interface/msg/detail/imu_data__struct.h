// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/ImuData.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA__STRUCT_H_

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
// Member 'temp'
#include "yesense_interface/msg/detail/sensor_temp__struct.h"
// Member 'sample_timestamp'
#include "yesense_interface/msg/detail/sample_timestamp__struct.h"

/// Struct defined in msg/ImuData in the package yesense_interface.
typedef struct yesense_interface__msg__ImuData
{
  yesense_interface__msg__Tid tid;
  yesense_interface__msg__ThreeAxis acc;
  yesense_interface__msg__ThreeAxis gyro;
  yesense_interface__msg__SensorTemp temp;
  yesense_interface__msg__SampleTimestamp sample_timestamp;
} yesense_interface__msg__ImuData;

// Struct for a sequence of yesense_interface__msg__ImuData.
typedef struct yesense_interface__msg__ImuData__Sequence
{
  yesense_interface__msg__ImuData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__ImuData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA__STRUCT_H_

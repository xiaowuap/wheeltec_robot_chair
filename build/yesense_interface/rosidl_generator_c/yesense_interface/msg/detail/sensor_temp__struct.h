// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/SensorTemp.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__SENSOR_TEMP__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__SENSOR_TEMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorTemp in the package yesense_interface.
typedef struct yesense_interface__msg__SensorTemp
{
  float temp;
} yesense_interface__msg__SensorTemp;

// Struct for a sequence of yesense_interface__msg__SensorTemp.
typedef struct yesense_interface__msg__SensorTemp__Sequence
{
  yesense_interface__msg__SensorTemp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__SensorTemp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__SENSOR_TEMP__STRUCT_H_

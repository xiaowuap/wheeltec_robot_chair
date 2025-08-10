// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/EulerAngle.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__EULER_ANGLE__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__EULER_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EulerAngle in the package yesense_interface.
typedef struct yesense_interface__msg__EulerAngle
{
  float pitch;
  float roll;
  float yaw;
} yesense_interface__msg__EulerAngle;

// Struct for a sequence of yesense_interface__msg__EulerAngle.
typedef struct yesense_interface__msg__EulerAngle__Sequence
{
  yesense_interface__msg__EulerAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__EulerAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__EULER_ANGLE__STRUCT_H_

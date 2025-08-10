// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/Quat.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__QUAT__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__QUAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Quat in the package yesense_interface.
typedef struct yesense_interface__msg__Quat
{
  double q0;
  double q1;
  double q2;
  double q3;
} yesense_interface__msg__Quat;

// Struct for a sequence of yesense_interface__msg__Quat.
typedef struct yesense_interface__msg__Quat__Sequence
{
  yesense_interface__msg__Quat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__Quat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__QUAT__STRUCT_H_

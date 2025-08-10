// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/ThreeAxis.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__THREE_AXIS__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__THREE_AXIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ThreeAxis in the package yesense_interface.
typedef struct yesense_interface__msg__ThreeAxis
{
  float x;
  float y;
  float z;
} yesense_interface__msg__ThreeAxis;

// Struct for a sequence of yesense_interface__msg__ThreeAxis.
typedef struct yesense_interface__msg__ThreeAxis__Sequence
{
  yesense_interface__msg__ThreeAxis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__ThreeAxis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__THREE_AXIS__STRUCT_H_

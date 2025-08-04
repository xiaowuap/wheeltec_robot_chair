// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/Pressure.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__PRESSURE__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__PRESSURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Pressure in the package yesense_interface.
typedef struct yesense_interface__msg__Pressure
{
  float val;
} yesense_interface__msg__Pressure;

// Struct for a sequence of yesense_interface__msg__Pressure.
typedef struct yesense_interface__msg__Pressure__Sequence
{
  yesense_interface__msg__Pressure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__Pressure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__PRESSURE__STRUCT_H_

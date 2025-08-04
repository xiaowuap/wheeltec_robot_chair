// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/EulerOnly.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__EULER_ONLY__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__EULER_ONLY__STRUCT_H_

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
// Member 'euler'
#include "yesense_interface/msg/detail/euler_angle__struct.h"

/// Struct defined in msg/EulerOnly in the package yesense_interface.
typedef struct yesense_interface__msg__EulerOnly
{
  yesense_interface__msg__Tid tid;
  yesense_interface__msg__EulerAngle euler;
} yesense_interface__msg__EulerOnly;

// Struct for a sequence of yesense_interface__msg__EulerOnly.
typedef struct yesense_interface__msg__EulerOnly__Sequence
{
  yesense_interface__msg__EulerOnly * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__EulerOnly__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__EULER_ONLY__STRUCT_H_

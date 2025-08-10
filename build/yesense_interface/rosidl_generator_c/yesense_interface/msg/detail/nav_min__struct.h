// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/NavMin.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pos'
#include "yesense_interface/msg/detail/pos_only__struct.h"
// Member 'euler'
#include "yesense_interface/msg/detail/euler_angle__struct.h"

/// Struct defined in msg/NavMin in the package yesense_interface.
typedef struct yesense_interface__msg__NavMin
{
  yesense_interface__msg__PosOnly pos;
  yesense_interface__msg__EulerAngle euler;
} yesense_interface__msg__NavMin;

// Struct for a sequence of yesense_interface__msg__NavMin.
typedef struct yesense_interface__msg__NavMin__Sequence
{
  yesense_interface__msg__NavMin * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__NavMin__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN__STRUCT_H_

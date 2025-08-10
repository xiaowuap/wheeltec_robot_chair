// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/PosOnly.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__STRUCT_H_

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
// Member 'pos'
#include "yesense_interface/msg/detail/gnss_pos__struct.h"
// Member 'status'
#include "yesense_interface/msg/detail/nav_status__struct.h"

/// Struct defined in msg/PosOnly in the package yesense_interface.
typedef struct yesense_interface__msg__PosOnly
{
  yesense_interface__msg__Tid tid;
  yesense_interface__msg__GnssPos pos;
  yesense_interface__msg__NavStatus status;
} yesense_interface__msg__PosOnly;

// Struct for a sequence of yesense_interface__msg__PosOnly.
typedef struct yesense_interface__msg__PosOnly__Sequence
{
  yesense_interface__msg__PosOnly * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__PosOnly__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__STRUCT_H_

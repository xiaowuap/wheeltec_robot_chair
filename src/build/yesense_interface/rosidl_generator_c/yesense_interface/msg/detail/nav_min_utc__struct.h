// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/NavMinUtc.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nav_basic'
#include "yesense_interface/msg/detail/nav_min__struct.h"
// Member 'utc'
#include "yesense_interface/msg/detail/utc__struct.h"

/// Struct defined in msg/NavMinUtc in the package yesense_interface.
typedef struct yesense_interface__msg__NavMinUtc
{
  yesense_interface__msg__NavMin nav_basic;
  yesense_interface__msg__Utc utc;
} yesense_interface__msg__NavMinUtc;

// Struct for a sequence of yesense_interface__msg__NavMinUtc.
typedef struct yesense_interface__msg__NavMinUtc__Sequence
{
  yesense_interface__msg__NavMinUtc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__NavMinUtc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__STRUCT_H_

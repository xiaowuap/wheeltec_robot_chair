// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyreader_msg:msg/Bodylist.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODYLIST__STRUCT_H_
#define BODYREADER_MSG__MSG__DETAIL__BODYLIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bodies'
#include "bodyreader_msg/msg/detail/body__struct.h"

/// Struct defined in msg/Bodylist in the package bodyreader_msg.
typedef struct bodyreader_msg__msg__Bodylist
{
  int8_t count;
  bodyreader_msg__msg__Body bodies[6];
} bodyreader_msg__msg__Bodylist;

// Struct for a sequence of bodyreader_msg__msg__Bodylist.
typedef struct bodyreader_msg__msg__Bodylist__Sequence
{
  bodyreader_msg__msg__Bodylist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyreader_msg__msg__Bodylist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYREADER_MSG__MSG__DETAIL__BODYLIST__STRUCT_H_

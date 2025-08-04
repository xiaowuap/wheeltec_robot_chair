// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyreader_msg:msg/Body.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODY__STRUCT_H_
#define BODYREADER_MSG__MSG__DETAIL__BODY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'centerofmass'
#include "bodyreader_msg/msg/detail/vector3f__struct.h"
// Member 'joints'
#include "bodyreader_msg/msg/detail/joint__struct.h"

/// Struct defined in msg/Body in the package bodyreader_msg.
typedef struct bodyreader_msg__msg__Body
{
  int16_t bodyid;
  bodyreader_msg__msg__Vector3f centerofmass;
  bodyreader_msg__msg__Joint joints[19];
} bodyreader_msg__msg__Body;

// Struct for a sequence of bodyreader_msg__msg__Body.
typedef struct bodyreader_msg__msg__Body__Sequence
{
  bodyreader_msg__msg__Body * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyreader_msg__msg__Body__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYREADER_MSG__MSG__DETAIL__BODY__STRUCT_H_

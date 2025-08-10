// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyreader_msg:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__JOINT__STRUCT_H_
#define BODYREADER_MSG__MSG__DETAIL__JOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'depthposition'
#include "bodyreader_msg/msg/detail/vector2f__struct.h"
// Member 'worldposition'
#include "bodyreader_msg/msg/detail/vector3f__struct.h"

/// Struct defined in msg/Joint in the package bodyreader_msg.
typedef struct bodyreader_msg__msg__Joint
{
  int8_t type;
  bodyreader_msg__msg__Vector2f depthposition;
  bodyreader_msg__msg__Vector3f worldposition;
} bodyreader_msg__msg__Joint;

// Struct for a sequence of bodyreader_msg__msg__Joint.
typedef struct bodyreader_msg__msg__Joint__Sequence
{
  bodyreader_msg__msg__Joint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyreader_msg__msg__Joint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYREADER_MSG__MSG__DETAIL__JOINT__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/Sentence.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__SENTENCE__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__SENTENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'sentence'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Sentence in the package nmea_msgs.
/**
  * A message representing a single NMEA0183 sentence.
 */
typedef struct nmea_msgs__msg__Sentence
{
  /// header.stamp is the ROS Time when the sentence was read.
  /// header.frame_id is the frame of reference reported by the satellite
  ///        receiver, usually the location of the antenna.  This is a
  ///        Euclidean frame relative to the vehicle, not a reference
  ///        ellipsoid.
  std_msgs__msg__Header header;
  /// This should only contain ASCII characters in order to be a valid NMEA0183 sentence.
  rosidl_runtime_c__String sentence;
} nmea_msgs__msg__Sentence;

// Struct for a sequence of nmea_msgs__msg__Sentence.
typedef struct nmea_msgs__msg__Sentence__Sequence
{
  nmea_msgs__msg__Sentence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__Sentence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__SENTENCE__STRUCT_H_

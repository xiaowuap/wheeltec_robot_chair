// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wheeltec_mic_msg:srv/SetMajorMic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__STRUCT_H_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetMajorMic in the package wheeltec_mic_msg.
typedef struct wheeltec_mic_msg__srv__SetMajorMic_Request
{
  int8_t mic_id;
} wheeltec_mic_msg__srv__SetMajorMic_Request;

// Struct for a sequence of wheeltec_mic_msg__srv__SetMajorMic_Request.
typedef struct wheeltec_mic_msg__srv__SetMajorMic_Request__Sequence
{
  wheeltec_mic_msg__srv__SetMajorMic_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wheeltec_mic_msg__srv__SetMajorMic_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// Member 'fail_reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetMajorMic in the package wheeltec_mic_msg.
typedef struct wheeltec_mic_msg__srv__SetMajorMic_Response
{
  rosidl_runtime_c__String result;
  rosidl_runtime_c__String fail_reason;
} wheeltec_mic_msg__srv__SetMajorMic_Response;

// Struct for a sequence of wheeltec_mic_msg__srv__SetMajorMic_Response.
typedef struct wheeltec_mic_msg__srv__SetMajorMic_Response__Sequence
{
  wheeltec_mic_msg__srv__SetMajorMic_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wheeltec_mic_msg__srv__SetMajorMic_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__STRUCT_H_

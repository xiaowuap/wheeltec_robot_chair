// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wheeltec_mic_msg:srv/SwitchMic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__STRUCT_H_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mic_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SwitchMic in the package wheeltec_mic_msg.
typedef struct wheeltec_mic_msg__srv__SwitchMic_Request
{
  rosidl_runtime_c__String mic_name;
} wheeltec_mic_msg__srv__SwitchMic_Request;

// Struct for a sequence of wheeltec_mic_msg__srv__SwitchMic_Request.
typedef struct wheeltec_mic_msg__srv__SwitchMic_Request__Sequence
{
  wheeltec_mic_msg__srv__SwitchMic_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wheeltec_mic_msg__srv__SwitchMic_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SwitchMic in the package wheeltec_mic_msg.
typedef struct wheeltec_mic_msg__srv__SwitchMic_Response
{
  bool success;
  rosidl_runtime_c__String result;
} wheeltec_mic_msg__srv__SwitchMic_Response;

// Struct for a sequence of wheeltec_mic_msg__srv__SwitchMic_Response.
typedef struct wheeltec_mic_msg__srv__SwitchMic_Response__Sequence
{
  wheeltec_mic_msg__srv__SwitchMic_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wheeltec_mic_msg__srv__SwitchMic_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__STRUCT_H_

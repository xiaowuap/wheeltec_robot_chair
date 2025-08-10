// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wheeltec_mic_msg:srv/GetOfflineResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wheeltec_mic_msg/srv/detail/get_offline_result__rosidl_typesupport_introspection_c.h"
#include "wheeltec_mic_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wheeltec_mic_msg/srv/detail/get_offline_result__functions.h"
#include "wheeltec_mic_msg/srv/detail/get_offline_result__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wheeltec_mic_msg__srv__GetOfflineResult_Request__init(message_memory);
}

void wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_fini_function(void * message_memory)
{
  wheeltec_mic_msg__srv__GetOfflineResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_message_member_array[3] = {
  {
    "offline_recognise_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__srv__GetOfflineResult_Request, offline_recognise_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence_threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__srv__GetOfflineResult_Request, confidence_threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_per_order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__srv__GetOfflineResult_Request, time_per_order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_message_members = {
  "wheeltec_mic_msg__srv",  // message namespace
  "GetOfflineResult_Request",  // message name
  3,  // number of fields
  sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Request),
  wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_message_member_array,  // message members
  wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_message_type_support_handle = {
  0,
  &wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wheeltec_mic_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wheeltec_mic_msg, srv, GetOfflineResult_Request)() {
  if (!wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_message_type_support_handle.typesupport_identifier) {
    wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wheeltec_mic_msg__srv__GetOfflineResult_Request__rosidl_typesupport_introspection_c__GetOfflineResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "wheeltec_mic_msg/srv/detail/get_offline_result__rosidl_typesupport_introspection_c.h"
// already included above
// #include "wheeltec_mic_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "wheeltec_mic_msg/srv/detail/get_offline_result__functions.h"
// already included above
// #include "wheeltec_mic_msg/srv/detail/get_offline_result__struct.h"


// Include directives for member types
// Member `result`
// Member `fail_reason`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wheeltec_mic_msg__srv__GetOfflineResult_Response__init(message_memory);
}

void wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_fini_function(void * message_memory)
{
  wheeltec_mic_msg__srv__GetOfflineResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_message_member_array[3] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__srv__GetOfflineResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fail_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__srv__GetOfflineResult_Response, fail_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__srv__GetOfflineResult_Response, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_message_members = {
  "wheeltec_mic_msg__srv",  // message namespace
  "GetOfflineResult_Response",  // message name
  3,  // number of fields
  sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Response),
  wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_message_member_array,  // message members
  wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_message_type_support_handle = {
  0,
  &wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wheeltec_mic_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wheeltec_mic_msg, srv, GetOfflineResult_Response)() {
  if (!wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_message_type_support_handle.typesupport_identifier) {
    wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wheeltec_mic_msg__srv__GetOfflineResult_Response__rosidl_typesupport_introspection_c__GetOfflineResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "wheeltec_mic_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "wheeltec_mic_msg/srv/detail/get_offline_result__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers wheeltec_mic_msg__srv__detail__get_offline_result__rosidl_typesupport_introspection_c__GetOfflineResult_service_members = {
  "wheeltec_mic_msg__srv",  // service namespace
  "GetOfflineResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // wheeltec_mic_msg__srv__detail__get_offline_result__rosidl_typesupport_introspection_c__GetOfflineResult_Request_message_type_support_handle,
  NULL  // response message
  // wheeltec_mic_msg__srv__detail__get_offline_result__rosidl_typesupport_introspection_c__GetOfflineResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t wheeltec_mic_msg__srv__detail__get_offline_result__rosidl_typesupport_introspection_c__GetOfflineResult_service_type_support_handle = {
  0,
  &wheeltec_mic_msg__srv__detail__get_offline_result__rosidl_typesupport_introspection_c__GetOfflineResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wheeltec_mic_msg, srv, GetOfflineResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wheeltec_mic_msg, srv, GetOfflineResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wheeltec_mic_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wheeltec_mic_msg, srv, GetOfflineResult)() {
  if (!wheeltec_mic_msg__srv__detail__get_offline_result__rosidl_typesupport_introspection_c__GetOfflineResult_service_type_support_handle.typesupport_identifier) {
    wheeltec_mic_msg__srv__detail__get_offline_result__rosidl_typesupport_introspection_c__GetOfflineResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)wheeltec_mic_msg__srv__detail__get_offline_result__rosidl_typesupport_introspection_c__GetOfflineResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wheeltec_mic_msg, srv, GetOfflineResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wheeltec_mic_msg, srv, GetOfflineResult_Response)()->data;
  }

  return &wheeltec_mic_msg__srv__detail__get_offline_result__rosidl_typesupport_introspection_c__GetOfflineResult_service_type_support_handle;
}

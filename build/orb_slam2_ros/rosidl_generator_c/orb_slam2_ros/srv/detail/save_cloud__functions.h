// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from orb_slam2_ros:srv/SaveCloud.idl
// generated code does not contain a copyright notice

#ifndef ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__FUNCTIONS_H_
#define ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "orb_slam2_ros/msg/rosidl_generator_c__visibility_control.h"

#include "orb_slam2_ros/srv/detail/save_cloud__struct.h"

/// Initialize srv/SaveCloud message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * orb_slam2_ros__srv__SaveCloud_Request
 * )) before or use
 * orb_slam2_ros__srv__SaveCloud_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Request__init(orb_slam2_ros__srv__SaveCloud_Request * msg);

/// Finalize srv/SaveCloud message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
void
orb_slam2_ros__srv__SaveCloud_Request__fini(orb_slam2_ros__srv__SaveCloud_Request * msg);

/// Create srv/SaveCloud message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * orb_slam2_ros__srv__SaveCloud_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
orb_slam2_ros__srv__SaveCloud_Request *
orb_slam2_ros__srv__SaveCloud_Request__create();

/// Destroy srv/SaveCloud message.
/**
 * It calls
 * orb_slam2_ros__srv__SaveCloud_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
void
orb_slam2_ros__srv__SaveCloud_Request__destroy(orb_slam2_ros__srv__SaveCloud_Request * msg);

/// Check for srv/SaveCloud message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Request__are_equal(const orb_slam2_ros__srv__SaveCloud_Request * lhs, const orb_slam2_ros__srv__SaveCloud_Request * rhs);

/// Copy a srv/SaveCloud message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Request__copy(
  const orb_slam2_ros__srv__SaveCloud_Request * input,
  orb_slam2_ros__srv__SaveCloud_Request * output);

/// Initialize array of srv/SaveCloud messages.
/**
 * It allocates the memory for the number of elements and calls
 * orb_slam2_ros__srv__SaveCloud_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Request__Sequence__init(orb_slam2_ros__srv__SaveCloud_Request__Sequence * array, size_t size);

/// Finalize array of srv/SaveCloud messages.
/**
 * It calls
 * orb_slam2_ros__srv__SaveCloud_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
void
orb_slam2_ros__srv__SaveCloud_Request__Sequence__fini(orb_slam2_ros__srv__SaveCloud_Request__Sequence * array);

/// Create array of srv/SaveCloud messages.
/**
 * It allocates the memory for the array and calls
 * orb_slam2_ros__srv__SaveCloud_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
orb_slam2_ros__srv__SaveCloud_Request__Sequence *
orb_slam2_ros__srv__SaveCloud_Request__Sequence__create(size_t size);

/// Destroy array of srv/SaveCloud messages.
/**
 * It calls
 * orb_slam2_ros__srv__SaveCloud_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
void
orb_slam2_ros__srv__SaveCloud_Request__Sequence__destroy(orb_slam2_ros__srv__SaveCloud_Request__Sequence * array);

/// Check for srv/SaveCloud message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Request__Sequence__are_equal(const orb_slam2_ros__srv__SaveCloud_Request__Sequence * lhs, const orb_slam2_ros__srv__SaveCloud_Request__Sequence * rhs);

/// Copy an array of srv/SaveCloud messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Request__Sequence__copy(
  const orb_slam2_ros__srv__SaveCloud_Request__Sequence * input,
  orb_slam2_ros__srv__SaveCloud_Request__Sequence * output);

/// Initialize srv/SaveCloud message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * orb_slam2_ros__srv__SaveCloud_Response
 * )) before or use
 * orb_slam2_ros__srv__SaveCloud_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Response__init(orb_slam2_ros__srv__SaveCloud_Response * msg);

/// Finalize srv/SaveCloud message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
void
orb_slam2_ros__srv__SaveCloud_Response__fini(orb_slam2_ros__srv__SaveCloud_Response * msg);

/// Create srv/SaveCloud message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * orb_slam2_ros__srv__SaveCloud_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
orb_slam2_ros__srv__SaveCloud_Response *
orb_slam2_ros__srv__SaveCloud_Response__create();

/// Destroy srv/SaveCloud message.
/**
 * It calls
 * orb_slam2_ros__srv__SaveCloud_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
void
orb_slam2_ros__srv__SaveCloud_Response__destroy(orb_slam2_ros__srv__SaveCloud_Response * msg);

/// Check for srv/SaveCloud message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Response__are_equal(const orb_slam2_ros__srv__SaveCloud_Response * lhs, const orb_slam2_ros__srv__SaveCloud_Response * rhs);

/// Copy a srv/SaveCloud message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Response__copy(
  const orb_slam2_ros__srv__SaveCloud_Response * input,
  orb_slam2_ros__srv__SaveCloud_Response * output);

/// Initialize array of srv/SaveCloud messages.
/**
 * It allocates the memory for the number of elements and calls
 * orb_slam2_ros__srv__SaveCloud_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Response__Sequence__init(orb_slam2_ros__srv__SaveCloud_Response__Sequence * array, size_t size);

/// Finalize array of srv/SaveCloud messages.
/**
 * It calls
 * orb_slam2_ros__srv__SaveCloud_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
void
orb_slam2_ros__srv__SaveCloud_Response__Sequence__fini(orb_slam2_ros__srv__SaveCloud_Response__Sequence * array);

/// Create array of srv/SaveCloud messages.
/**
 * It allocates the memory for the array and calls
 * orb_slam2_ros__srv__SaveCloud_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
orb_slam2_ros__srv__SaveCloud_Response__Sequence *
orb_slam2_ros__srv__SaveCloud_Response__Sequence__create(size_t size);

/// Destroy array of srv/SaveCloud messages.
/**
 * It calls
 * orb_slam2_ros__srv__SaveCloud_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
void
orb_slam2_ros__srv__SaveCloud_Response__Sequence__destroy(orb_slam2_ros__srv__SaveCloud_Response__Sequence * array);

/// Check for srv/SaveCloud message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Response__Sequence__are_equal(const orb_slam2_ros__srv__SaveCloud_Response__Sequence * lhs, const orb_slam2_ros__srv__SaveCloud_Response__Sequence * rhs);

/// Copy an array of srv/SaveCloud messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orb_slam2_ros
bool
orb_slam2_ros__srv__SaveCloud_Response__Sequence__copy(
  const orb_slam2_ros__srv__SaveCloud_Response__Sequence * input,
  orb_slam2_ros__srv__SaveCloud_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__FUNCTIONS_H_

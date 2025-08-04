// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from yesense_interface:msg/AttitudeMinAhrs.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__FUNCTIONS_H_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "yesense_interface/msg/rosidl_generator_c__visibility_control.h"

#include "yesense_interface/msg/detail/attitude_min_ahrs__struct.h"

/// Initialize msg/AttitudeMinAhrs message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * yesense_interface__msg__AttitudeMinAhrs
 * )) before or use
 * yesense_interface__msg__AttitudeMinAhrs__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__AttitudeMinAhrs__init(yesense_interface__msg__AttitudeMinAhrs * msg);

/// Finalize msg/AttitudeMinAhrs message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__AttitudeMinAhrs__fini(yesense_interface__msg__AttitudeMinAhrs * msg);

/// Create msg/AttitudeMinAhrs message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * yesense_interface__msg__AttitudeMinAhrs__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
yesense_interface__msg__AttitudeMinAhrs *
yesense_interface__msg__AttitudeMinAhrs__create();

/// Destroy msg/AttitudeMinAhrs message.
/**
 * It calls
 * yesense_interface__msg__AttitudeMinAhrs__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__AttitudeMinAhrs__destroy(yesense_interface__msg__AttitudeMinAhrs * msg);

/// Check for msg/AttitudeMinAhrs message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__AttitudeMinAhrs__are_equal(const yesense_interface__msg__AttitudeMinAhrs * lhs, const yesense_interface__msg__AttitudeMinAhrs * rhs);

/// Copy a msg/AttitudeMinAhrs message.
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
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__AttitudeMinAhrs__copy(
  const yesense_interface__msg__AttitudeMinAhrs * input,
  yesense_interface__msg__AttitudeMinAhrs * output);

/// Initialize array of msg/AttitudeMinAhrs messages.
/**
 * It allocates the memory for the number of elements and calls
 * yesense_interface__msg__AttitudeMinAhrs__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__AttitudeMinAhrs__Sequence__init(yesense_interface__msg__AttitudeMinAhrs__Sequence * array, size_t size);

/// Finalize array of msg/AttitudeMinAhrs messages.
/**
 * It calls
 * yesense_interface__msg__AttitudeMinAhrs__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__AttitudeMinAhrs__Sequence__fini(yesense_interface__msg__AttitudeMinAhrs__Sequence * array);

/// Create array of msg/AttitudeMinAhrs messages.
/**
 * It allocates the memory for the array and calls
 * yesense_interface__msg__AttitudeMinAhrs__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
yesense_interface__msg__AttitudeMinAhrs__Sequence *
yesense_interface__msg__AttitudeMinAhrs__Sequence__create(size_t size);

/// Destroy array of msg/AttitudeMinAhrs messages.
/**
 * It calls
 * yesense_interface__msg__AttitudeMinAhrs__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__AttitudeMinAhrs__Sequence__destroy(yesense_interface__msg__AttitudeMinAhrs__Sequence * array);

/// Check for msg/AttitudeMinAhrs message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__AttitudeMinAhrs__Sequence__are_equal(const yesense_interface__msg__AttitudeMinAhrs__Sequence * lhs, const yesense_interface__msg__AttitudeMinAhrs__Sequence * rhs);

/// Copy an array of msg/AttitudeMinAhrs messages.
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
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__AttitudeMinAhrs__Sequence__copy(
  const yesense_interface__msg__AttitudeMinAhrs__Sequence * input,
  yesense_interface__msg__AttitudeMinAhrs__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__FUNCTIONS_H_

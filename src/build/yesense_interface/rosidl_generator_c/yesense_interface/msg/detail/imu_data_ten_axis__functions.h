// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from yesense_interface:msg/ImuDataTenAxis.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__FUNCTIONS_H_
#define YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "yesense_interface/msg/rosidl_generator_c__visibility_control.h"

#include "yesense_interface/msg/detail/imu_data_ten_axis__struct.h"

/// Initialize msg/ImuDataTenAxis message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * yesense_interface__msg__ImuDataTenAxis
 * )) before or use
 * yesense_interface__msg__ImuDataTenAxis__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__ImuDataTenAxis__init(yesense_interface__msg__ImuDataTenAxis * msg);

/// Finalize msg/ImuDataTenAxis message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__ImuDataTenAxis__fini(yesense_interface__msg__ImuDataTenAxis * msg);

/// Create msg/ImuDataTenAxis message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * yesense_interface__msg__ImuDataTenAxis__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
yesense_interface__msg__ImuDataTenAxis *
yesense_interface__msg__ImuDataTenAxis__create();

/// Destroy msg/ImuDataTenAxis message.
/**
 * It calls
 * yesense_interface__msg__ImuDataTenAxis__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__ImuDataTenAxis__destroy(yesense_interface__msg__ImuDataTenAxis * msg);

/// Check for msg/ImuDataTenAxis message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__ImuDataTenAxis__are_equal(const yesense_interface__msg__ImuDataTenAxis * lhs, const yesense_interface__msg__ImuDataTenAxis * rhs);

/// Copy a msg/ImuDataTenAxis message.
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
yesense_interface__msg__ImuDataTenAxis__copy(
  const yesense_interface__msg__ImuDataTenAxis * input,
  yesense_interface__msg__ImuDataTenAxis * output);

/// Initialize array of msg/ImuDataTenAxis messages.
/**
 * It allocates the memory for the number of elements and calls
 * yesense_interface__msg__ImuDataTenAxis__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__ImuDataTenAxis__Sequence__init(yesense_interface__msg__ImuDataTenAxis__Sequence * array, size_t size);

/// Finalize array of msg/ImuDataTenAxis messages.
/**
 * It calls
 * yesense_interface__msg__ImuDataTenAxis__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__ImuDataTenAxis__Sequence__fini(yesense_interface__msg__ImuDataTenAxis__Sequence * array);

/// Create array of msg/ImuDataTenAxis messages.
/**
 * It allocates the memory for the array and calls
 * yesense_interface__msg__ImuDataTenAxis__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
yesense_interface__msg__ImuDataTenAxis__Sequence *
yesense_interface__msg__ImuDataTenAxis__Sequence__create(size_t size);

/// Destroy array of msg/ImuDataTenAxis messages.
/**
 * It calls
 * yesense_interface__msg__ImuDataTenAxis__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__ImuDataTenAxis__Sequence__destroy(yesense_interface__msg__ImuDataTenAxis__Sequence * array);

/// Check for msg/ImuDataTenAxis message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__ImuDataTenAxis__Sequence__are_equal(const yesense_interface__msg__ImuDataTenAxis__Sequence * lhs, const yesense_interface__msg__ImuDataTenAxis__Sequence * rhs);

/// Copy an array of msg/ImuDataTenAxis messages.
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
yesense_interface__msg__ImuDataTenAxis__Sequence__copy(
  const yesense_interface__msg__ImuDataTenAxis__Sequence * input,
  yesense_interface__msg__ImuDataTenAxis__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__FUNCTIONS_H_

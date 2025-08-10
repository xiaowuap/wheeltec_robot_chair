// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/ImuData.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/imu_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tid`
#include "yesense_interface/msg/detail/tid__functions.h"
// Member `acc`
// Member `gyro`
#include "yesense_interface/msg/detail/three_axis__functions.h"
// Member `temp`
#include "yesense_interface/msg/detail/sensor_temp__functions.h"
// Member `sample_timestamp`
#include "yesense_interface/msg/detail/sample_timestamp__functions.h"

bool
yesense_interface__msg__ImuData__init(yesense_interface__msg__ImuData * msg)
{
  if (!msg) {
    return false;
  }
  // tid
  if (!yesense_interface__msg__Tid__init(&msg->tid)) {
    yesense_interface__msg__ImuData__fini(msg);
    return false;
  }
  // acc
  if (!yesense_interface__msg__ThreeAxis__init(&msg->acc)) {
    yesense_interface__msg__ImuData__fini(msg);
    return false;
  }
  // gyro
  if (!yesense_interface__msg__ThreeAxis__init(&msg->gyro)) {
    yesense_interface__msg__ImuData__fini(msg);
    return false;
  }
  // temp
  if (!yesense_interface__msg__SensorTemp__init(&msg->temp)) {
    yesense_interface__msg__ImuData__fini(msg);
    return false;
  }
  // sample_timestamp
  if (!yesense_interface__msg__SampleTimestamp__init(&msg->sample_timestamp)) {
    yesense_interface__msg__ImuData__fini(msg);
    return false;
  }
  return true;
}

void
yesense_interface__msg__ImuData__fini(yesense_interface__msg__ImuData * msg)
{
  if (!msg) {
    return;
  }
  // tid
  yesense_interface__msg__Tid__fini(&msg->tid);
  // acc
  yesense_interface__msg__ThreeAxis__fini(&msg->acc);
  // gyro
  yesense_interface__msg__ThreeAxis__fini(&msg->gyro);
  // temp
  yesense_interface__msg__SensorTemp__fini(&msg->temp);
  // sample_timestamp
  yesense_interface__msg__SampleTimestamp__fini(&msg->sample_timestamp);
}

bool
yesense_interface__msg__ImuData__are_equal(const yesense_interface__msg__ImuData * lhs, const yesense_interface__msg__ImuData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tid
  if (!yesense_interface__msg__Tid__are_equal(
      &(lhs->tid), &(rhs->tid)))
  {
    return false;
  }
  // acc
  if (!yesense_interface__msg__ThreeAxis__are_equal(
      &(lhs->acc), &(rhs->acc)))
  {
    return false;
  }
  // gyro
  if (!yesense_interface__msg__ThreeAxis__are_equal(
      &(lhs->gyro), &(rhs->gyro)))
  {
    return false;
  }
  // temp
  if (!yesense_interface__msg__SensorTemp__are_equal(
      &(lhs->temp), &(rhs->temp)))
  {
    return false;
  }
  // sample_timestamp
  if (!yesense_interface__msg__SampleTimestamp__are_equal(
      &(lhs->sample_timestamp), &(rhs->sample_timestamp)))
  {
    return false;
  }
  return true;
}

bool
yesense_interface__msg__ImuData__copy(
  const yesense_interface__msg__ImuData * input,
  yesense_interface__msg__ImuData * output)
{
  if (!input || !output) {
    return false;
  }
  // tid
  if (!yesense_interface__msg__Tid__copy(
      &(input->tid), &(output->tid)))
  {
    return false;
  }
  // acc
  if (!yesense_interface__msg__ThreeAxis__copy(
      &(input->acc), &(output->acc)))
  {
    return false;
  }
  // gyro
  if (!yesense_interface__msg__ThreeAxis__copy(
      &(input->gyro), &(output->gyro)))
  {
    return false;
  }
  // temp
  if (!yesense_interface__msg__SensorTemp__copy(
      &(input->temp), &(output->temp)))
  {
    return false;
  }
  // sample_timestamp
  if (!yesense_interface__msg__SampleTimestamp__copy(
      &(input->sample_timestamp), &(output->sample_timestamp)))
  {
    return false;
  }
  return true;
}

yesense_interface__msg__ImuData *
yesense_interface__msg__ImuData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__ImuData * msg = (yesense_interface__msg__ImuData *)allocator.allocate(sizeof(yesense_interface__msg__ImuData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__ImuData));
  bool success = yesense_interface__msg__ImuData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__ImuData__destroy(yesense_interface__msg__ImuData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__ImuData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__ImuData__Sequence__init(yesense_interface__msg__ImuData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__ImuData * data = NULL;

  if (size) {
    data = (yesense_interface__msg__ImuData *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__ImuData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__ImuData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__ImuData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yesense_interface__msg__ImuData__Sequence__fini(yesense_interface__msg__ImuData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yesense_interface__msg__ImuData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yesense_interface__msg__ImuData__Sequence *
yesense_interface__msg__ImuData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__ImuData__Sequence * array = (yesense_interface__msg__ImuData__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__ImuData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__ImuData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__ImuData__Sequence__destroy(yesense_interface__msg__ImuData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__ImuData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__ImuData__Sequence__are_equal(const yesense_interface__msg__ImuData__Sequence * lhs, const yesense_interface__msg__ImuData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__ImuData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__ImuData__Sequence__copy(
  const yesense_interface__msg__ImuData__Sequence * input,
  yesense_interface__msg__ImuData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__ImuData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__ImuData * data =
      (yesense_interface__msg__ImuData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__ImuData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__ImuData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__ImuData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

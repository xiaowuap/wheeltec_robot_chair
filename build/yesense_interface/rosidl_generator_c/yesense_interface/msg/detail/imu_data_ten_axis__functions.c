// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/ImuDataTenAxis.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/imu_data_ten_axis__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `imu_basic`
#include "yesense_interface/msg/detail/imu_data__functions.h"
// Member `mag_norm`
// Member `mag_raw`
#include "yesense_interface/msg/detail/three_axis__functions.h"
// Member `pressure`
#include "yesense_interface/msg/detail/pressure__functions.h"

bool
yesense_interface__msg__ImuDataTenAxis__init(yesense_interface__msg__ImuDataTenAxis * msg)
{
  if (!msg) {
    return false;
  }
  // imu_basic
  if (!yesense_interface__msg__ImuData__init(&msg->imu_basic)) {
    yesense_interface__msg__ImuDataTenAxis__fini(msg);
    return false;
  }
  // mag_norm
  if (!yesense_interface__msg__ThreeAxis__init(&msg->mag_norm)) {
    yesense_interface__msg__ImuDataTenAxis__fini(msg);
    return false;
  }
  // mag_raw
  if (!yesense_interface__msg__ThreeAxis__init(&msg->mag_raw)) {
    yesense_interface__msg__ImuDataTenAxis__fini(msg);
    return false;
  }
  // pressure
  if (!yesense_interface__msg__Pressure__init(&msg->pressure)) {
    yesense_interface__msg__ImuDataTenAxis__fini(msg);
    return false;
  }
  return true;
}

void
yesense_interface__msg__ImuDataTenAxis__fini(yesense_interface__msg__ImuDataTenAxis * msg)
{
  if (!msg) {
    return;
  }
  // imu_basic
  yesense_interface__msg__ImuData__fini(&msg->imu_basic);
  // mag_norm
  yesense_interface__msg__ThreeAxis__fini(&msg->mag_norm);
  // mag_raw
  yesense_interface__msg__ThreeAxis__fini(&msg->mag_raw);
  // pressure
  yesense_interface__msg__Pressure__fini(&msg->pressure);
}

bool
yesense_interface__msg__ImuDataTenAxis__are_equal(const yesense_interface__msg__ImuDataTenAxis * lhs, const yesense_interface__msg__ImuDataTenAxis * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // imu_basic
  if (!yesense_interface__msg__ImuData__are_equal(
      &(lhs->imu_basic), &(rhs->imu_basic)))
  {
    return false;
  }
  // mag_norm
  if (!yesense_interface__msg__ThreeAxis__are_equal(
      &(lhs->mag_norm), &(rhs->mag_norm)))
  {
    return false;
  }
  // mag_raw
  if (!yesense_interface__msg__ThreeAxis__are_equal(
      &(lhs->mag_raw), &(rhs->mag_raw)))
  {
    return false;
  }
  // pressure
  if (!yesense_interface__msg__Pressure__are_equal(
      &(lhs->pressure), &(rhs->pressure)))
  {
    return false;
  }
  return true;
}

bool
yesense_interface__msg__ImuDataTenAxis__copy(
  const yesense_interface__msg__ImuDataTenAxis * input,
  yesense_interface__msg__ImuDataTenAxis * output)
{
  if (!input || !output) {
    return false;
  }
  // imu_basic
  if (!yesense_interface__msg__ImuData__copy(
      &(input->imu_basic), &(output->imu_basic)))
  {
    return false;
  }
  // mag_norm
  if (!yesense_interface__msg__ThreeAxis__copy(
      &(input->mag_norm), &(output->mag_norm)))
  {
    return false;
  }
  // mag_raw
  if (!yesense_interface__msg__ThreeAxis__copy(
      &(input->mag_raw), &(output->mag_raw)))
  {
    return false;
  }
  // pressure
  if (!yesense_interface__msg__Pressure__copy(
      &(input->pressure), &(output->pressure)))
  {
    return false;
  }
  return true;
}

yesense_interface__msg__ImuDataTenAxis *
yesense_interface__msg__ImuDataTenAxis__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__ImuDataTenAxis * msg = (yesense_interface__msg__ImuDataTenAxis *)allocator.allocate(sizeof(yesense_interface__msg__ImuDataTenAxis), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__ImuDataTenAxis));
  bool success = yesense_interface__msg__ImuDataTenAxis__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__ImuDataTenAxis__destroy(yesense_interface__msg__ImuDataTenAxis * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__ImuDataTenAxis__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__ImuDataTenAxis__Sequence__init(yesense_interface__msg__ImuDataTenAxis__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__ImuDataTenAxis * data = NULL;

  if (size) {
    data = (yesense_interface__msg__ImuDataTenAxis *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__ImuDataTenAxis), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__ImuDataTenAxis__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__ImuDataTenAxis__fini(&data[i - 1]);
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
yesense_interface__msg__ImuDataTenAxis__Sequence__fini(yesense_interface__msg__ImuDataTenAxis__Sequence * array)
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
      yesense_interface__msg__ImuDataTenAxis__fini(&array->data[i]);
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

yesense_interface__msg__ImuDataTenAxis__Sequence *
yesense_interface__msg__ImuDataTenAxis__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__ImuDataTenAxis__Sequence * array = (yesense_interface__msg__ImuDataTenAxis__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__ImuDataTenAxis__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__ImuDataTenAxis__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__ImuDataTenAxis__Sequence__destroy(yesense_interface__msg__ImuDataTenAxis__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__ImuDataTenAxis__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__ImuDataTenAxis__Sequence__are_equal(const yesense_interface__msg__ImuDataTenAxis__Sequence * lhs, const yesense_interface__msg__ImuDataTenAxis__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__ImuDataTenAxis__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__ImuDataTenAxis__Sequence__copy(
  const yesense_interface__msg__ImuDataTenAxis__Sequence * input,
  yesense_interface__msg__ImuDataTenAxis__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__ImuDataTenAxis);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__ImuDataTenAxis * data =
      (yesense_interface__msg__ImuDataTenAxis *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__ImuDataTenAxis__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__ImuDataTenAxis__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__ImuDataTenAxis__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

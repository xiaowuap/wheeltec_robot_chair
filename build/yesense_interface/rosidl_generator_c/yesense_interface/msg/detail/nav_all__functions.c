// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/NavAll.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/nav_all__functions.h"

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
// Member `euler`
#include "yesense_interface/msg/detail/euler_angle__functions.h"
// Member `quat`
#include "yesense_interface/msg/detail/quat__functions.h"
// Member `temp`
#include "yesense_interface/msg/detail/sensor_temp__functions.h"
// Member `pos`
#include "yesense_interface/msg/detail/gnss_pos__functions.h"
// Member `status`
#include "yesense_interface/msg/detail/nav_status__functions.h"
// Member `vel`
#include "yesense_interface/msg/detail/vel__functions.h"
// Member `utc`
#include "yesense_interface/msg/detail/utc__functions.h"
// Member `pressure`
#include "yesense_interface/msg/detail/pressure__functions.h"

bool
yesense_interface__msg__NavAll__init(yesense_interface__msg__NavAll * msg)
{
  if (!msg) {
    return false;
  }
  // tid
  if (!yesense_interface__msg__Tid__init(&msg->tid)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  // acc
  if (!yesense_interface__msg__ThreeAxis__init(&msg->acc)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  // gyro
  if (!yesense_interface__msg__ThreeAxis__init(&msg->gyro)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  // euler
  if (!yesense_interface__msg__EulerAngle__init(&msg->euler)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  // quat
  if (!yesense_interface__msg__Quat__init(&msg->quat)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  // temp
  if (!yesense_interface__msg__SensorTemp__init(&msg->temp)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  // pos
  if (!yesense_interface__msg__GnssPos__init(&msg->pos)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  // status
  if (!yesense_interface__msg__NavStatus__init(&msg->status)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  // vel
  if (!yesense_interface__msg__Vel__init(&msg->vel)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  // utc
  if (!yesense_interface__msg__Utc__init(&msg->utc)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  // pressure
  if (!yesense_interface__msg__Pressure__init(&msg->pressure)) {
    yesense_interface__msg__NavAll__fini(msg);
    return false;
  }
  return true;
}

void
yesense_interface__msg__NavAll__fini(yesense_interface__msg__NavAll * msg)
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
  // euler
  yesense_interface__msg__EulerAngle__fini(&msg->euler);
  // quat
  yesense_interface__msg__Quat__fini(&msg->quat);
  // temp
  yesense_interface__msg__SensorTemp__fini(&msg->temp);
  // pos
  yesense_interface__msg__GnssPos__fini(&msg->pos);
  // status
  yesense_interface__msg__NavStatus__fini(&msg->status);
  // vel
  yesense_interface__msg__Vel__fini(&msg->vel);
  // utc
  yesense_interface__msg__Utc__fini(&msg->utc);
  // pressure
  yesense_interface__msg__Pressure__fini(&msg->pressure);
}

bool
yesense_interface__msg__NavAll__are_equal(const yesense_interface__msg__NavAll * lhs, const yesense_interface__msg__NavAll * rhs)
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
  // euler
  if (!yesense_interface__msg__EulerAngle__are_equal(
      &(lhs->euler), &(rhs->euler)))
  {
    return false;
  }
  // quat
  if (!yesense_interface__msg__Quat__are_equal(
      &(lhs->quat), &(rhs->quat)))
  {
    return false;
  }
  // temp
  if (!yesense_interface__msg__SensorTemp__are_equal(
      &(lhs->temp), &(rhs->temp)))
  {
    return false;
  }
  // pos
  if (!yesense_interface__msg__GnssPos__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // status
  if (!yesense_interface__msg__NavStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // vel
  if (!yesense_interface__msg__Vel__are_equal(
      &(lhs->vel), &(rhs->vel)))
  {
    return false;
  }
  // utc
  if (!yesense_interface__msg__Utc__are_equal(
      &(lhs->utc), &(rhs->utc)))
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
yesense_interface__msg__NavAll__copy(
  const yesense_interface__msg__NavAll * input,
  yesense_interface__msg__NavAll * output)
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
  // euler
  if (!yesense_interface__msg__EulerAngle__copy(
      &(input->euler), &(output->euler)))
  {
    return false;
  }
  // quat
  if (!yesense_interface__msg__Quat__copy(
      &(input->quat), &(output->quat)))
  {
    return false;
  }
  // temp
  if (!yesense_interface__msg__SensorTemp__copy(
      &(input->temp), &(output->temp)))
  {
    return false;
  }
  // pos
  if (!yesense_interface__msg__GnssPos__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // status
  if (!yesense_interface__msg__NavStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // vel
  if (!yesense_interface__msg__Vel__copy(
      &(input->vel), &(output->vel)))
  {
    return false;
  }
  // utc
  if (!yesense_interface__msg__Utc__copy(
      &(input->utc), &(output->utc)))
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

yesense_interface__msg__NavAll *
yesense_interface__msg__NavAll__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__NavAll * msg = (yesense_interface__msg__NavAll *)allocator.allocate(sizeof(yesense_interface__msg__NavAll), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__NavAll));
  bool success = yesense_interface__msg__NavAll__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__NavAll__destroy(yesense_interface__msg__NavAll * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__NavAll__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__NavAll__Sequence__init(yesense_interface__msg__NavAll__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__NavAll * data = NULL;

  if (size) {
    data = (yesense_interface__msg__NavAll *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__NavAll), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__NavAll__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__NavAll__fini(&data[i - 1]);
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
yesense_interface__msg__NavAll__Sequence__fini(yesense_interface__msg__NavAll__Sequence * array)
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
      yesense_interface__msg__NavAll__fini(&array->data[i]);
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

yesense_interface__msg__NavAll__Sequence *
yesense_interface__msg__NavAll__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__NavAll__Sequence * array = (yesense_interface__msg__NavAll__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__NavAll__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__NavAll__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__NavAll__Sequence__destroy(yesense_interface__msg__NavAll__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__NavAll__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__NavAll__Sequence__are_equal(const yesense_interface__msg__NavAll__Sequence * lhs, const yesense_interface__msg__NavAll__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__NavAll__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__NavAll__Sequence__copy(
  const yesense_interface__msg__NavAll__Sequence * input,
  yesense_interface__msg__NavAll__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__NavAll);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__NavAll * data =
      (yesense_interface__msg__NavAll *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__NavAll__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__NavAll__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__NavAll__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

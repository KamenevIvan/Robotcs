// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ex0402b:msg/CurrentTarget.idl
// generated code does not contain a copyright notice
#include "ex0402b/msg/detail/current_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ex0402b__msg__CurrentTarget__init(ex0402b__msg__CurrentTarget * msg)
{
  if (!msg) {
    return false;
  }
  // target_name
  if (!rosidl_runtime_c__String__init(&msg->target_name)) {
    ex0402b__msg__CurrentTarget__fini(msg);
    return false;
  }
  // target_x
  // target_y
  // distance_to_target
  return true;
}

void
ex0402b__msg__CurrentTarget__fini(ex0402b__msg__CurrentTarget * msg)
{
  if (!msg) {
    return;
  }
  // target_name
  rosidl_runtime_c__String__fini(&msg->target_name);
  // target_x
  // target_y
  // distance_to_target
}

bool
ex0402b__msg__CurrentTarget__are_equal(const ex0402b__msg__CurrentTarget * lhs, const ex0402b__msg__CurrentTarget * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_name), &(rhs->target_name)))
  {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  // distance_to_target
  if (lhs->distance_to_target != rhs->distance_to_target) {
    return false;
  }
  return true;
}

bool
ex0402b__msg__CurrentTarget__copy(
  const ex0402b__msg__CurrentTarget * input,
  ex0402b__msg__CurrentTarget * output)
{
  if (!input || !output) {
    return false;
  }
  // target_name
  if (!rosidl_runtime_c__String__copy(
      &(input->target_name), &(output->target_name)))
  {
    return false;
  }
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  // distance_to_target
  output->distance_to_target = input->distance_to_target;
  return true;
}

ex0402b__msg__CurrentTarget *
ex0402b__msg__CurrentTarget__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex0402b__msg__CurrentTarget * msg = (ex0402b__msg__CurrentTarget *)allocator.allocate(sizeof(ex0402b__msg__CurrentTarget), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex0402b__msg__CurrentTarget));
  bool success = ex0402b__msg__CurrentTarget__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex0402b__msg__CurrentTarget__destroy(ex0402b__msg__CurrentTarget * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex0402b__msg__CurrentTarget__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex0402b__msg__CurrentTarget__Sequence__init(ex0402b__msg__CurrentTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex0402b__msg__CurrentTarget * data = NULL;

  if (size) {
    data = (ex0402b__msg__CurrentTarget *)allocator.zero_allocate(size, sizeof(ex0402b__msg__CurrentTarget), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex0402b__msg__CurrentTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex0402b__msg__CurrentTarget__fini(&data[i - 1]);
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
ex0402b__msg__CurrentTarget__Sequence__fini(ex0402b__msg__CurrentTarget__Sequence * array)
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
      ex0402b__msg__CurrentTarget__fini(&array->data[i]);
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

ex0402b__msg__CurrentTarget__Sequence *
ex0402b__msg__CurrentTarget__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex0402b__msg__CurrentTarget__Sequence * array = (ex0402b__msg__CurrentTarget__Sequence *)allocator.allocate(sizeof(ex0402b__msg__CurrentTarget__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex0402b__msg__CurrentTarget__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex0402b__msg__CurrentTarget__Sequence__destroy(ex0402b__msg__CurrentTarget__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex0402b__msg__CurrentTarget__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex0402b__msg__CurrentTarget__Sequence__are_equal(const ex0402b__msg__CurrentTarget__Sequence * lhs, const ex0402b__msg__CurrentTarget__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex0402b__msg__CurrentTarget__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex0402b__msg__CurrentTarget__Sequence__copy(
  const ex0402b__msg__CurrentTarget__Sequence * input,
  ex0402b__msg__CurrentTarget__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex0402b__msg__CurrentTarget);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex0402b__msg__CurrentTarget * data =
      (ex0402b__msg__CurrentTarget *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex0402b__msg__CurrentTarget__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex0402b__msg__CurrentTarget__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex0402b__msg__CurrentTarget__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ex09:msg/FullNameMessage.idl
// generated code does not contain a copyright notice
#include "ex09/msg/detail/full_name_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `last_name`
// Member `name`
// Member `first_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ex09__msg__FullNameMessage__init(ex09__msg__FullNameMessage * msg)
{
  if (!msg) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    ex09__msg__FullNameMessage__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ex09__msg__FullNameMessage__fini(msg);
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    ex09__msg__FullNameMessage__fini(msg);
    return false;
  }
  return true;
}

void
ex09__msg__FullNameMessage__fini(ex09__msg__FullNameMessage * msg)
{
  if (!msg) {
    return;
  }
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
}

bool
ex09__msg__FullNameMessage__are_equal(const ex09__msg__FullNameMessage * lhs, const ex09__msg__FullNameMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_name), &(rhs->last_name)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first_name), &(rhs->first_name)))
  {
    return false;
  }
  return true;
}

bool
ex09__msg__FullNameMessage__copy(
  const ex09__msg__FullNameMessage * input,
  ex09__msg__FullNameMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__copy(
      &(input->last_name), &(output->last_name)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__copy(
      &(input->first_name), &(output->first_name)))
  {
    return false;
  }
  return true;
}

ex09__msg__FullNameMessage *
ex09__msg__FullNameMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex09__msg__FullNameMessage * msg = (ex09__msg__FullNameMessage *)allocator.allocate(sizeof(ex09__msg__FullNameMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex09__msg__FullNameMessage));
  bool success = ex09__msg__FullNameMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex09__msg__FullNameMessage__destroy(ex09__msg__FullNameMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex09__msg__FullNameMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex09__msg__FullNameMessage__Sequence__init(ex09__msg__FullNameMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex09__msg__FullNameMessage * data = NULL;

  if (size) {
    data = (ex09__msg__FullNameMessage *)allocator.zero_allocate(size, sizeof(ex09__msg__FullNameMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex09__msg__FullNameMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex09__msg__FullNameMessage__fini(&data[i - 1]);
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
ex09__msg__FullNameMessage__Sequence__fini(ex09__msg__FullNameMessage__Sequence * array)
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
      ex09__msg__FullNameMessage__fini(&array->data[i]);
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

ex09__msg__FullNameMessage__Sequence *
ex09__msg__FullNameMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex09__msg__FullNameMessage__Sequence * array = (ex09__msg__FullNameMessage__Sequence *)allocator.allocate(sizeof(ex09__msg__FullNameMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex09__msg__FullNameMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex09__msg__FullNameMessage__Sequence__destroy(ex09__msg__FullNameMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex09__msg__FullNameMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex09__msg__FullNameMessage__Sequence__are_equal(const ex09__msg__FullNameMessage__Sequence * lhs, const ex09__msg__FullNameMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex09__msg__FullNameMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex09__msg__FullNameMessage__Sequence__copy(
  const ex09__msg__FullNameMessage__Sequence * input,
  ex09__msg__FullNameMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex09__msg__FullNameMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex09__msg__FullNameMessage * data =
      (ex09__msg__FullNameMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex09__msg__FullNameMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex09__msg__FullNameMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex09__msg__FullNameMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

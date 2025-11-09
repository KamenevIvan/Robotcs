// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ex0402b:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

#ifndef EX0402B__MSG__DETAIL__CURRENT_TARGET__FUNCTIONS_H_
#define EX0402B__MSG__DETAIL__CURRENT_TARGET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ex0402b/msg/rosidl_generator_c__visibility_control.h"

#include "ex0402b/msg/detail/current_target__struct.h"

/// Initialize msg/CurrentTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex0402b__msg__CurrentTarget
 * )) before or use
 * ex0402b__msg__CurrentTarget__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
bool
ex0402b__msg__CurrentTarget__init(ex0402b__msg__CurrentTarget * msg);

/// Finalize msg/CurrentTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
void
ex0402b__msg__CurrentTarget__fini(ex0402b__msg__CurrentTarget * msg);

/// Create msg/CurrentTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex0402b__msg__CurrentTarget__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
ex0402b__msg__CurrentTarget *
ex0402b__msg__CurrentTarget__create();

/// Destroy msg/CurrentTarget message.
/**
 * It calls
 * ex0402b__msg__CurrentTarget__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
void
ex0402b__msg__CurrentTarget__destroy(ex0402b__msg__CurrentTarget * msg);

/// Check for msg/CurrentTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
bool
ex0402b__msg__CurrentTarget__are_equal(const ex0402b__msg__CurrentTarget * lhs, const ex0402b__msg__CurrentTarget * rhs);

/// Copy a msg/CurrentTarget message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
bool
ex0402b__msg__CurrentTarget__copy(
  const ex0402b__msg__CurrentTarget * input,
  ex0402b__msg__CurrentTarget * output);

/// Initialize array of msg/CurrentTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex0402b__msg__CurrentTarget__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
bool
ex0402b__msg__CurrentTarget__Sequence__init(ex0402b__msg__CurrentTarget__Sequence * array, size_t size);

/// Finalize array of msg/CurrentTarget messages.
/**
 * It calls
 * ex0402b__msg__CurrentTarget__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
void
ex0402b__msg__CurrentTarget__Sequence__fini(ex0402b__msg__CurrentTarget__Sequence * array);

/// Create array of msg/CurrentTarget messages.
/**
 * It allocates the memory for the array and calls
 * ex0402b__msg__CurrentTarget__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
ex0402b__msg__CurrentTarget__Sequence *
ex0402b__msg__CurrentTarget__Sequence__create(size_t size);

/// Destroy array of msg/CurrentTarget messages.
/**
 * It calls
 * ex0402b__msg__CurrentTarget__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
void
ex0402b__msg__CurrentTarget__Sequence__destroy(ex0402b__msg__CurrentTarget__Sequence * array);

/// Check for msg/CurrentTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
bool
ex0402b__msg__CurrentTarget__Sequence__are_equal(const ex0402b__msg__CurrentTarget__Sequence * lhs, const ex0402b__msg__CurrentTarget__Sequence * rhs);

/// Copy an array of msg/CurrentTarget messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex0402b
bool
ex0402b__msg__CurrentTarget__Sequence__copy(
  const ex0402b__msg__CurrentTarget__Sequence * input,
  ex0402b__msg__CurrentTarget__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EX0402B__MSG__DETAIL__CURRENT_TARGET__FUNCTIONS_H_

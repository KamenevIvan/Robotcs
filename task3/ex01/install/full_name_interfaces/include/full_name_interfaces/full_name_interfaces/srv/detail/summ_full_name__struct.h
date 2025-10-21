// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from full_name_interfaces:srv/SummFullName.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_H_
#define FULL_NAME_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'surname'
// Member 'name'
// Member 'patronymic'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SummFullName in the package full_name_interfaces.
typedef struct full_name_interfaces__srv__SummFullName_Request
{
  rosidl_runtime_c__String surname;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String patronymic;
} full_name_interfaces__srv__SummFullName_Request;

// Struct for a sequence of full_name_interfaces__srv__SummFullName_Request.
typedef struct full_name_interfaces__srv__SummFullName_Request__Sequence
{
  full_name_interfaces__srv__SummFullName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} full_name_interfaces__srv__SummFullName_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'full_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SummFullName in the package full_name_interfaces.
typedef struct full_name_interfaces__srv__SummFullName_Response
{
  rosidl_runtime_c__String full_name;
} full_name_interfaces__srv__SummFullName_Response;

// Struct for a sequence of full_name_interfaces__srv__SummFullName_Response.
typedef struct full_name_interfaces__srv__SummFullName_Response__Sequence
{
  full_name_interfaces__srv__SummFullName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} full_name_interfaces__srv__SummFullName_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FULL_NAME_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_H_

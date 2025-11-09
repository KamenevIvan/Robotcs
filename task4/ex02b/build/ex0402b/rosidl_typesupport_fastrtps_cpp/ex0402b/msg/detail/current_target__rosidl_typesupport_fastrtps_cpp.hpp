// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ex0402b:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

#ifndef EX0402B__MSG__DETAIL__CURRENT_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define EX0402B__MSG__DETAIL__CURRENT_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ex0402b/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ex0402b/msg/detail/current_target__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ex0402b
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ex0402b
cdr_serialize(
  const ex0402b::msg::CurrentTarget & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ex0402b
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ex0402b::msg::CurrentTarget & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ex0402b
get_serialized_size(
  const ex0402b::msg::CurrentTarget & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ex0402b
max_serialized_size_CurrentTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ex0402b

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ex0402b
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ex0402b, msg, CurrentTarget)();

#ifdef __cplusplus
}
#endif

#endif  // EX0402B__MSG__DETAIL__CURRENT_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

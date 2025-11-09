// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ex0402b:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

#ifndef EX0402B__MSG__DETAIL__CURRENT_TARGET__TRAITS_HPP_
#define EX0402B__MSG__DETAIL__CURRENT_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ex0402b/msg/detail/current_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ex0402b
{

namespace msg
{

inline void to_flow_style_yaml(
  const CurrentTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_name
  {
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << ", ";
  }

  // member: target_x
  {
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << ", ";
  }

  // member: target_y
  {
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << ", ";
  }

  // member: distance_to_target
  {
    out << "distance_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CurrentTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << "\n";
  }

  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << "\n";
  }

  // member: distance_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_target, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CurrentTarget & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ex0402b

namespace rosidl_generator_traits
{

[[deprecated("use ex0402b::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ex0402b::msg::CurrentTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  ex0402b::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ex0402b::msg::to_yaml() instead")]]
inline std::string to_yaml(const ex0402b::msg::CurrentTarget & msg)
{
  return ex0402b::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ex0402b::msg::CurrentTarget>()
{
  return "ex0402b::msg::CurrentTarget";
}

template<>
inline const char * name<ex0402b::msg::CurrentTarget>()
{
  return "ex0402b/msg/CurrentTarget";
}

template<>
struct has_fixed_size<ex0402b::msg::CurrentTarget>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ex0402b::msg::CurrentTarget>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ex0402b::msg::CurrentTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EX0402B__MSG__DETAIL__CURRENT_TARGET__TRAITS_HPP_

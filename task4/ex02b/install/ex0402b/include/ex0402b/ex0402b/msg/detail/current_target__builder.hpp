// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ex0402b:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

#ifndef EX0402B__MSG__DETAIL__CURRENT_TARGET__BUILDER_HPP_
#define EX0402B__MSG__DETAIL__CURRENT_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ex0402b/msg/detail/current_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ex0402b
{

namespace msg
{

namespace builder
{

class Init_CurrentTarget_distance_to_target
{
public:
  explicit Init_CurrentTarget_distance_to_target(::ex0402b::msg::CurrentTarget & msg)
  : msg_(msg)
  {}
  ::ex0402b::msg::CurrentTarget distance_to_target(::ex0402b::msg::CurrentTarget::_distance_to_target_type arg)
  {
    msg_.distance_to_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex0402b::msg::CurrentTarget msg_;
};

class Init_CurrentTarget_target_y
{
public:
  explicit Init_CurrentTarget_target_y(::ex0402b::msg::CurrentTarget & msg)
  : msg_(msg)
  {}
  Init_CurrentTarget_distance_to_target target_y(::ex0402b::msg::CurrentTarget::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_CurrentTarget_distance_to_target(msg_);
  }

private:
  ::ex0402b::msg::CurrentTarget msg_;
};

class Init_CurrentTarget_target_x
{
public:
  explicit Init_CurrentTarget_target_x(::ex0402b::msg::CurrentTarget & msg)
  : msg_(msg)
  {}
  Init_CurrentTarget_target_y target_x(::ex0402b::msg::CurrentTarget::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_CurrentTarget_target_y(msg_);
  }

private:
  ::ex0402b::msg::CurrentTarget msg_;
};

class Init_CurrentTarget_target_name
{
public:
  Init_CurrentTarget_target_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurrentTarget_target_x target_name(::ex0402b::msg::CurrentTarget::_target_name_type arg)
  {
    msg_.target_name = std::move(arg);
    return Init_CurrentTarget_target_x(msg_);
  }

private:
  ::ex0402b::msg::CurrentTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex0402b::msg::CurrentTarget>()
{
  return ex0402b::msg::builder::Init_CurrentTarget_target_name();
}

}  // namespace ex0402b

#endif  // EX0402B__MSG__DETAIL__CURRENT_TARGET__BUILDER_HPP_

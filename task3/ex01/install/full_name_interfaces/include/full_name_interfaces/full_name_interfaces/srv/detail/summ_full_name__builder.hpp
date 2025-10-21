// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from full_name_interfaces:srv/SummFullName.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_
#define FULL_NAME_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "full_name_interfaces/srv/detail/summ_full_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace full_name_interfaces
{

namespace srv
{

namespace builder
{

class Init_SummFullName_Request_patronymic
{
public:
  explicit Init_SummFullName_Request_patronymic(::full_name_interfaces::srv::SummFullName_Request & msg)
  : msg_(msg)
  {}
  ::full_name_interfaces::srv::SummFullName_Request patronymic(::full_name_interfaces::srv::SummFullName_Request::_patronymic_type arg)
  {
    msg_.patronymic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_interfaces::srv::SummFullName_Request msg_;
};

class Init_SummFullName_Request_name
{
public:
  explicit Init_SummFullName_Request_name(::full_name_interfaces::srv::SummFullName_Request & msg)
  : msg_(msg)
  {}
  Init_SummFullName_Request_patronymic name(::full_name_interfaces::srv::SummFullName_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SummFullName_Request_patronymic(msg_);
  }

private:
  ::full_name_interfaces::srv::SummFullName_Request msg_;
};

class Init_SummFullName_Request_surname
{
public:
  Init_SummFullName_Request_surname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SummFullName_Request_name surname(::full_name_interfaces::srv::SummFullName_Request::_surname_type arg)
  {
    msg_.surname = std::move(arg);
    return Init_SummFullName_Request_name(msg_);
  }

private:
  ::full_name_interfaces::srv::SummFullName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_interfaces::srv::SummFullName_Request>()
{
  return full_name_interfaces::srv::builder::Init_SummFullName_Request_surname();
}

}  // namespace full_name_interfaces


namespace full_name_interfaces
{

namespace srv
{

namespace builder
{

class Init_SummFullName_Response_full_name
{
public:
  Init_SummFullName_Response_full_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::full_name_interfaces::srv::SummFullName_Response full_name(::full_name_interfaces::srv::SummFullName_Response::_full_name_type arg)
  {
    msg_.full_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_interfaces::srv::SummFullName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_interfaces::srv::SummFullName_Response>()
{
  return full_name_interfaces::srv::builder::Init_SummFullName_Response_full_name();
}

}  // namespace full_name_interfaces

#endif  // FULL_NAME_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_

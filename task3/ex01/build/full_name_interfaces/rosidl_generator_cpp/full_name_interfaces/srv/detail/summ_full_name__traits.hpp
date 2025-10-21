// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from full_name_interfaces:srv/SummFullName.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__TRAITS_HPP_
#define FULL_NAME_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "full_name_interfaces/srv/detail/summ_full_name__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace full_name_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SummFullName_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: surname
  {
    out << "surname: ";
    rosidl_generator_traits::value_to_yaml(msg.surname, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: patronymic
  {
    out << "patronymic: ";
    rosidl_generator_traits::value_to_yaml(msg.patronymic, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SummFullName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: surname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surname: ";
    rosidl_generator_traits::value_to_yaml(msg.surname, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: patronymic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "patronymic: ";
    rosidl_generator_traits::value_to_yaml(msg.patronymic, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SummFullName_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace full_name_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use full_name_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const full_name_interfaces::srv::SummFullName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  full_name_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use full_name_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const full_name_interfaces::srv::SummFullName_Request & msg)
{
  return full_name_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<full_name_interfaces::srv::SummFullName_Request>()
{
  return "full_name_interfaces::srv::SummFullName_Request";
}

template<>
inline const char * name<full_name_interfaces::srv::SummFullName_Request>()
{
  return "full_name_interfaces/srv/SummFullName_Request";
}

template<>
struct has_fixed_size<full_name_interfaces::srv::SummFullName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<full_name_interfaces::srv::SummFullName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<full_name_interfaces::srv::SummFullName_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace full_name_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SummFullName_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: full_name
  {
    out << "full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SummFullName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: full_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SummFullName_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace full_name_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use full_name_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const full_name_interfaces::srv::SummFullName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  full_name_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use full_name_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const full_name_interfaces::srv::SummFullName_Response & msg)
{
  return full_name_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<full_name_interfaces::srv::SummFullName_Response>()
{
  return "full_name_interfaces::srv::SummFullName_Response";
}

template<>
inline const char * name<full_name_interfaces::srv::SummFullName_Response>()
{
  return "full_name_interfaces/srv/SummFullName_Response";
}

template<>
struct has_fixed_size<full_name_interfaces::srv::SummFullName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<full_name_interfaces::srv::SummFullName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<full_name_interfaces::srv::SummFullName_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<full_name_interfaces::srv::SummFullName>()
{
  return "full_name_interfaces::srv::SummFullName";
}

template<>
inline const char * name<full_name_interfaces::srv::SummFullName>()
{
  return "full_name_interfaces/srv/SummFullName";
}

template<>
struct has_fixed_size<full_name_interfaces::srv::SummFullName>
  : std::integral_constant<
    bool,
    has_fixed_size<full_name_interfaces::srv::SummFullName_Request>::value &&
    has_fixed_size<full_name_interfaces::srv::SummFullName_Response>::value
  >
{
};

template<>
struct has_bounded_size<full_name_interfaces::srv::SummFullName>
  : std::integral_constant<
    bool,
    has_bounded_size<full_name_interfaces::srv::SummFullName_Request>::value &&
    has_bounded_size<full_name_interfaces::srv::SummFullName_Response>::value
  >
{
};

template<>
struct is_service<full_name_interfaces::srv::SummFullName>
  : std::true_type
{
};

template<>
struct is_service_request<full_name_interfaces::srv::SummFullName_Request>
  : std::true_type
{
};

template<>
struct is_service_response<full_name_interfaces::srv::SummFullName_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FULL_NAME_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__TRAITS_HPP_

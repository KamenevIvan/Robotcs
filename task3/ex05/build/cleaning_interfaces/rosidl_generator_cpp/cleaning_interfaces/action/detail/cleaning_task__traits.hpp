// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cleaning_interfaces:action/CleaningTask.idl
// generated code does not contain a copyright notice

#ifndef CLEANING_INTERFACES__ACTION__DETAIL__CLEANING_TASK__TRAITS_HPP_
#define CLEANING_INTERFACES__ACTION__DETAIL__CLEANING_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cleaning_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CleaningTask_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_type
  {
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << ", ";
  }

  // member: area_size
  {
    out << "area_size: ";
    rosidl_generator_traits::value_to_yaml(msg.area_size, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleaningTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << "\n";
  }

  // member: area_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_size: ";
    rosidl_generator_traits::value_to_yaml(msg.area_size, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleaningTask_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cleaning_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cleaning_interfaces::action::CleaningTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  cleaning_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cleaning_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const cleaning_interfaces::action::CleaningTask_Goal & msg)
{
  return cleaning_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<cleaning_interfaces::action::CleaningTask_Goal>()
{
  return "cleaning_interfaces::action::CleaningTask_Goal";
}

template<>
inline const char * name<cleaning_interfaces::action::CleaningTask_Goal>()
{
  return "cleaning_interfaces/action/CleaningTask_Goal";
}

template<>
struct has_fixed_size<cleaning_interfaces::action::CleaningTask_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cleaning_interfaces::action::CleaningTask_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cleaning_interfaces::action::CleaningTask_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cleaning_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CleaningTask_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: cleaned_points
  {
    out << "cleaned_points: ";
    rosidl_generator_traits::value_to_yaml(msg.cleaned_points, out);
    out << ", ";
  }

  // member: total_distance
  {
    out << "total_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleaningTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: cleaned_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cleaned_points: ";
    rosidl_generator_traits::value_to_yaml(msg.cleaned_points, out);
    out << "\n";
  }

  // member: total_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleaningTask_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cleaning_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cleaning_interfaces::action::CleaningTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  cleaning_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cleaning_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const cleaning_interfaces::action::CleaningTask_Result & msg)
{
  return cleaning_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<cleaning_interfaces::action::CleaningTask_Result>()
{
  return "cleaning_interfaces::action::CleaningTask_Result";
}

template<>
inline const char * name<cleaning_interfaces::action::CleaningTask_Result>()
{
  return "cleaning_interfaces/action/CleaningTask_Result";
}

template<>
struct has_fixed_size<cleaning_interfaces::action::CleaningTask_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cleaning_interfaces::action::CleaningTask_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cleaning_interfaces::action::CleaningTask_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cleaning_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CleaningTask_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress_percent
  {
    out << "progress_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.progress_percent, out);
    out << ", ";
  }

  // member: current_cleaned_points
  {
    out << "current_cleaned_points: ";
    rosidl_generator_traits::value_to_yaml(msg.current_cleaned_points, out);
    out << ", ";
  }

  // member: current_x
  {
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << ", ";
  }

  // member: current_y
  {
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleaningTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.progress_percent, out);
    out << "\n";
  }

  // member: current_cleaned_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_cleaned_points: ";
    rosidl_generator_traits::value_to_yaml(msg.current_cleaned_points, out);
    out << "\n";
  }

  // member: current_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << "\n";
  }

  // member: current_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleaningTask_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cleaning_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cleaning_interfaces::action::CleaningTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  cleaning_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cleaning_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const cleaning_interfaces::action::CleaningTask_Feedback & msg)
{
  return cleaning_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<cleaning_interfaces::action::CleaningTask_Feedback>()
{
  return "cleaning_interfaces::action::CleaningTask_Feedback";
}

template<>
inline const char * name<cleaning_interfaces::action::CleaningTask_Feedback>()
{
  return "cleaning_interfaces/action/CleaningTask_Feedback";
}

template<>
struct has_fixed_size<cleaning_interfaces::action::CleaningTask_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cleaning_interfaces::action::CleaningTask_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cleaning_interfaces::action::CleaningTask_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "cleaning_interfaces/action/detail/cleaning_task__traits.hpp"

namespace cleaning_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CleaningTask_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleaningTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleaningTask_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cleaning_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cleaning_interfaces::action::CleaningTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cleaning_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cleaning_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const cleaning_interfaces::action::CleaningTask_SendGoal_Request & msg)
{
  return cleaning_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<cleaning_interfaces::action::CleaningTask_SendGoal_Request>()
{
  return "cleaning_interfaces::action::CleaningTask_SendGoal_Request";
}

template<>
inline const char * name<cleaning_interfaces::action::CleaningTask_SendGoal_Request>()
{
  return "cleaning_interfaces/action/CleaningTask_SendGoal_Request";
}

template<>
struct has_fixed_size<cleaning_interfaces::action::CleaningTask_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<cleaning_interfaces::action::CleaningTask_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cleaning_interfaces::action::CleaningTask_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<cleaning_interfaces::action::CleaningTask_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cleaning_interfaces::action::CleaningTask_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace cleaning_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CleaningTask_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleaningTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleaningTask_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cleaning_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cleaning_interfaces::action::CleaningTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cleaning_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cleaning_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const cleaning_interfaces::action::CleaningTask_SendGoal_Response & msg)
{
  return cleaning_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<cleaning_interfaces::action::CleaningTask_SendGoal_Response>()
{
  return "cleaning_interfaces::action::CleaningTask_SendGoal_Response";
}

template<>
inline const char * name<cleaning_interfaces::action::CleaningTask_SendGoal_Response>()
{
  return "cleaning_interfaces/action/CleaningTask_SendGoal_Response";
}

template<>
struct has_fixed_size<cleaning_interfaces::action::CleaningTask_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<cleaning_interfaces::action::CleaningTask_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<cleaning_interfaces::action::CleaningTask_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cleaning_interfaces::action::CleaningTask_SendGoal>()
{
  return "cleaning_interfaces::action::CleaningTask_SendGoal";
}

template<>
inline const char * name<cleaning_interfaces::action::CleaningTask_SendGoal>()
{
  return "cleaning_interfaces/action/CleaningTask_SendGoal";
}

template<>
struct has_fixed_size<cleaning_interfaces::action::CleaningTask_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<cleaning_interfaces::action::CleaningTask_SendGoal_Request>::value &&
    has_fixed_size<cleaning_interfaces::action::CleaningTask_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<cleaning_interfaces::action::CleaningTask_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<cleaning_interfaces::action::CleaningTask_SendGoal_Request>::value &&
    has_bounded_size<cleaning_interfaces::action::CleaningTask_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<cleaning_interfaces::action::CleaningTask_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<cleaning_interfaces::action::CleaningTask_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cleaning_interfaces::action::CleaningTask_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace cleaning_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CleaningTask_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleaningTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleaningTask_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cleaning_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cleaning_interfaces::action::CleaningTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cleaning_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cleaning_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const cleaning_interfaces::action::CleaningTask_GetResult_Request & msg)
{
  return cleaning_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<cleaning_interfaces::action::CleaningTask_GetResult_Request>()
{
  return "cleaning_interfaces::action::CleaningTask_GetResult_Request";
}

template<>
inline const char * name<cleaning_interfaces::action::CleaningTask_GetResult_Request>()
{
  return "cleaning_interfaces/action/CleaningTask_GetResult_Request";
}

template<>
struct has_fixed_size<cleaning_interfaces::action::CleaningTask_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cleaning_interfaces::action::CleaningTask_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cleaning_interfaces::action::CleaningTask_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__traits.hpp"

namespace cleaning_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CleaningTask_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleaningTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleaningTask_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cleaning_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cleaning_interfaces::action::CleaningTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cleaning_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cleaning_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const cleaning_interfaces::action::CleaningTask_GetResult_Response & msg)
{
  return cleaning_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<cleaning_interfaces::action::CleaningTask_GetResult_Response>()
{
  return "cleaning_interfaces::action::CleaningTask_GetResult_Response";
}

template<>
inline const char * name<cleaning_interfaces::action::CleaningTask_GetResult_Response>()
{
  return "cleaning_interfaces/action/CleaningTask_GetResult_Response";
}

template<>
struct has_fixed_size<cleaning_interfaces::action::CleaningTask_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<cleaning_interfaces::action::CleaningTask_Result>::value> {};

template<>
struct has_bounded_size<cleaning_interfaces::action::CleaningTask_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<cleaning_interfaces::action::CleaningTask_Result>::value> {};

template<>
struct is_message<cleaning_interfaces::action::CleaningTask_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cleaning_interfaces::action::CleaningTask_GetResult>()
{
  return "cleaning_interfaces::action::CleaningTask_GetResult";
}

template<>
inline const char * name<cleaning_interfaces::action::CleaningTask_GetResult>()
{
  return "cleaning_interfaces/action/CleaningTask_GetResult";
}

template<>
struct has_fixed_size<cleaning_interfaces::action::CleaningTask_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<cleaning_interfaces::action::CleaningTask_GetResult_Request>::value &&
    has_fixed_size<cleaning_interfaces::action::CleaningTask_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<cleaning_interfaces::action::CleaningTask_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<cleaning_interfaces::action::CleaningTask_GetResult_Request>::value &&
    has_bounded_size<cleaning_interfaces::action::CleaningTask_GetResult_Response>::value
  >
{
};

template<>
struct is_service<cleaning_interfaces::action::CleaningTask_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<cleaning_interfaces::action::CleaningTask_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cleaning_interfaces::action::CleaningTask_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__traits.hpp"

namespace cleaning_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CleaningTask_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleaningTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleaningTask_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cleaning_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cleaning_interfaces::action::CleaningTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  cleaning_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cleaning_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const cleaning_interfaces::action::CleaningTask_FeedbackMessage & msg)
{
  return cleaning_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<cleaning_interfaces::action::CleaningTask_FeedbackMessage>()
{
  return "cleaning_interfaces::action::CleaningTask_FeedbackMessage";
}

template<>
inline const char * name<cleaning_interfaces::action::CleaningTask_FeedbackMessage>()
{
  return "cleaning_interfaces/action/CleaningTask_FeedbackMessage";
}

template<>
struct has_fixed_size<cleaning_interfaces::action::CleaningTask_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<cleaning_interfaces::action::CleaningTask_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cleaning_interfaces::action::CleaningTask_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<cleaning_interfaces::action::CleaningTask_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cleaning_interfaces::action::CleaningTask_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<cleaning_interfaces::action::CleaningTask>
  : std::true_type
{
};

template<>
struct is_action_goal<cleaning_interfaces::action::CleaningTask_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<cleaning_interfaces::action::CleaningTask_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<cleaning_interfaces::action::CleaningTask_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CLEANING_INTERFACES__ACTION__DETAIL__CLEANING_TASK__TRAITS_HPP_

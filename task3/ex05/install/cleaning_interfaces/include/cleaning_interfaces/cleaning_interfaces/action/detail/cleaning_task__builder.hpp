// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cleaning_interfaces:action/CleaningTask.idl
// generated code does not contain a copyright notice

#ifndef CLEANING_INTERFACES__ACTION__DETAIL__CLEANING_TASK__BUILDER_HPP_
#define CLEANING_INTERFACES__ACTION__DETAIL__CLEANING_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cleaning_interfaces
{

namespace action
{

namespace builder
{

class Init_CleaningTask_Goal_target_y
{
public:
  explicit Init_CleaningTask_Goal_target_y(::cleaning_interfaces::action::CleaningTask_Goal & msg)
  : msg_(msg)
  {}
  ::cleaning_interfaces::action::CleaningTask_Goal target_y(::cleaning_interfaces::action::CleaningTask_Goal::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Goal msg_;
};

class Init_CleaningTask_Goal_target_x
{
public:
  explicit Init_CleaningTask_Goal_target_x(::cleaning_interfaces::action::CleaningTask_Goal & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_Goal_target_y target_x(::cleaning_interfaces::action::CleaningTask_Goal::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_CleaningTask_Goal_target_y(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Goal msg_;
};

class Init_CleaningTask_Goal_area_size
{
public:
  explicit Init_CleaningTask_Goal_area_size(::cleaning_interfaces::action::CleaningTask_Goal & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_Goal_target_x area_size(::cleaning_interfaces::action::CleaningTask_Goal::_area_size_type arg)
  {
    msg_.area_size = std::move(arg);
    return Init_CleaningTask_Goal_target_x(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Goal msg_;
};

class Init_CleaningTask_Goal_task_type
{
public:
  Init_CleaningTask_Goal_task_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_Goal_area_size task_type(::cleaning_interfaces::action::CleaningTask_Goal::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_CleaningTask_Goal_area_size(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cleaning_interfaces::action::CleaningTask_Goal>()
{
  return cleaning_interfaces::action::builder::Init_CleaningTask_Goal_task_type();
}

}  // namespace cleaning_interfaces


namespace cleaning_interfaces
{

namespace action
{

namespace builder
{

class Init_CleaningTask_Result_total_distance
{
public:
  explicit Init_CleaningTask_Result_total_distance(::cleaning_interfaces::action::CleaningTask_Result & msg)
  : msg_(msg)
  {}
  ::cleaning_interfaces::action::CleaningTask_Result total_distance(::cleaning_interfaces::action::CleaningTask_Result::_total_distance_type arg)
  {
    msg_.total_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Result msg_;
};

class Init_CleaningTask_Result_cleaned_points
{
public:
  explicit Init_CleaningTask_Result_cleaned_points(::cleaning_interfaces::action::CleaningTask_Result & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_Result_total_distance cleaned_points(::cleaning_interfaces::action::CleaningTask_Result::_cleaned_points_type arg)
  {
    msg_.cleaned_points = std::move(arg);
    return Init_CleaningTask_Result_total_distance(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Result msg_;
};

class Init_CleaningTask_Result_success
{
public:
  Init_CleaningTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_Result_cleaned_points success(::cleaning_interfaces::action::CleaningTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CleaningTask_Result_cleaned_points(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cleaning_interfaces::action::CleaningTask_Result>()
{
  return cleaning_interfaces::action::builder::Init_CleaningTask_Result_success();
}

}  // namespace cleaning_interfaces


namespace cleaning_interfaces
{

namespace action
{

namespace builder
{

class Init_CleaningTask_Feedback_current_y
{
public:
  explicit Init_CleaningTask_Feedback_current_y(::cleaning_interfaces::action::CleaningTask_Feedback & msg)
  : msg_(msg)
  {}
  ::cleaning_interfaces::action::CleaningTask_Feedback current_y(::cleaning_interfaces::action::CleaningTask_Feedback::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Feedback msg_;
};

class Init_CleaningTask_Feedback_current_x
{
public:
  explicit Init_CleaningTask_Feedback_current_x(::cleaning_interfaces::action::CleaningTask_Feedback & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_Feedback_current_y current_x(::cleaning_interfaces::action::CleaningTask_Feedback::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_CleaningTask_Feedback_current_y(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Feedback msg_;
};

class Init_CleaningTask_Feedback_current_cleaned_points
{
public:
  explicit Init_CleaningTask_Feedback_current_cleaned_points(::cleaning_interfaces::action::CleaningTask_Feedback & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_Feedback_current_x current_cleaned_points(::cleaning_interfaces::action::CleaningTask_Feedback::_current_cleaned_points_type arg)
  {
    msg_.current_cleaned_points = std::move(arg);
    return Init_CleaningTask_Feedback_current_x(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Feedback msg_;
};

class Init_CleaningTask_Feedback_progress_percent
{
public:
  Init_CleaningTask_Feedback_progress_percent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_Feedback_current_cleaned_points progress_percent(::cleaning_interfaces::action::CleaningTask_Feedback::_progress_percent_type arg)
  {
    msg_.progress_percent = std::move(arg);
    return Init_CleaningTask_Feedback_current_cleaned_points(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cleaning_interfaces::action::CleaningTask_Feedback>()
{
  return cleaning_interfaces::action::builder::Init_CleaningTask_Feedback_progress_percent();
}

}  // namespace cleaning_interfaces


namespace cleaning_interfaces
{

namespace action
{

namespace builder
{

class Init_CleaningTask_SendGoal_Request_goal
{
public:
  explicit Init_CleaningTask_SendGoal_Request_goal(::cleaning_interfaces::action::CleaningTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::cleaning_interfaces::action::CleaningTask_SendGoal_Request goal(::cleaning_interfaces::action::CleaningTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_SendGoal_Request msg_;
};

class Init_CleaningTask_SendGoal_Request_goal_id
{
public:
  Init_CleaningTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_SendGoal_Request_goal goal_id(::cleaning_interfaces::action::CleaningTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CleaningTask_SendGoal_Request_goal(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cleaning_interfaces::action::CleaningTask_SendGoal_Request>()
{
  return cleaning_interfaces::action::builder::Init_CleaningTask_SendGoal_Request_goal_id();
}

}  // namespace cleaning_interfaces


namespace cleaning_interfaces
{

namespace action
{

namespace builder
{

class Init_CleaningTask_SendGoal_Response_stamp
{
public:
  explicit Init_CleaningTask_SendGoal_Response_stamp(::cleaning_interfaces::action::CleaningTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::cleaning_interfaces::action::CleaningTask_SendGoal_Response stamp(::cleaning_interfaces::action::CleaningTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_SendGoal_Response msg_;
};

class Init_CleaningTask_SendGoal_Response_accepted
{
public:
  Init_CleaningTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_SendGoal_Response_stamp accepted(::cleaning_interfaces::action::CleaningTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CleaningTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cleaning_interfaces::action::CleaningTask_SendGoal_Response>()
{
  return cleaning_interfaces::action::builder::Init_CleaningTask_SendGoal_Response_accepted();
}

}  // namespace cleaning_interfaces


namespace cleaning_interfaces
{

namespace action
{

namespace builder
{

class Init_CleaningTask_GetResult_Request_goal_id
{
public:
  Init_CleaningTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cleaning_interfaces::action::CleaningTask_GetResult_Request goal_id(::cleaning_interfaces::action::CleaningTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cleaning_interfaces::action::CleaningTask_GetResult_Request>()
{
  return cleaning_interfaces::action::builder::Init_CleaningTask_GetResult_Request_goal_id();
}

}  // namespace cleaning_interfaces


namespace cleaning_interfaces
{

namespace action
{

namespace builder
{

class Init_CleaningTask_GetResult_Response_result
{
public:
  explicit Init_CleaningTask_GetResult_Response_result(::cleaning_interfaces::action::CleaningTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::cleaning_interfaces::action::CleaningTask_GetResult_Response result(::cleaning_interfaces::action::CleaningTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_GetResult_Response msg_;
};

class Init_CleaningTask_GetResult_Response_status
{
public:
  Init_CleaningTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_GetResult_Response_result status(::cleaning_interfaces::action::CleaningTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CleaningTask_GetResult_Response_result(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cleaning_interfaces::action::CleaningTask_GetResult_Response>()
{
  return cleaning_interfaces::action::builder::Init_CleaningTask_GetResult_Response_status();
}

}  // namespace cleaning_interfaces


namespace cleaning_interfaces
{

namespace action
{

namespace builder
{

class Init_CleaningTask_FeedbackMessage_feedback
{
public:
  explicit Init_CleaningTask_FeedbackMessage_feedback(::cleaning_interfaces::action::CleaningTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::cleaning_interfaces::action::CleaningTask_FeedbackMessage feedback(::cleaning_interfaces::action::CleaningTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_FeedbackMessage msg_;
};

class Init_CleaningTask_FeedbackMessage_goal_id
{
public:
  Init_CleaningTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_FeedbackMessage_feedback goal_id(::cleaning_interfaces::action::CleaningTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CleaningTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::cleaning_interfaces::action::CleaningTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cleaning_interfaces::action::CleaningTask_FeedbackMessage>()
{
  return cleaning_interfaces::action::builder::Init_CleaningTask_FeedbackMessage_goal_id();
}

}  // namespace cleaning_interfaces

#endif  // CLEANING_INTERFACES__ACTION__DETAIL__CLEANING_TASK__BUILDER_HPP_

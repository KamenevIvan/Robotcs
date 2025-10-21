// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cleaning_interfaces:action/CleaningTask.idl
// generated code does not contain a copyright notice

#ifndef CLEANING_INTERFACES__ACTION__DETAIL__CLEANING_TASK__STRUCT_H_
#define CLEANING_INTERFACES__ACTION__DETAIL__CLEANING_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/CleaningTask in the package cleaning_interfaces.
typedef struct cleaning_interfaces__action__CleaningTask_Goal
{
  /// "clean_square", "clean_circle", "return_home"
  rosidl_runtime_c__String task_type;
  /// размер области для уборки (сторона квадрата или радиус круга)
  double area_size;
  /// целевая координата X (только для return_home)
  double target_x;
  /// целевая координата Y (только для return_home)
  double target_y;
} cleaning_interfaces__action__CleaningTask_Goal;

// Struct for a sequence of cleaning_interfaces__action__CleaningTask_Goal.
typedef struct cleaning_interfaces__action__CleaningTask_Goal__Sequence
{
  cleaning_interfaces__action__CleaningTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cleaning_interfaces__action__CleaningTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/CleaningTask in the package cleaning_interfaces.
typedef struct cleaning_interfaces__action__CleaningTask_Result
{
  /// true - задача выполнена успешно, false - не удалось выполнить
  bool success;
  /// количество "убранных" точек
  int32_t cleaned_points;
  /// общее пройденное расстояние
  double total_distance;
} cleaning_interfaces__action__CleaningTask_Result;

// Struct for a sequence of cleaning_interfaces__action__CleaningTask_Result.
typedef struct cleaning_interfaces__action__CleaningTask_Result__Sequence
{
  cleaning_interfaces__action__CleaningTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cleaning_interfaces__action__CleaningTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/CleaningTask in the package cleaning_interfaces.
typedef struct cleaning_interfaces__action__CleaningTask_Feedback
{
  /// процент выполнения задачи (0-100)
  int32_t progress_percent;
  /// текущее количество убранных точек
  int32_t current_cleaned_points;
  /// текущая позиция X
  double current_x;
  /// текущая позиция Y
  double current_y;
} cleaning_interfaces__action__CleaningTask_Feedback;

// Struct for a sequence of cleaning_interfaces__action__CleaningTask_Feedback.
typedef struct cleaning_interfaces__action__CleaningTask_Feedback__Sequence
{
  cleaning_interfaces__action__CleaningTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cleaning_interfaces__action__CleaningTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "cleaning_interfaces/action/detail/cleaning_task__struct.h"

/// Struct defined in action/CleaningTask in the package cleaning_interfaces.
typedef struct cleaning_interfaces__action__CleaningTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  cleaning_interfaces__action__CleaningTask_Goal goal;
} cleaning_interfaces__action__CleaningTask_SendGoal_Request;

// Struct for a sequence of cleaning_interfaces__action__CleaningTask_SendGoal_Request.
typedef struct cleaning_interfaces__action__CleaningTask_SendGoal_Request__Sequence
{
  cleaning_interfaces__action__CleaningTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cleaning_interfaces__action__CleaningTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CleaningTask in the package cleaning_interfaces.
typedef struct cleaning_interfaces__action__CleaningTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} cleaning_interfaces__action__CleaningTask_SendGoal_Response;

// Struct for a sequence of cleaning_interfaces__action__CleaningTask_SendGoal_Response.
typedef struct cleaning_interfaces__action__CleaningTask_SendGoal_Response__Sequence
{
  cleaning_interfaces__action__CleaningTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cleaning_interfaces__action__CleaningTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CleaningTask in the package cleaning_interfaces.
typedef struct cleaning_interfaces__action__CleaningTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} cleaning_interfaces__action__CleaningTask_GetResult_Request;

// Struct for a sequence of cleaning_interfaces__action__CleaningTask_GetResult_Request.
typedef struct cleaning_interfaces__action__CleaningTask_GetResult_Request__Sequence
{
  cleaning_interfaces__action__CleaningTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cleaning_interfaces__action__CleaningTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.h"

/// Struct defined in action/CleaningTask in the package cleaning_interfaces.
typedef struct cleaning_interfaces__action__CleaningTask_GetResult_Response
{
  int8_t status;
  cleaning_interfaces__action__CleaningTask_Result result;
} cleaning_interfaces__action__CleaningTask_GetResult_Response;

// Struct for a sequence of cleaning_interfaces__action__CleaningTask_GetResult_Response.
typedef struct cleaning_interfaces__action__CleaningTask_GetResult_Response__Sequence
{
  cleaning_interfaces__action__CleaningTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cleaning_interfaces__action__CleaningTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.h"

/// Struct defined in action/CleaningTask in the package cleaning_interfaces.
typedef struct cleaning_interfaces__action__CleaningTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  cleaning_interfaces__action__CleaningTask_Feedback feedback;
} cleaning_interfaces__action__CleaningTask_FeedbackMessage;

// Struct for a sequence of cleaning_interfaces__action__CleaningTask_FeedbackMessage.
typedef struct cleaning_interfaces__action__CleaningTask_FeedbackMessage__Sequence
{
  cleaning_interfaces__action__CleaningTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cleaning_interfaces__action__CleaningTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEANING_INTERFACES__ACTION__DETAIL__CLEANING_TASK__STRUCT_H_

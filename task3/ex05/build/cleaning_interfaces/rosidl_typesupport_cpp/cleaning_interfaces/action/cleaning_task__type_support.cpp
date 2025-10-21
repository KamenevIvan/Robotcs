// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from cleaning_interfaces:action/CleaningTask.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CleaningTask_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CleaningTask_Goal_type_support_ids_t;

static const _CleaningTask_Goal_type_support_ids_t _CleaningTask_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CleaningTask_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CleaningTask_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CleaningTask_Goal_type_support_symbol_names_t _CleaningTask_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cleaning_interfaces, action, CleaningTask_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cleaning_interfaces, action, CleaningTask_Goal)),
  }
};

typedef struct _CleaningTask_Goal_type_support_data_t
{
  void * data[2];
} _CleaningTask_Goal_type_support_data_t;

static _CleaningTask_Goal_type_support_data_t _CleaningTask_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CleaningTask_Goal_message_typesupport_map = {
  2,
  "cleaning_interfaces",
  &_CleaningTask_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_CleaningTask_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_CleaningTask_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CleaningTask_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CleaningTask_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_Goal>()
{
  return &::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask_Goal)() {
  return get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CleaningTask_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CleaningTask_Result_type_support_ids_t;

static const _CleaningTask_Result_type_support_ids_t _CleaningTask_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CleaningTask_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CleaningTask_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CleaningTask_Result_type_support_symbol_names_t _CleaningTask_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cleaning_interfaces, action, CleaningTask_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cleaning_interfaces, action, CleaningTask_Result)),
  }
};

typedef struct _CleaningTask_Result_type_support_data_t
{
  void * data[2];
} _CleaningTask_Result_type_support_data_t;

static _CleaningTask_Result_type_support_data_t _CleaningTask_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CleaningTask_Result_message_typesupport_map = {
  2,
  "cleaning_interfaces",
  &_CleaningTask_Result_message_typesupport_ids.typesupport_identifier[0],
  &_CleaningTask_Result_message_typesupport_symbol_names.symbol_name[0],
  &_CleaningTask_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CleaningTask_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CleaningTask_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_Result>()
{
  return &::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask_Result)() {
  return get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CleaningTask_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CleaningTask_Feedback_type_support_ids_t;

static const _CleaningTask_Feedback_type_support_ids_t _CleaningTask_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CleaningTask_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CleaningTask_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CleaningTask_Feedback_type_support_symbol_names_t _CleaningTask_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cleaning_interfaces, action, CleaningTask_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cleaning_interfaces, action, CleaningTask_Feedback)),
  }
};

typedef struct _CleaningTask_Feedback_type_support_data_t
{
  void * data[2];
} _CleaningTask_Feedback_type_support_data_t;

static _CleaningTask_Feedback_type_support_data_t _CleaningTask_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CleaningTask_Feedback_message_typesupport_map = {
  2,
  "cleaning_interfaces",
  &_CleaningTask_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_CleaningTask_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_CleaningTask_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CleaningTask_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CleaningTask_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_Feedback>()
{
  return &::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask_Feedback)() {
  return get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CleaningTask_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CleaningTask_SendGoal_Request_type_support_ids_t;

static const _CleaningTask_SendGoal_Request_type_support_ids_t _CleaningTask_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CleaningTask_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CleaningTask_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CleaningTask_SendGoal_Request_type_support_symbol_names_t _CleaningTask_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cleaning_interfaces, action, CleaningTask_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cleaning_interfaces, action, CleaningTask_SendGoal_Request)),
  }
};

typedef struct _CleaningTask_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _CleaningTask_SendGoal_Request_type_support_data_t;

static _CleaningTask_SendGoal_Request_type_support_data_t _CleaningTask_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CleaningTask_SendGoal_Request_message_typesupport_map = {
  2,
  "cleaning_interfaces",
  &_CleaningTask_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CleaningTask_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CleaningTask_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CleaningTask_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CleaningTask_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_SendGoal_Request>()
{
  return &::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask_SendGoal_Request)() {
  return get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CleaningTask_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CleaningTask_SendGoal_Response_type_support_ids_t;

static const _CleaningTask_SendGoal_Response_type_support_ids_t _CleaningTask_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CleaningTask_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CleaningTask_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CleaningTask_SendGoal_Response_type_support_symbol_names_t _CleaningTask_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cleaning_interfaces, action, CleaningTask_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cleaning_interfaces, action, CleaningTask_SendGoal_Response)),
  }
};

typedef struct _CleaningTask_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _CleaningTask_SendGoal_Response_type_support_data_t;

static _CleaningTask_SendGoal_Response_type_support_data_t _CleaningTask_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CleaningTask_SendGoal_Response_message_typesupport_map = {
  2,
  "cleaning_interfaces",
  &_CleaningTask_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CleaningTask_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CleaningTask_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CleaningTask_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CleaningTask_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_SendGoal_Response>()
{
  return &::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask_SendGoal_Response)() {
  return get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CleaningTask_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CleaningTask_SendGoal_type_support_ids_t;

static const _CleaningTask_SendGoal_type_support_ids_t _CleaningTask_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CleaningTask_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CleaningTask_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CleaningTask_SendGoal_type_support_symbol_names_t _CleaningTask_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cleaning_interfaces, action, CleaningTask_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cleaning_interfaces, action, CleaningTask_SendGoal)),
  }
};

typedef struct _CleaningTask_SendGoal_type_support_data_t
{
  void * data[2];
} _CleaningTask_SendGoal_type_support_data_t;

static _CleaningTask_SendGoal_type_support_data_t _CleaningTask_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CleaningTask_SendGoal_service_typesupport_map = {
  2,
  "cleaning_interfaces",
  &_CleaningTask_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_CleaningTask_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_CleaningTask_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CleaningTask_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CleaningTask_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<cleaning_interfaces::action::CleaningTask_SendGoal>()
{
  return &::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<cleaning_interfaces::action::CleaningTask_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CleaningTask_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CleaningTask_GetResult_Request_type_support_ids_t;

static const _CleaningTask_GetResult_Request_type_support_ids_t _CleaningTask_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CleaningTask_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CleaningTask_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CleaningTask_GetResult_Request_type_support_symbol_names_t _CleaningTask_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cleaning_interfaces, action, CleaningTask_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cleaning_interfaces, action, CleaningTask_GetResult_Request)),
  }
};

typedef struct _CleaningTask_GetResult_Request_type_support_data_t
{
  void * data[2];
} _CleaningTask_GetResult_Request_type_support_data_t;

static _CleaningTask_GetResult_Request_type_support_data_t _CleaningTask_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CleaningTask_GetResult_Request_message_typesupport_map = {
  2,
  "cleaning_interfaces",
  &_CleaningTask_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CleaningTask_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CleaningTask_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CleaningTask_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CleaningTask_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_GetResult_Request>()
{
  return &::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask_GetResult_Request)() {
  return get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CleaningTask_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CleaningTask_GetResult_Response_type_support_ids_t;

static const _CleaningTask_GetResult_Response_type_support_ids_t _CleaningTask_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CleaningTask_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CleaningTask_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CleaningTask_GetResult_Response_type_support_symbol_names_t _CleaningTask_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cleaning_interfaces, action, CleaningTask_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cleaning_interfaces, action, CleaningTask_GetResult_Response)),
  }
};

typedef struct _CleaningTask_GetResult_Response_type_support_data_t
{
  void * data[2];
} _CleaningTask_GetResult_Response_type_support_data_t;

static _CleaningTask_GetResult_Response_type_support_data_t _CleaningTask_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CleaningTask_GetResult_Response_message_typesupport_map = {
  2,
  "cleaning_interfaces",
  &_CleaningTask_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CleaningTask_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CleaningTask_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CleaningTask_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CleaningTask_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_GetResult_Response>()
{
  return &::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask_GetResult_Response)() {
  return get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CleaningTask_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CleaningTask_GetResult_type_support_ids_t;

static const _CleaningTask_GetResult_type_support_ids_t _CleaningTask_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CleaningTask_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CleaningTask_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CleaningTask_GetResult_type_support_symbol_names_t _CleaningTask_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cleaning_interfaces, action, CleaningTask_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cleaning_interfaces, action, CleaningTask_GetResult)),
  }
};

typedef struct _CleaningTask_GetResult_type_support_data_t
{
  void * data[2];
} _CleaningTask_GetResult_type_support_data_t;

static _CleaningTask_GetResult_type_support_data_t _CleaningTask_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CleaningTask_GetResult_service_typesupport_map = {
  2,
  "cleaning_interfaces",
  &_CleaningTask_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_CleaningTask_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_CleaningTask_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CleaningTask_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CleaningTask_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<cleaning_interfaces::action::CleaningTask_GetResult>()
{
  return &::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<cleaning_interfaces::action::CleaningTask_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CleaningTask_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CleaningTask_FeedbackMessage_type_support_ids_t;

static const _CleaningTask_FeedbackMessage_type_support_ids_t _CleaningTask_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CleaningTask_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CleaningTask_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CleaningTask_FeedbackMessage_type_support_symbol_names_t _CleaningTask_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cleaning_interfaces, action, CleaningTask_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cleaning_interfaces, action, CleaningTask_FeedbackMessage)),
  }
};

typedef struct _CleaningTask_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _CleaningTask_FeedbackMessage_type_support_data_t;

static _CleaningTask_FeedbackMessage_type_support_data_t _CleaningTask_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CleaningTask_FeedbackMessage_message_typesupport_map = {
  2,
  "cleaning_interfaces",
  &_CleaningTask_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_CleaningTask_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_CleaningTask_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CleaningTask_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CleaningTask_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_FeedbackMessage>()
{
  return &::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask_FeedbackMessage)() {
  return get_message_type_support_handle<cleaning_interfaces::action::CleaningTask_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "cleaning_interfaces/action/detail/cleaning_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace cleaning_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t CleaningTask_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cleaning_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<cleaning_interfaces::action::CleaningTask>()
{
  using ::cleaning_interfaces::action::rosidl_typesupport_cpp::CleaningTask_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  CleaningTask_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::cleaning_interfaces::action::CleaningTask::Impl::SendGoalService>();
  CleaningTask_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::cleaning_interfaces::action::CleaningTask::Impl::GetResultService>();
  CleaningTask_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::cleaning_interfaces::action::CleaningTask::Impl::CancelGoalService>();
  CleaningTask_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::cleaning_interfaces::action::CleaningTask::Impl::FeedbackMessage>();
  CleaningTask_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::cleaning_interfaces::action::CleaningTask::Impl::GoalStatusMessage>();
  return &CleaningTask_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, cleaning_interfaces, action, CleaningTask)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<cleaning_interfaces::action::CleaningTask>();
}

#ifdef __cplusplus
}
#endif

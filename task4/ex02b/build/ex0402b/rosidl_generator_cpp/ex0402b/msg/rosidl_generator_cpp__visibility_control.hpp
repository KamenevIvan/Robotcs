// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef EX0402B__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define EX0402B__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_ex0402b __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_ex0402b __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_ex0402b __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_ex0402b __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_ex0402b
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ex0402b ROSIDL_GENERATOR_CPP_EXPORT_ex0402b
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ex0402b ROSIDL_GENERATOR_CPP_IMPORT_ex0402b
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_ex0402b __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_ex0402b
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ex0402b __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ex0402b
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // EX0402B__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

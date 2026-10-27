// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pal_statistics_msgs:msg/Statistics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pal_statistics_msgs/msg/detail/statistics__functions.h"
#include "pal_statistics_msgs/msg/detail/statistics__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_statistics_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Statistics_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_statistics_msgs::msg::Statistics(_init);
}

void Statistics_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_statistics_msgs::msg::Statistics *>(message_memory);
  typed_message->~Statistics();
}

size_t size_function__Statistics__statistics(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pal_statistics_msgs::msg::Statistic> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Statistics__statistics(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pal_statistics_msgs::msg::Statistic> *>(untyped_member);
  return &member[index];
}

void * get_function__Statistics__statistics(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pal_statistics_msgs::msg::Statistic> *>(untyped_member);
  return &member[index];
}

void fetch_function__Statistics__statistics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pal_statistics_msgs::msg::Statistic *>(
    get_const_function__Statistics__statistics(untyped_member, index));
  auto & value = *reinterpret_cast<pal_statistics_msgs::msg::Statistic *>(untyped_value);
  value = item;
}

void assign_function__Statistics__statistics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pal_statistics_msgs::msg::Statistic *>(
    get_function__Statistics__statistics(untyped_member, index));
  const auto & value = *reinterpret_cast<const pal_statistics_msgs::msg::Statistic *>(untyped_value);
  item = value;
}

void resize_function__Statistics__statistics(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pal_statistics_msgs::msg::Statistic> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Statistics_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs::msg::Statistics, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "statistics",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pal_statistics_msgs::msg::Statistic>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs::msg::Statistics, statistics),  // bytes offset in struct
    nullptr,  // default value
    size_function__Statistics__statistics,  // size() function pointer
    get_const_function__Statistics__statistics,  // get_const(index) function pointer
    get_function__Statistics__statistics,  // get(index) function pointer
    fetch_function__Statistics__statistics,  // fetch(index, &value) function pointer
    assign_function__Statistics__statistics,  // assign(index, value) function pointer
    resize_function__Statistics__statistics  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Statistics_message_members = {
  "pal_statistics_msgs::msg",  // message namespace
  "Statistics",  // message name
  2,  // number of fields
  sizeof(pal_statistics_msgs::msg::Statistics),
  false,  // has_any_key_member_
  Statistics_message_member_array,  // message members
  Statistics_init_function,  // function to initialize message memory (memory has to be allocated)
  Statistics_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Statistics_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Statistics_message_members,
  get_message_typesupport_handle_function,
  &pal_statistics_msgs__msg__Statistics__get_type_hash,
  &pal_statistics_msgs__msg__Statistics__get_type_description,
  &pal_statistics_msgs__msg__Statistics__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pal_statistics_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_statistics_msgs::msg::Statistics>()
{
  return &::pal_statistics_msgs::msg::rosidl_typesupport_introspection_cpp::Statistics_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_statistics_msgs, msg, Statistics)() {
  return &::pal_statistics_msgs::msg::rosidl_typesupport_introspection_cpp::Statistics_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/SpawnResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/msg/spawn_result.hpp"


#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/spawn_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_SpawnResult_entity_name
{
public:
  explicit Init_SpawnResult_entity_name(::simulation_interfaces::msg::SpawnResult & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::SpawnResult entity_name(::simulation_interfaces::msg::SpawnResult::_entity_name_type arg)
  {
    msg_.entity_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::SpawnResult msg_;
};

class Init_SpawnResult_result
{
public:
  Init_SpawnResult_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnResult_entity_name result(::simulation_interfaces::msg::SpawnResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SpawnResult_entity_name(msg_);
  }

private:
  ::simulation_interfaces::msg::SpawnResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::SpawnResult>()
{
  return simulation_interfaces::msg::builder::Init_SpawnResult_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__BUILDER_HPP_

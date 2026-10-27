// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/SpawnEntity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/msg/spawn_entity.hpp"


#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_ENTITY__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_ENTITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/spawn_entity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_SpawnEntity_initial_pose
{
public:
  explicit Init_SpawnEntity_initial_pose(::simulation_interfaces::msg::SpawnEntity & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::SpawnEntity initial_pose(::simulation_interfaces::msg::SpawnEntity::_initial_pose_type arg)
  {
    msg_.initial_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::SpawnEntity msg_;
};

class Init_SpawnEntity_entity_namespace
{
public:
  explicit Init_SpawnEntity_entity_namespace(::simulation_interfaces::msg::SpawnEntity & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_initial_pose entity_namespace(::simulation_interfaces::msg::SpawnEntity::_entity_namespace_type arg)
  {
    msg_.entity_namespace = std::move(arg);
    return Init_SpawnEntity_initial_pose(msg_);
  }

private:
  ::simulation_interfaces::msg::SpawnEntity msg_;
};

class Init_SpawnEntity_entity_resource
{
public:
  explicit Init_SpawnEntity_entity_resource(::simulation_interfaces::msg::SpawnEntity & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_entity_namespace entity_resource(::simulation_interfaces::msg::SpawnEntity::_entity_resource_type arg)
  {
    msg_.entity_resource = std::move(arg);
    return Init_SpawnEntity_entity_namespace(msg_);
  }

private:
  ::simulation_interfaces::msg::SpawnEntity msg_;
};

class Init_SpawnEntity_allow_renaming
{
public:
  explicit Init_SpawnEntity_allow_renaming(::simulation_interfaces::msg::SpawnEntity & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_entity_resource allow_renaming(::simulation_interfaces::msg::SpawnEntity::_allow_renaming_type arg)
  {
    msg_.allow_renaming = std::move(arg);
    return Init_SpawnEntity_entity_resource(msg_);
  }

private:
  ::simulation_interfaces::msg::SpawnEntity msg_;
};

class Init_SpawnEntity_name
{
public:
  Init_SpawnEntity_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntity_allow_renaming name(::simulation_interfaces::msg::SpawnEntity::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SpawnEntity_allow_renaming(msg_);
  }

private:
  ::simulation_interfaces::msg::SpawnEntity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::SpawnEntity>()
{
  return simulation_interfaces::msg::builder::Init_SpawnEntity_name();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_ENTITY__BUILDER_HPP_

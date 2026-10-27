// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/SpawnEntities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/srv/spawn_entities.hpp"


#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITIES__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/spawn_entities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnEntities_Request_spawn_requests
{
public:
  Init_SpawnEntities_Request_spawn_requests()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::SpawnEntities_Request spawn_requests(::simulation_interfaces::srv::SpawnEntities_Request::_spawn_requests_type arg)
  {
    msg_.spawn_requests = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntities_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SpawnEntities_Request>()
{
  return simulation_interfaces::srv::builder::Init_SpawnEntities_Request_spawn_requests();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnEntities_Response_results
{
public:
  explicit Init_SpawnEntities_Response_results(::simulation_interfaces::srv::SpawnEntities_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::SpawnEntities_Response results(::simulation_interfaces::srv::SpawnEntities_Response::_results_type arg)
  {
    msg_.results = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntities_Response msg_;
};

class Init_SpawnEntities_Response_result
{
public:
  Init_SpawnEntities_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntities_Response_results result(::simulation_interfaces::srv::SpawnEntities_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SpawnEntities_Response_results(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntities_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SpawnEntities_Response>()
{
  return simulation_interfaces::srv::builder::Init_SpawnEntities_Response_result();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnEntities_Event_response
{
public:
  explicit Init_SpawnEntities_Event_response(::simulation_interfaces::srv::SpawnEntities_Event & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::SpawnEntities_Event response(::simulation_interfaces::srv::SpawnEntities_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntities_Event msg_;
};

class Init_SpawnEntities_Event_request
{
public:
  explicit Init_SpawnEntities_Event_request(::simulation_interfaces::srv::SpawnEntities_Event & msg)
  : msg_(msg)
  {}
  Init_SpawnEntities_Event_response request(::simulation_interfaces::srv::SpawnEntities_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SpawnEntities_Event_response(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntities_Event msg_;
};

class Init_SpawnEntities_Event_info
{
public:
  Init_SpawnEntities_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntities_Event_request info(::simulation_interfaces::srv::SpawnEntities_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SpawnEntities_Event_request(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntities_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SpawnEntities_Event>()
{
  return simulation_interfaces::srv::builder::Init_SpawnEntities_Event_info();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITIES__BUILDER_HPP_

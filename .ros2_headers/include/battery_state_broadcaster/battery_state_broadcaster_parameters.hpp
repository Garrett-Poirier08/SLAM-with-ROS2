// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

// silence deprecation warnings for parameter_traits, needed for backwards compatibility
#define SILENCE_DEPRECATION_WARNINGS
#include <parameter_traits/parameter_traits.hpp>
#undef SILENCE_DEPRECATION_WARNINGS

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace battery_state_broadcaster {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        std::vector<std::string> batteries;
        std::string sensor_name = "";
        double design_capacity = std::numeric_limits<double>::quiet_NaN();
        int64_t power_supply_technology = 0;
        struct Interfaces {
            struct MapBatteries {
                bool battery_temperature = false;
                bool battery_current = false;
                bool battery_charge = false;
                bool battery_percentage = false;
                bool battery_power_supply_status = false;
                bool battery_power_supply_health = false;
                bool battery_present = false;
            };
            std::map<std::string, MapBatteries> batteries_map;
        } interfaces;
        struct MapBatteries {
            double minimum_voltage = std::numeric_limits<double>::quiet_NaN();
            double maximum_voltage = std::numeric_limits<double>::quiet_NaN();
            double capacity = std::numeric_limits<double>::quiet_NaN();
            double design_capacity = std::numeric_limits<double>::quiet_NaN();
            int64_t power_supply_technology = 0;
            std::string location = "";
            std::string serial_number = "";
        };
        std::map<std::string, MapBatteries> batteries_map;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double design_capacity = std::numeric_limits<double>::quiet_NaN();
        int64_t power_supply_technology = 0;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    template <typename NodeT>
    ParamListener(NodeT node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("battery_state_broadcaster"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "")
    : prefix_{prefix},
      logger_{std::move(logger)} {
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    /**
     * @brief Tries to update the parsed Params object
     * @param params_in The Params object to update
     * @return true if the Params object was updated, false if it was already up to date or the mutex could not be locked
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_update_params(Params & params_in) const {
      std::unique_lock<std::mutex> lock(mutex_, std::try_to_lock);
      if (lock.owns_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
          return true;
        }
      }
      return false;
    }

    /**
     * @brief Tries to get the current Params object
     * @param params_in The Params object to fill with the current parameters
     * @return true if mutex can be locked, false if mutex could not be locked
     * @note The parameters are only filled, when the mutex can be locked and the params timestamp is different
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_get_params(Params & params_in) const {
      if (mutex_.try_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
        }
        mutex_.unlock();
        return true;
      }
      return false;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.design_capacity = params.design_capacity;
      output.power_supply_technology = params.power_supply_technology;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;
      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_temperature");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read battery temperature [°C] from this battery's state interface (If unmeasured NaN).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_temperature);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_temperature = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_current");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read battery current [A] from this battery's state interface (If unmeasured NaN).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_current);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_current = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_charge");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read battery charge [Ah] from this battery's state interface (If unmeasured NaN).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_charge);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_charge = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_percentage");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read charge level [%] (0.0 to 100.0) from this battery's state interface. If unmeasured, linear percentage is calculated using the minimum_voltage and maximum_voltage parameters (if provided), otherwise NaN.";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_percentage);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_percentage = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_power_supply_status");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read power supply status (e.g., Charging, Full, see https://github.com/ros2/common_interfaces/blob/rolling/sensor_msgs/msg/BatteryState.msg) from this battery's state interface. If unmeasured, status is set to unknown.";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_power_supply_status);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_power_supply_status = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_power_supply_health");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read power supply health (e.g., Good, Overheat, see https://github.com/ros2/common_interfaces/blob/rolling/sensor_msgs/msg/BatteryState.msg) from this battery's state interface. If unmeasured, health is set to unknown.";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_power_supply_health);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_power_supply_health = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_present");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read battery presence status (true if battery is present) from this battery's state interface. If unmeasured, the presence will be inferred from the battery voltage value (true if voltage is not NaN and not 0.0, otherwise false).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_present);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_present = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "minimum_voltage");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Minimum battery voltage (used to calculate percentage).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.minimum_voltage);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.minimum_voltage = param.as_double();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "maximum_voltage");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Maximum battery voltage (used to calculate percentage).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.maximum_voltage);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.maximum_voltage = param.as_double();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "capacity");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Last known full battery capacity [Ah] (If unmeasured NaN).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.capacity);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.capacity = param.as_double();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "design_capacity");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Design capacity of the battery [Ah] (If unmeasured NaN).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.design_capacity);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.design_capacity = param.as_double();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "power_supply_technology");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Battery chemistry type as an enum (see https://github.com/ros2/common_interfaces/blob/rolling/sensor_msgs/msg/BatteryState.msg). If unmeasured, the technology is set to unknown.";
              descriptor.read_only = true;
              descriptor.integer_range.resize(1);
              descriptor.integer_range.at(0).from_value = 0;
              descriptor.integer_range.at(0).to_value = 8;
              auto parameter = rclcpp::ParameterValue(entry.power_supply_technology);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          if(auto validation_result = bounds<int64_t>(param, 0, 8);
            !validation_result) {
              throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter '__map_batteries.power_supply_technology': {}", validation_result.error()));
          }
          entry.power_supply_technology = param.as_int();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "location");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Physical location of the battery (e.g., slot number or plug label).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.location);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.location = param.as_string();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "serial_number");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Serial number of the battery.";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.serial_number);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.serial_number = param.as_string();}

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "batteries")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.batteries = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sensor_name")) {
            updated_params.sensor_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "design_capacity")) {
            updated_params.design_capacity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "power_supply_technology")) {
            if(auto validation_result = bounds<int64_t>(param, 0, 8);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.power_supply_technology = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      // update dynamic parameters
      for (const auto &param: parameters) {
        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_temperature");
            if (param.get_name() == param_name) {

                updated_params.interfaces.batteries_map[value_1].battery_temperature = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_current");
            if (param.get_name() == param_name) {

                updated_params.interfaces.batteries_map[value_1].battery_current = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_charge");
            if (param.get_name() == param_name) {

                updated_params.interfaces.batteries_map[value_1].battery_charge = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_percentage");
            if (param.get_name() == param_name) {

                updated_params.interfaces.batteries_map[value_1].battery_percentage = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_power_supply_status");
            if (param.get_name() == param_name) {

                updated_params.interfaces.batteries_map[value_1].battery_power_supply_status = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_power_supply_health");
            if (param.get_name() == param_name) {

                updated_params.interfaces.batteries_map[value_1].battery_power_supply_health = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_present");
            if (param.get_name() == param_name) {

                updated_params.interfaces.batteries_map[value_1].battery_present = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}", prefix_, value, "minimum_voltage");
            if (param.get_name() == param_name) {

                updated_params.batteries_map[value_1].minimum_voltage = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}", prefix_, value, "maximum_voltage");
            if (param.get_name() == param_name) {

                updated_params.batteries_map[value_1].maximum_voltage = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}", prefix_, value, "capacity");
            if (param.get_name() == param_name) {

                updated_params.batteries_map[value_1].capacity = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}", prefix_, value, "design_capacity");
            if (param.get_name() == param_name) {

                updated_params.batteries_map[value_1].design_capacity = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}", prefix_, value, "power_supply_technology");
            if (param.get_name() == param_name) {
                if(auto validation_result = bounds<int64_t>(param, 0, 8);
                  !validation_result) {
                    return rsl::to_parameter_result_msg(validation_result);
                }

                updated_params.batteries_map[value_1].power_supply_technology = param.as_int();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}", prefix_, value, "location");
            if (param.get_name() == param_name) {

                updated_params.batteries_map[value_1].location = param.as_string();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.batteries) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}", prefix_, value, "serial_number");
            if (param.get_name() == param_name) {

                updated_params.batteries_map[value_1].serial_number = param.as_string();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

      }
      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      if (user_callback_) {
         user_callback_(updated_params);
      }
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "batteries")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "List of batteries from which battery state interfaces will be read.";
          descriptor.read_only = true;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "batteries", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sensor_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "[DEPRECATED] Sensor name of the battery. If provided, the 'voltage' state interface of this sensor will be used to populate the voltage field in the BatteryState message. If this parameter is used, the batteries and interfaces parameters are ignored.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.sensor_name);
          parameters_interface_->declare_parameter(prefix_ + "sensor_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "design_capacity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "[DEPRECATED] Design capacity of the battery [Ah] for the sensor_name mode (If unmeasured NaN).";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.design_capacity);
          parameters_interface_->declare_parameter(prefix_ + "design_capacity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "power_supply_technology")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "[DEPRECATED] Battery chemistry type as an enum for the sensor_name mode (see https://github.com/ros2/common_interfaces/blob/rolling/sensor_msgs/msg/BatteryState.msg). If unmeasured, the technology is set to unknown.";
          descriptor.read_only = true;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 0;
          descriptor.integer_range.at(0).to_value = 8;
          auto parameter = to_parameter_value(updated_params.power_supply_technology);
          parameters_interface_->declare_parameter(prefix_ + "power_supply_technology", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "batteries");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "batteries") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'batteries': {}", validation_result.error()));
      }
      updated_params.batteries = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "sensor_name");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sensor_name") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sensor_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "design_capacity");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "design_capacity") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.design_capacity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "power_supply_technology");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "power_supply_technology") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = bounds<int64_t>(param, 0, 8);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'power_supply_technology': {}", validation_result.error()));
      }
      updated_params.power_supply_technology = param.as_int();


      // declare and set all dynamic parameters
      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_temperature");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read battery temperature [°C] from this battery's state interface (If unmeasured NaN).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_temperature);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_temperature = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_current");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read battery current [A] from this battery's state interface (If unmeasured NaN).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_current);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_current = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_charge");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read battery charge [Ah] from this battery's state interface (If unmeasured NaN).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_charge);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_charge = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_percentage");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read charge level [%] (0.0 to 100.0) from this battery's state interface. If unmeasured, linear percentage is calculated using the minimum_voltage and maximum_voltage parameters (if provided), otherwise NaN.";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_percentage);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_percentage = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_power_supply_status");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read power supply status (e.g., Charging, Full, see https://github.com/ros2/common_interfaces/blob/rolling/sensor_msgs/msg/BatteryState.msg) from this battery's state interface. If unmeasured, status is set to unknown.";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_power_supply_status);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_power_supply_status = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_power_supply_health");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read power supply health (e.g., Good, Overheat, see https://github.com/ros2/common_interfaces/blob/rolling/sensor_msgs/msg/BatteryState.msg) from this battery's state interface. If unmeasured, health is set to unknown.";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_power_supply_health);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_power_supply_health = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.interfaces.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "interfaces", value, "battery_present");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Whether to read battery presence status (true if battery is present) from this battery's state interface. If unmeasured, the presence will be inferred from the battery voltage value (true if voltage is not NaN and not 0.0, otherwise false).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.battery_present);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.battery_present = param.as_bool();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "minimum_voltage");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Minimum battery voltage (used to calculate percentage).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.minimum_voltage);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.minimum_voltage = param.as_double();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "maximum_voltage");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Maximum battery voltage (used to calculate percentage).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.maximum_voltage);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.maximum_voltage = param.as_double();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "capacity");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Last known full battery capacity [Ah] (If unmeasured NaN).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.capacity);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.capacity = param.as_double();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "design_capacity");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Design capacity of the battery [Ah] (If unmeasured NaN).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.design_capacity);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.design_capacity = param.as_double();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "power_supply_technology");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Battery chemistry type as an enum (see https://github.com/ros2/common_interfaces/blob/rolling/sensor_msgs/msg/BatteryState.msg). If unmeasured, the technology is set to unknown.";
              descriptor.read_only = true;
              descriptor.integer_range.resize(1);
              descriptor.integer_range.at(0).from_value = 0;
              descriptor.integer_range.at(0).to_value = 8;
              auto parameter = rclcpp::ParameterValue(entry.power_supply_technology);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          if(auto validation_result = bounds<int64_t>(param, 0, 8);
            !validation_result) {
              throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter '__map_batteries.power_supply_technology': {}", validation_result.error()));
          }
          entry.power_supply_technology = param.as_int();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "location");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Physical location of the battery (e.g., slot number or plug label).";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.location);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.location = param.as_string();}

      for (const auto & value_1 : updated_params.batteries) {

          auto& entry = updated_params.batteries_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}", prefix_, value, "serial_number");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Serial number of the battery.";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.serial_number);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.serial_number = param.as_string();}


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    using userParameterUpdateCB = std::function<void(const Params&)>;
    void setUserCallback(const userParameterUpdateCB& callback){
      user_callback_ = callback;
    }

    void clearUserCallback(){
      user_callback_ = {};
    }

    private:
      void update_internal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = std::move(updated_params);
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;
      userParameterUpdateCB user_callback_;

      rclcpp::Logger logger_;
      std::mutex mutable mutex_;
  };

} // namespace battery_state_broadcaster

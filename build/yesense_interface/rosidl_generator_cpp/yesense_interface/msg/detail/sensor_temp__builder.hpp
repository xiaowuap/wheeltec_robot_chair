// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/SensorTemp.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__SENSOR_TEMP__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__SENSOR_TEMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/sensor_temp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_SensorTemp_temp
{
public:
  Init_SensorTemp_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yesense_interface::msg::SensorTemp temp(::yesense_interface::msg::SensorTemp::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::SensorTemp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::SensorTemp>()
{
  return yesense_interface::msg::builder::Init_SensorTemp_temp();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__SENSOR_TEMP__BUILDER_HPP_

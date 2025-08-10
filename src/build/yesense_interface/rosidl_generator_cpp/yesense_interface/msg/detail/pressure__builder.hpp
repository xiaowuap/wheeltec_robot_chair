// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/Pressure.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__PRESSURE__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__PRESSURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/pressure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_Pressure_val
{
public:
  Init_Pressure_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yesense_interface::msg::Pressure val(::yesense_interface::msg::Pressure::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::Pressure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::Pressure>()
{
  return yesense_interface::msg::builder::Init_Pressure_val();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__PRESSURE__BUILDER_HPP_

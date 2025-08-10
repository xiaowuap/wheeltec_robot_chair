// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/Tid.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__TID__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__TID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/tid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_Tid_tid
{
public:
  Init_Tid_tid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yesense_interface::msg::Tid tid(::yesense_interface::msg::Tid::_tid_type arg)
  {
    msg_.tid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::Tid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::Tid>()
{
  return yesense_interface::msg::builder::Init_Tid_tid();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__TID__BUILDER_HPP_

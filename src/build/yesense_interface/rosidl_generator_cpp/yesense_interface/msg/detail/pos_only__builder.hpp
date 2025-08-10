// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/PosOnly.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/pos_only__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_PosOnly_status
{
public:
  explicit Init_PosOnly_status(::yesense_interface::msg::PosOnly & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::PosOnly status(::yesense_interface::msg::PosOnly::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::PosOnly msg_;
};

class Init_PosOnly_pos
{
public:
  explicit Init_PosOnly_pos(::yesense_interface::msg::PosOnly & msg)
  : msg_(msg)
  {}
  Init_PosOnly_status pos(::yesense_interface::msg::PosOnly::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_PosOnly_status(msg_);
  }

private:
  ::yesense_interface::msg::PosOnly msg_;
};

class Init_PosOnly_tid
{
public:
  Init_PosOnly_tid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosOnly_pos tid(::yesense_interface::msg::PosOnly::_tid_type arg)
  {
    msg_.tid = std::move(arg);
    return Init_PosOnly_pos(msg_);
  }

private:
  ::yesense_interface::msg::PosOnly msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::PosOnly>()
{
  return yesense_interface::msg::builder::Init_PosOnly_tid();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__BUILDER_HPP_

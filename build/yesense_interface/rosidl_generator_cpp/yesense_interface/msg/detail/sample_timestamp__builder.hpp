// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/SampleTimestamp.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__SAMPLE_TIMESTAMP__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__SAMPLE_TIMESTAMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/sample_timestamp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_SampleTimestamp_timestamp
{
public:
  Init_SampleTimestamp_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yesense_interface::msg::SampleTimestamp timestamp(::yesense_interface::msg::SampleTimestamp::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::SampleTimestamp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::SampleTimestamp>()
{
  return yesense_interface::msg::builder::Init_SampleTimestamp_timestamp();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__SAMPLE_TIMESTAMP__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyreader_msg:msg/Maskdata.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__MASKDATA__BUILDER_HPP_
#define BODYREADER_MSG__MSG__DETAIL__MASKDATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyreader_msg/msg/detail/maskdata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyreader_msg
{

namespace msg
{

namespace builder
{

class Init_Maskdata_data
{
public:
  Init_Maskdata_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyreader_msg::msg::Maskdata data(::bodyreader_msg::msg::Maskdata::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyreader_msg::msg::Maskdata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyreader_msg::msg::Maskdata>()
{
  return bodyreader_msg::msg::builder::Init_Maskdata_data();
}

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__MASKDATA__BUILDER_HPP_

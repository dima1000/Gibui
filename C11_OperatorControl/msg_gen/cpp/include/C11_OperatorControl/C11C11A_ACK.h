/* Auto-generated by genmsg_cpp for file /home/userws3/git/robil/C11_OperatorControl/msg/C11C11A_ACK.msg */
#ifndef C11_OPERATORCONTROL_MESSAGE_C11C11A_ACK_H
#define C11_OPERATORCONTROL_MESSAGE_C11C11A_ACK_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace C11_OperatorControl
{
template <class ContainerAllocator>
struct C11C11A_ACK_ {
  typedef C11C11A_ACK_<ContainerAllocator> Type;

  C11C11A_ACK_()
  : mes(0)
  {
  }

  C11C11A_ACK_(const ContainerAllocator& _alloc)
  : mes(0)
  {
  }

  typedef int8_t _mes_type;
  int8_t mes;


  typedef boost::shared_ptr< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct C11C11A_ACK
typedef  ::C11_OperatorControl::C11C11A_ACK_<std::allocator<void> > C11C11A_ACK;

typedef boost::shared_ptr< ::C11_OperatorControl::C11C11A_ACK> C11C11A_ACKPtr;
typedef boost::shared_ptr< ::C11_OperatorControl::C11C11A_ACK const> C11C11A_ACKConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace C11_OperatorControl

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a2c9d7c095321aeb36d80db6f13919de";
  }

  static const char* value(const  ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa2c9d7c095321aebULL;
  static const uint64_t static_value2 = 0x36d80db6f13919deULL;
};

template<class ContainerAllocator>
struct DataType< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C11_OperatorControl/C11C11A_ACK";
  }

  static const char* value(const  ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 mes\n\
";
  }

  static const char* value(const  ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.mes);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct C11C11A_ACK_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::C11_OperatorControl::C11C11A_ACK_<ContainerAllocator> & v) 
  {
    s << indent << "mes: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mes);
  }
};


} // namespace message_operations
} // namespace ros

#endif // C11_OPERATORCONTROL_MESSAGE_C11C11A_ACK_H

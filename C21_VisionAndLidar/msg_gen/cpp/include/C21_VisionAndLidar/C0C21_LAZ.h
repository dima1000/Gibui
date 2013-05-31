/* Auto-generated by genmsg_cpp for file /home/userws3/git/robil/C21_VisionAndLidar/msg/C0C21_LAZ.msg */
#ifndef C21_VISIONANDLIDAR_MESSAGE_C0C21_LAZ_H
#define C21_VISIONANDLIDAR_MESSAGE_C0C21_LAZ_H
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


namespace C21_VisionAndLidar
{
template <class ContainerAllocator>
struct C0C21_LAZ_ {
  typedef C0C21_LAZ_<ContainerAllocator> Type;

  C0C21_LAZ_()
  : sampleRatePerSec(0)
  {
  }

  C0C21_LAZ_(const ContainerAllocator& _alloc)
  : sampleRatePerSec(0)
  {
  }

  typedef int32_t _sampleRatePerSec_type;
  int32_t sampleRatePerSec;


  typedef boost::shared_ptr< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct C0C21_LAZ
typedef  ::C21_VisionAndLidar::C0C21_LAZ_<std::allocator<void> > C0C21_LAZ;

typedef boost::shared_ptr< ::C21_VisionAndLidar::C0C21_LAZ> C0C21_LAZPtr;
typedef boost::shared_ptr< ::C21_VisionAndLidar::C0C21_LAZ const> C0C21_LAZConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace C21_VisionAndLidar

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e2a080ff15f5786b0e2a8ea153d8e1bb";
  }

  static const char* value(const  ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe2a080ff15f5786bULL;
  static const uint64_t static_value2 = 0x0e2a8ea153d8e1bbULL;
};

template<class ContainerAllocator>
struct DataType< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C0C21_LAZ";
  }

  static const char* value(const  ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 sampleRatePerSec\n\
\n\
";
  }

  static const char* value(const  ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.sampleRatePerSec);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct C0C21_LAZ_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::C21_VisionAndLidar::C0C21_LAZ_<ContainerAllocator> & v) 
  {
    s << indent << "sampleRatePerSec: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sampleRatePerSec);
  }
};


} // namespace message_operations
} // namespace ros

#endif // C21_VISIONANDLIDAR_MESSAGE_C0C21_LAZ_H

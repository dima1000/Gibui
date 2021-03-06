/* Auto-generated by genmsg_cpp for file /home/userws3/git/robil/C21_VisionAndLidar/srv/C21_obj.srv */
#ifndef C21_VISIONANDLIDAR_SERVICE_C21_OBJ_H
#define C21_VISIONANDLIDAR_SERVICE_C21_OBJ_H
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

#include "ros/service_traits.h"

#include "C21_VisionAndLidar/C21_RECT.h"


#include "geometry_msgs/Point.h"

namespace C21_VisionAndLidar
{
template <class ContainerAllocator>
struct C21_objRequest_ {
  typedef C21_objRequest_<ContainerAllocator> Type;

  C21_objRequest_()
  : sample()
  {
  }

  C21_objRequest_(const ContainerAllocator& _alloc)
  : sample(_alloc)
  {
  }

  typedef  ::C21_VisionAndLidar::C21_RECT_<ContainerAllocator>  _sample_type;
   ::C21_VisionAndLidar::C21_RECT_<ContainerAllocator>  sample;


  typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct C21_objRequest
typedef  ::C21_VisionAndLidar::C21_objRequest_<std::allocator<void> > C21_objRequest;

typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_objRequest> C21_objRequestPtr;
typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_objRequest const> C21_objRequestConstPtr;


template <class ContainerAllocator>
struct C21_objResponse_ {
  typedef C21_objResponse_<ContainerAllocator> Type;

  C21_objResponse_()
  : point()
  {
  }

  C21_objResponse_(const ContainerAllocator& _alloc)
  : point(_alloc)
  {
  }

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _point_type;
   ::geometry_msgs::Point_<ContainerAllocator>  point;


  typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct C21_objResponse
typedef  ::C21_VisionAndLidar::C21_objResponse_<std::allocator<void> > C21_objResponse;

typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_objResponse> C21_objResponsePtr;
typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_objResponse const> C21_objResponseConstPtr;

struct C21_obj
{

typedef C21_objRequest Request;
typedef C21_objResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct C21_obj
} // namespace C21_VisionAndLidar

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "01e3ae5f2566a27c0b5861cf393d6442";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x01e3ae5f2566a27cULL;
  static const uint64_t static_value2 = 0x0b5861cf393d6442ULL;
};

template<class ContainerAllocator>
struct DataType< ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_objRequest";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_RECT sample\n\
\n\
================================================================================\n\
MSG: C21_VisionAndLidar/C21_RECT\n\
int32 x1\n\
int32 y1\n\
int32 x2\n\
int32 y2\n\
";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a7c84ff13976aa04656e56e300124444";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa7c84ff13976aa04ULL;
  static const uint64_t static_value2 = 0x656e56e300124444ULL;
};

template<class ContainerAllocator>
struct DataType< ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_objResponse";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "geometry_msgs/Point point\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.sample);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct C21_objRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.point);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct C21_objResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<C21_VisionAndLidar::C21_obj> {
  static const char* value() 
  {
    return "e9a27b691b1965d66464f212fa6671fd";
  }

  static const char* value(const C21_VisionAndLidar::C21_obj&) { return value(); } 
};

template<>
struct DataType<C21_VisionAndLidar::C21_obj> {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_obj";
  }

  static const char* value(const C21_VisionAndLidar::C21_obj&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e9a27b691b1965d66464f212fa6671fd";
  }

  static const char* value(const C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_obj";
  }

  static const char* value(const C21_VisionAndLidar::C21_objRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e9a27b691b1965d66464f212fa6671fd";
  }

  static const char* value(const C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_obj";
  }

  static const char* value(const C21_VisionAndLidar::C21_objResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // C21_VISIONANDLIDAR_SERVICE_C21_OBJ_H


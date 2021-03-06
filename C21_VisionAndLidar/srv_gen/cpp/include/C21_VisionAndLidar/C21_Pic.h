/* Auto-generated by genmsg_cpp for file /home/userws3/git/robil/C21_VisionAndLidar/srv/C21_Pic.srv */
#ifndef C21_VISIONANDLIDAR_SERVICE_C21_PIC_H
#define C21_VISIONANDLIDAR_SERVICE_C21_PIC_H
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

#include "C21_VisionAndLidar/C21_PICTURE.h"


#include "sensor_msgs/Image.h"

namespace C21_VisionAndLidar
{
template <class ContainerAllocator>
struct C21_PicRequest_ {
  typedef C21_PicRequest_<ContainerAllocator> Type;

  C21_PicRequest_()
  : req()
  {
  }

  C21_PicRequest_(const ContainerAllocator& _alloc)
  : req(_alloc)
  {
  }

  typedef  ::C21_VisionAndLidar::C21_PICTURE_<ContainerAllocator>  _req_type;
   ::C21_VisionAndLidar::C21_PICTURE_<ContainerAllocator>  req;


  typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct C21_PicRequest
typedef  ::C21_VisionAndLidar::C21_PicRequest_<std::allocator<void> > C21_PicRequest;

typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_PicRequest> C21_PicRequestPtr;
typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_PicRequest const> C21_PicRequestConstPtr;


template <class ContainerAllocator>
struct C21_PicResponse_ {
  typedef C21_PicResponse_<ContainerAllocator> Type;

  C21_PicResponse_()
  : res()
  {
  }

  C21_PicResponse_(const ContainerAllocator& _alloc)
  : res(_alloc)
  {
  }

  typedef  ::sensor_msgs::Image_<ContainerAllocator>  _res_type;
   ::sensor_msgs::Image_<ContainerAllocator>  res;


  typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct C21_PicResponse
typedef  ::C21_VisionAndLidar::C21_PicResponse_<std::allocator<void> > C21_PicResponse;

typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_PicResponse> C21_PicResponsePtr;
typedef boost::shared_ptr< ::C21_VisionAndLidar::C21_PicResponse const> C21_PicResponseConstPtr;

struct C21_Pic
{

typedef C21_PicRequest Request;
typedef C21_PicResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct C21_Pic
} // namespace C21_VisionAndLidar

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8e8d00a7467661273bc873f3f0c6336a";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x8e8d00a746766127ULL;
  static const uint64_t static_value2 = 0x3bc873f3f0c6336aULL;
};

template<class ContainerAllocator>
struct DataType< ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_PicRequest";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_PICTURE req\n\
\n\
================================================================================\n\
MSG: C21_VisionAndLidar/C21_PICTURE\n\
int32 cmd\n\
int32 LEFT=0\n\
int32 RIGHT=1\n\
";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4dac78ec1b415d9d7caf9b2fc50a2d63";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4dac78ec1b415d9dULL;
  static const uint64_t static_value2 = 0x7caf9b2fc50a2d63ULL;
};

template<class ContainerAllocator>
struct DataType< ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_PicResponse";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sensor_msgs/Image res\n\
\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in src/image_encodings.cpp\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.req);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct C21_PicRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.res);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct C21_PicResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<C21_VisionAndLidar::C21_Pic> {
  static const char* value() 
  {
    return "b2e594b028c38046e0d409bbaadddf88";
  }

  static const char* value(const C21_VisionAndLidar::C21_Pic&) { return value(); } 
};

template<>
struct DataType<C21_VisionAndLidar::C21_Pic> {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_Pic";
  }

  static const char* value(const C21_VisionAndLidar::C21_Pic&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b2e594b028c38046e0d409bbaadddf88";
  }

  static const char* value(const C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_Pic";
  }

  static const char* value(const C21_VisionAndLidar::C21_PicRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b2e594b028c38046e0d409bbaadddf88";
  }

  static const char* value(const C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21_Pic";
  }

  static const char* value(const C21_VisionAndLidar::C21_PicResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // C21_VISIONANDLIDAR_SERVICE_C21_PIC_H


; Auto-generated. Do not edit!


(cl:in-package C21_VisionAndLidar-srv)


;//! \htmlinclude C21_Pic-request.msg.html

(cl:defclass <C21_Pic-request> (roslisp-msg-protocol:ros-message)
  ((req
    :reader req
    :initarg :req
    :type C21_VisionAndLidar-msg:C21_PICTURE
    :initform (cl:make-instance 'C21_VisionAndLidar-msg:C21_PICTURE)))
)

(cl:defclass C21_Pic-request (<C21_Pic-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <C21_Pic-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'C21_Pic-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name C21_VisionAndLidar-srv:<C21_Pic-request> is deprecated: use C21_VisionAndLidar-srv:C21_Pic-request instead.")))

(cl:ensure-generic-function 'req-val :lambda-list '(m))
(cl:defmethod req-val ((m <C21_Pic-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader C21_VisionAndLidar-srv:req-val is deprecated.  Use C21_VisionAndLidar-srv:req instead.")
  (req m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <C21_Pic-request>) ostream)
  "Serializes a message object of type '<C21_Pic-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'req) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <C21_Pic-request>) istream)
  "Deserializes a message object of type '<C21_Pic-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'req) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<C21_Pic-request>)))
  "Returns string type for a service object of type '<C21_Pic-request>"
  "C21_VisionAndLidar/C21_PicRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'C21_Pic-request)))
  "Returns string type for a service object of type 'C21_Pic-request"
  "C21_VisionAndLidar/C21_PicRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<C21_Pic-request>)))
  "Returns md5sum for a message object of type '<C21_Pic-request>"
  "b2e594b028c38046e0d409bbaadddf88")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'C21_Pic-request)))
  "Returns md5sum for a message object of type 'C21_Pic-request"
  "b2e594b028c38046e0d409bbaadddf88")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<C21_Pic-request>)))
  "Returns full string definition for message of type '<C21_Pic-request>"
  (cl:format cl:nil "C21_VisionAndLidar/C21_PICTURE req~%~%================================================================================~%MSG: C21_VisionAndLidar/C21_PICTURE~%int32 cmd~%int32 LEFT=0~%int32 RIGHT=1~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'C21_Pic-request)))
  "Returns full string definition for message of type 'C21_Pic-request"
  (cl:format cl:nil "C21_VisionAndLidar/C21_PICTURE req~%~%================================================================================~%MSG: C21_VisionAndLidar/C21_PICTURE~%int32 cmd~%int32 LEFT=0~%int32 RIGHT=1~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <C21_Pic-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'req))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <C21_Pic-request>))
  "Converts a ROS message object to a list"
  (cl:list 'C21_Pic-request
    (cl:cons ':req (req msg))
))
;//! \htmlinclude C21_Pic-response.msg.html

(cl:defclass <C21_Pic-response> (roslisp-msg-protocol:ros-message)
  ((res
    :reader res
    :initarg :res
    :type sensor_msgs-msg:Image
    :initform (cl:make-instance 'sensor_msgs-msg:Image)))
)

(cl:defclass C21_Pic-response (<C21_Pic-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <C21_Pic-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'C21_Pic-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name C21_VisionAndLidar-srv:<C21_Pic-response> is deprecated: use C21_VisionAndLidar-srv:C21_Pic-response instead.")))

(cl:ensure-generic-function 'res-val :lambda-list '(m))
(cl:defmethod res-val ((m <C21_Pic-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader C21_VisionAndLidar-srv:res-val is deprecated.  Use C21_VisionAndLidar-srv:res instead.")
  (res m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <C21_Pic-response>) ostream)
  "Serializes a message object of type '<C21_Pic-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'res) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <C21_Pic-response>) istream)
  "Deserializes a message object of type '<C21_Pic-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'res) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<C21_Pic-response>)))
  "Returns string type for a service object of type '<C21_Pic-response>"
  "C21_VisionAndLidar/C21_PicResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'C21_Pic-response)))
  "Returns string type for a service object of type 'C21_Pic-response"
  "C21_VisionAndLidar/C21_PicResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<C21_Pic-response>)))
  "Returns md5sum for a message object of type '<C21_Pic-response>"
  "b2e594b028c38046e0d409bbaadddf88")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'C21_Pic-response)))
  "Returns md5sum for a message object of type 'C21_Pic-response"
  "b2e594b028c38046e0d409bbaadddf88")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<C21_Pic-response>)))
  "Returns full string definition for message of type '<C21_Pic-response>"
  (cl:format cl:nil "sensor_msgs/Image res~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in src/image_encodings.cpp~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'C21_Pic-response)))
  "Returns full string definition for message of type 'C21_Pic-response"
  (cl:format cl:nil "sensor_msgs/Image res~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in src/image_encodings.cpp~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <C21_Pic-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'res))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <C21_Pic-response>))
  "Converts a ROS message object to a list"
  (cl:list 'C21_Pic-response
    (cl:cons ':res (res msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'C21_Pic)))
  'C21_Pic-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'C21_Pic)))
  'C21_Pic-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'C21_Pic)))
  "Returns string type for a service object of type '<C21_Pic>"
  "C21_VisionAndLidar/C21_Pic")
; Auto-generated. Do not edit!


(cl:in-package C21_VisionAndLidar-srv)


;//! \htmlinclude C21_obj-request.msg.html

(cl:defclass <C21_obj-request> (roslisp-msg-protocol:ros-message)
  ((sample
    :reader sample
    :initarg :sample
    :type C21_VisionAndLidar-msg:C21_RECT
    :initform (cl:make-instance 'C21_VisionAndLidar-msg:C21_RECT)))
)

(cl:defclass C21_obj-request (<C21_obj-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <C21_obj-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'C21_obj-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name C21_VisionAndLidar-srv:<C21_obj-request> is deprecated: use C21_VisionAndLidar-srv:C21_obj-request instead.")))

(cl:ensure-generic-function 'sample-val :lambda-list '(m))
(cl:defmethod sample-val ((m <C21_obj-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader C21_VisionAndLidar-srv:sample-val is deprecated.  Use C21_VisionAndLidar-srv:sample instead.")
  (sample m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <C21_obj-request>) ostream)
  "Serializes a message object of type '<C21_obj-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'sample) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <C21_obj-request>) istream)
  "Deserializes a message object of type '<C21_obj-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'sample) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<C21_obj-request>)))
  "Returns string type for a service object of type '<C21_obj-request>"
  "C21_VisionAndLidar/C21_objRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'C21_obj-request)))
  "Returns string type for a service object of type 'C21_obj-request"
  "C21_VisionAndLidar/C21_objRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<C21_obj-request>)))
  "Returns md5sum for a message object of type '<C21_obj-request>"
  "e9a27b691b1965d66464f212fa6671fd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'C21_obj-request)))
  "Returns md5sum for a message object of type 'C21_obj-request"
  "e9a27b691b1965d66464f212fa6671fd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<C21_obj-request>)))
  "Returns full string definition for message of type '<C21_obj-request>"
  (cl:format cl:nil "C21_VisionAndLidar/C21_RECT sample~%~%================================================================================~%MSG: C21_VisionAndLidar/C21_RECT~%int32 x1~%int32 y1~%int32 x2~%int32 y2~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'C21_obj-request)))
  "Returns full string definition for message of type 'C21_obj-request"
  (cl:format cl:nil "C21_VisionAndLidar/C21_RECT sample~%~%================================================================================~%MSG: C21_VisionAndLidar/C21_RECT~%int32 x1~%int32 y1~%int32 x2~%int32 y2~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <C21_obj-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'sample))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <C21_obj-request>))
  "Converts a ROS message object to a list"
  (cl:list 'C21_obj-request
    (cl:cons ':sample (sample msg))
))
;//! \htmlinclude C21_obj-response.msg.html

(cl:defclass <C21_obj-response> (roslisp-msg-protocol:ros-message)
  ((point
    :reader point
    :initarg :point
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point)))
)

(cl:defclass C21_obj-response (<C21_obj-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <C21_obj-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'C21_obj-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name C21_VisionAndLidar-srv:<C21_obj-response> is deprecated: use C21_VisionAndLidar-srv:C21_obj-response instead.")))

(cl:ensure-generic-function 'point-val :lambda-list '(m))
(cl:defmethod point-val ((m <C21_obj-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader C21_VisionAndLidar-srv:point-val is deprecated.  Use C21_VisionAndLidar-srv:point instead.")
  (point m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <C21_obj-response>) ostream)
  "Serializes a message object of type '<C21_obj-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'point) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <C21_obj-response>) istream)
  "Deserializes a message object of type '<C21_obj-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'point) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<C21_obj-response>)))
  "Returns string type for a service object of type '<C21_obj-response>"
  "C21_VisionAndLidar/C21_objResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'C21_obj-response)))
  "Returns string type for a service object of type 'C21_obj-response"
  "C21_VisionAndLidar/C21_objResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<C21_obj-response>)))
  "Returns md5sum for a message object of type '<C21_obj-response>"
  "e9a27b691b1965d66464f212fa6671fd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'C21_obj-response)))
  "Returns md5sum for a message object of type 'C21_obj-response"
  "e9a27b691b1965d66464f212fa6671fd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<C21_obj-response>)))
  "Returns full string definition for message of type '<C21_obj-response>"
  (cl:format cl:nil "geometry_msgs/Point point~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'C21_obj-response)))
  "Returns full string definition for message of type 'C21_obj-response"
  (cl:format cl:nil "geometry_msgs/Point point~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <C21_obj-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'point))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <C21_obj-response>))
  "Converts a ROS message object to a list"
  (cl:list 'C21_obj-response
    (cl:cons ':point (point msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'C21_obj)))
  'C21_obj-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'C21_obj)))
  'C21_obj-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'C21_obj)))
  "Returns string type for a service object of type '<C21_obj>"
  "C21_VisionAndLidar/C21_obj")
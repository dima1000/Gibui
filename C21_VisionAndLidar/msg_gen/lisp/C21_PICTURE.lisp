; Auto-generated. Do not edit!


(cl:in-package C21_VisionAndLidar-msg)


;//! \htmlinclude C21_PICTURE.msg.html

(cl:defclass <C21_PICTURE> (roslisp-msg-protocol:ros-message)
  ((cmd
    :reader cmd
    :initarg :cmd
    :type cl:integer
    :initform 0))
)

(cl:defclass C21_PICTURE (<C21_PICTURE>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <C21_PICTURE>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'C21_PICTURE)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name C21_VisionAndLidar-msg:<C21_PICTURE> is deprecated: use C21_VisionAndLidar-msg:C21_PICTURE instead.")))

(cl:ensure-generic-function 'cmd-val :lambda-list '(m))
(cl:defmethod cmd-val ((m <C21_PICTURE>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader C21_VisionAndLidar-msg:cmd-val is deprecated.  Use C21_VisionAndLidar-msg:cmd instead.")
  (cmd m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<C21_PICTURE>)))
    "Constants for message type '<C21_PICTURE>"
  '((:LEFT . 0)
    (:RIGHT . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'C21_PICTURE)))
    "Constants for message type 'C21_PICTURE"
  '((:LEFT . 0)
    (:RIGHT . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <C21_PICTURE>) ostream)
  "Serializes a message object of type '<C21_PICTURE>"
  (cl:let* ((signed (cl:slot-value msg 'cmd)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <C21_PICTURE>) istream)
  "Deserializes a message object of type '<C21_PICTURE>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'cmd) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<C21_PICTURE>)))
  "Returns string type for a message object of type '<C21_PICTURE>"
  "C21_VisionAndLidar/C21_PICTURE")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'C21_PICTURE)))
  "Returns string type for a message object of type 'C21_PICTURE"
  "C21_VisionAndLidar/C21_PICTURE")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<C21_PICTURE>)))
  "Returns md5sum for a message object of type '<C21_PICTURE>"
  "b3bb356355c682394b32c0a11debc36e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'C21_PICTURE)))
  "Returns md5sum for a message object of type 'C21_PICTURE"
  "b3bb356355c682394b32c0a11debc36e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<C21_PICTURE>)))
  "Returns full string definition for message of type '<C21_PICTURE>"
  (cl:format cl:nil "int32 cmd~%int32 LEFT=0~%int32 RIGHT=1~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'C21_PICTURE)))
  "Returns full string definition for message of type 'C21_PICTURE"
  (cl:format cl:nil "int32 cmd~%int32 LEFT=0~%int32 RIGHT=1~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <C21_PICTURE>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <C21_PICTURE>))
  "Converts a ROS message object to a list"
  (cl:list 'C21_PICTURE
    (cl:cons ':cmd (cmd msg))
))

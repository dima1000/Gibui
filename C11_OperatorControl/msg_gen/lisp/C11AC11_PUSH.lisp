; Auto-generated. Do not edit!


(cl:in-package C11_OperatorControl-msg)


;//! \htmlinclude C11AC11_PUSH.msg.html

(cl:defclass <C11AC11_PUSH> (roslisp-msg-protocol:ros-message)
  ((typ
    :reader typ
    :initarg :typ
    :type cl:fixnum
    :initform 0))
)

(cl:defclass C11AC11_PUSH (<C11AC11_PUSH>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <C11AC11_PUSH>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'C11AC11_PUSH)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name C11_OperatorControl-msg:<C11AC11_PUSH> is deprecated: use C11_OperatorControl-msg:C11AC11_PUSH instead.")))

(cl:ensure-generic-function 'typ-val :lambda-list '(m))
(cl:defmethod typ-val ((m <C11AC11_PUSH>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader C11_OperatorControl-msg:typ-val is deprecated.  Use C11_OperatorControl-msg:typ instead.")
  (typ m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <C11AC11_PUSH>) ostream)
  "Serializes a message object of type '<C11AC11_PUSH>"
  (cl:let* ((signed (cl:slot-value msg 'typ)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <C11AC11_PUSH>) istream)
  "Deserializes a message object of type '<C11AC11_PUSH>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'typ) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<C11AC11_PUSH>)))
  "Returns string type for a message object of type '<C11AC11_PUSH>"
  "C11_OperatorControl/C11AC11_PUSH")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'C11AC11_PUSH)))
  "Returns string type for a message object of type 'C11AC11_PUSH"
  "C11_OperatorControl/C11AC11_PUSH")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<C11AC11_PUSH>)))
  "Returns md5sum for a message object of type '<C11AC11_PUSH>"
  "466a711de37cfcd91673a69f3d7c5085")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'C11AC11_PUSH)))
  "Returns md5sum for a message object of type 'C11AC11_PUSH"
  "466a711de37cfcd91673a69f3d7c5085")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<C11AC11_PUSH>)))
  "Returns full string definition for message of type '<C11AC11_PUSH>"
  (cl:format cl:nil "int8 typ~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'C11AC11_PUSH)))
  "Returns full string definition for message of type 'C11AC11_PUSH"
  (cl:format cl:nil "int8 typ~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <C11AC11_PUSH>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <C11AC11_PUSH>))
  "Converts a ROS message object to a list"
  (cl:list 'C11AC11_PUSH
    (cl:cons ':typ (typ msg))
))

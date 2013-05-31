; Auto-generated. Do not edit!


(cl:in-package C11_OperatorControl-msg)


;//! \htmlinclude C11C11A_ACK.msg.html

(cl:defclass <C11C11A_ACK> (roslisp-msg-protocol:ros-message)
  ((mes
    :reader mes
    :initarg :mes
    :type cl:fixnum
    :initform 0))
)

(cl:defclass C11C11A_ACK (<C11C11A_ACK>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <C11C11A_ACK>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'C11C11A_ACK)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name C11_OperatorControl-msg:<C11C11A_ACK> is deprecated: use C11_OperatorControl-msg:C11C11A_ACK instead.")))

(cl:ensure-generic-function 'mes-val :lambda-list '(m))
(cl:defmethod mes-val ((m <C11C11A_ACK>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader C11_OperatorControl-msg:mes-val is deprecated.  Use C11_OperatorControl-msg:mes instead.")
  (mes m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <C11C11A_ACK>) ostream)
  "Serializes a message object of type '<C11C11A_ACK>"
  (cl:let* ((signed (cl:slot-value msg 'mes)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <C11C11A_ACK>) istream)
  "Deserializes a message object of type '<C11C11A_ACK>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mes) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<C11C11A_ACK>)))
  "Returns string type for a message object of type '<C11C11A_ACK>"
  "C11_OperatorControl/C11C11A_ACK")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'C11C11A_ACK)))
  "Returns string type for a message object of type 'C11C11A_ACK"
  "C11_OperatorControl/C11C11A_ACK")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<C11C11A_ACK>)))
  "Returns md5sum for a message object of type '<C11C11A_ACK>"
  "a2c9d7c095321aeb36d80db6f13919de")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'C11C11A_ACK)))
  "Returns md5sum for a message object of type 'C11C11A_ACK"
  "a2c9d7c095321aeb36d80db6f13919de")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<C11C11A_ACK>)))
  "Returns full string definition for message of type '<C11C11A_ACK>"
  (cl:format cl:nil "int8 mes~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'C11C11A_ACK)))
  "Returns full string definition for message of type 'C11C11A_ACK"
  (cl:format cl:nil "int8 mes~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <C11C11A_ACK>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <C11C11A_ACK>))
  "Converts a ROS message object to a list"
  (cl:list 'C11C11A_ACK
    (cl:cons ':mes (mes msg))
))

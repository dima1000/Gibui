; Auto-generated. Do not edit!


(cl:in-package C11_OperatorControl-msg)


;//! \htmlinclude C11C11A_MLV.msg.html

(cl:defclass <C11C11A_MLV> (roslisp-msg-protocol:ros-message)
  ((mlv
    :reader mlv
    :initarg :mlv
    :type cl:fixnum
    :initform 0))
)

(cl:defclass C11C11A_MLV (<C11C11A_MLV>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <C11C11A_MLV>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'C11C11A_MLV)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name C11_OperatorControl-msg:<C11C11A_MLV> is deprecated: use C11_OperatorControl-msg:C11C11A_MLV instead.")))

(cl:ensure-generic-function 'mlv-val :lambda-list '(m))
(cl:defmethod mlv-val ((m <C11C11A_MLV>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader C11_OperatorControl-msg:mlv-val is deprecated.  Use C11_OperatorControl-msg:mlv instead.")
  (mlv m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <C11C11A_MLV>) ostream)
  "Serializes a message object of type '<C11C11A_MLV>"
  (cl:let* ((signed (cl:slot-value msg 'mlv)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <C11C11A_MLV>) istream)
  "Deserializes a message object of type '<C11C11A_MLV>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mlv) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<C11C11A_MLV>)))
  "Returns string type for a message object of type '<C11C11A_MLV>"
  "C11_OperatorControl/C11C11A_MLV")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'C11C11A_MLV)))
  "Returns string type for a message object of type 'C11C11A_MLV"
  "C11_OperatorControl/C11C11A_MLV")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<C11C11A_MLV>)))
  "Returns md5sum for a message object of type '<C11C11A_MLV>"
  "13f10d6f1ecbcc6c9dbe4578bac11fff")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'C11C11A_MLV)))
  "Returns md5sum for a message object of type 'C11C11A_MLV"
  "13f10d6f1ecbcc6c9dbe4578bac11fff")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<C11C11A_MLV>)))
  "Returns full string definition for message of type '<C11C11A_MLV>"
  (cl:format cl:nil "int8 mlv~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'C11C11A_MLV)))
  "Returns full string definition for message of type 'C11C11A_MLV"
  (cl:format cl:nil "int8 mlv~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <C11C11A_MLV>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <C11C11A_MLV>))
  "Converts a ROS message object to a list"
  (cl:list 'C11C11A_MLV
    (cl:cons ':mlv (mlv msg))
))


(cl:in-package :asdf)

(defsystem "C11_OperatorControl-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "C11C11A_MLV" :depends-on ("_package_C11C11A_MLV"))
    (:file "_package_C11C11A_MLV" :depends-on ("_package"))
    (:file "C11C11A_ACK" :depends-on ("_package_C11C11A_ACK"))
    (:file "_package_C11C11A_ACK" :depends-on ("_package"))
    (:file "C11AC11_PUSH" :depends-on ("_package_C11AC11_PUSH"))
    (:file "_package_C11AC11_PUSH" :depends-on ("_package"))
  ))
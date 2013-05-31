
(cl:in-package :asdf)

(defsystem "C21_VisionAndLidar-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :C21_VisionAndLidar-msg
               :geometry_msgs-msg
               :sensor_msgs-msg
)
  :components ((:file "_package")
    (:file "C21_Pan" :depends-on ("_package_C21_Pan"))
    (:file "_package_C21_Pan" :depends-on ("_package"))
    (:file "C21" :depends-on ("_package_C21"))
    (:file "_package_C21" :depends-on ("_package"))
    (:file "C21_obj" :depends-on ("_package_C21_obj"))
    (:file "_package_C21_obj" :depends-on ("_package"))
    (:file "C21_Pic" :depends-on ("_package_C21_Pic"))
    (:file "_package_C21_Pic" :depends-on ("_package"))
  ))

(cl:in-package :asdf)

(defsystem "C21_VisionAndLidar-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :sensor_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "C21_RECT" :depends-on ("_package_C21_RECT"))
    (:file "_package_C21_RECT" :depends-on ("_package"))
    (:file "C21_C22" :depends-on ("_package_C21_C22"))
    (:file "_package_C21_C22" :depends-on ("_package"))
    (:file "C0C21_SIZ" :depends-on ("_package_C0C21_SIZ"))
    (:file "_package_C0C21_SIZ" :depends-on ("_package"))
    (:file "C0C21_AZI" :depends-on ("_package_C0C21_AZI"))
    (:file "_package_C0C21_AZI" :depends-on ("_package"))
    (:file "C21_PICTURE" :depends-on ("_package_C21_PICTURE"))
    (:file "_package_C21_PICTURE" :depends-on ("_package"))
    (:file "C21C0_3DR" :depends-on ("_package_C21C0_3DR"))
    (:file "_package_C21C0_3DR" :depends-on ("_package"))
    (:file "C21C0_3DF" :depends-on ("_package_C21C0_3DF"))
    (:file "_package_C21C0_3DF" :depends-on ("_package"))
    (:file "C21_PANORAMA" :depends-on ("_package_C21_PANORAMA"))
    (:file "_package_C21_PANORAMA" :depends-on ("_package"))
    (:file "C0C21_CAM" :depends-on ("_package_C0C21_CAM"))
    (:file "_package_C0C21_CAM" :depends-on ("_package"))
    (:file "C0C21_LAZ" :depends-on ("_package_C0C21_LAZ"))
    (:file "_package_C0C21_LAZ" :depends-on ("_package"))
    (:file "C0C21_RES" :depends-on ("_package_C0C21_RES"))
    (:file "_package_C0C21_RES" :depends-on ("_package"))
  ))
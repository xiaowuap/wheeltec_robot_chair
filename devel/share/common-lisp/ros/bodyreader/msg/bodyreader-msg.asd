
(cl:in-package :asdf)

(defsystem "bodyreader-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "body" :depends-on ("_package_body"))
    (:file "_package_body" :depends-on ("_package"))
    (:file "bodyList" :depends-on ("_package_bodyList"))
    (:file "_package_bodyList" :depends-on ("_package"))
    (:file "bodyposture" :depends-on ("_package_bodyposture"))
    (:file "_package_bodyposture" :depends-on ("_package"))
    (:file "joint" :depends-on ("_package_joint"))
    (:file "_package_joint" :depends-on ("_package"))
    (:file "locked_char_rgb" :depends-on ("_package_locked_char_rgb"))
    (:file "_package_locked_char_rgb" :depends-on ("_package"))
    (:file "lockedmask_w_h" :depends-on ("_package_lockedmask_w_h"))
    (:file "_package_lockedmask_w_h" :depends-on ("_package"))
    (:file "maskdata" :depends-on ("_package_maskdata"))
    (:file "_package_maskdata" :depends-on ("_package"))
    (:file "vector2f" :depends-on ("_package_vector2f"))
    (:file "_package_vector2f" :depends-on ("_package"))
    (:file "vector3f" :depends-on ("_package_vector3f"))
    (:file "_package_vector3f" :depends-on ("_package"))
  ))
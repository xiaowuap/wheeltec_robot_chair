
(cl:in-package :asdf)

(defsystem "laser_double-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "difop" :depends-on ("_package_difop"))
    (:file "_package_difop" :depends-on ("_package"))
  ))
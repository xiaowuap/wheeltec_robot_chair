;; Auto-generated. Do not edit!


(when (boundp 'laser_double::difop)
  (if (not (find-package "LASER_DOUBLE"))
    (make-package "LASER_DOUBLE"))
  (shadow 'difop (find-package "LASER_DOUBLE")))
(unless (find-package "LASER_DOUBLE::DIFOP")
  (make-package "LASER_DOUBLE::DIFOP"))

(in-package "ROS")
;;//! \htmlinclude difop.msg.html


(defclass laser_double::difop
  :super ros::object
  :slots (_MotorSpeed ))

(defmethod laser_double::difop
  (:init
   (&key
    ((:MotorSpeed __MotorSpeed) 0)
    )
   (send-super :init)
   (setq _MotorSpeed (round __MotorSpeed))
   self)
  (:MotorSpeed
   (&optional __MotorSpeed)
   (if __MotorSpeed (setq _MotorSpeed __MotorSpeed)) _MotorSpeed)
  (:serialization-length
   ()
   (+
    ;; int32 _MotorSpeed
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _MotorSpeed
       (write-long _MotorSpeed s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _MotorSpeed
     (setq _MotorSpeed (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get laser_double::difop :md5sum-) "d9089a8f658e468a7d86f8f561e2dfa0")
(setf (get laser_double::difop :datatype-) "laser_double/difop")
(setf (get laser_double::difop :definition-)
      "#float64 Temperature
#float64 HighPressure
int32 MotorSpeed

")



(provide :laser_double/difop "d9089a8f658e468a7d86f8f561e2dfa0")



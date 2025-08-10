// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/GpgsvSatellite.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GpgsvSatellite in the package nmea_msgs.
/**
  * Satellite data structure used in GPGSV messages
 */
typedef struct nmea_msgs__msg__GpgsvSatellite
{
  /// PRN number of the satellite
  /// GPS = 1..32
  /// SBAS = 33..64
  /// GLO = 65..96
  uint8_t prn;
  /// Elevation, degrees. Maximum 90
  uint8_t elevation;
  /// Azimuth, True North degrees. [0, 359]
  uint16_t azimuth;
  /// Signal to noise ratio, 0-99 dB. -1 when null in NMEA sentence (not tracking)
  int8_t snr;
} nmea_msgs__msg__GpgsvSatellite;

// Struct for a sequence of nmea_msgs__msg__GpgsvSatellite.
typedef struct nmea_msgs__msg__GpgsvSatellite__Sequence
{
  nmea_msgs__msg__GpgsvSatellite * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__GpgsvSatellite__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__STRUCT_H_

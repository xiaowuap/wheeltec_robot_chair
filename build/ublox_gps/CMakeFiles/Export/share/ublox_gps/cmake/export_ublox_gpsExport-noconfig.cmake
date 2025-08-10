#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ublox_gps::ublox_gps" for configuration ""
set_property(TARGET ublox_gps::ublox_gps APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ublox_gps::ublox_gps PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libublox_gps.so"
  IMPORTED_SONAME_NOCONFIG "libublox_gps.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ublox_gps::ublox_gps )
list(APPEND _IMPORT_CHECK_FILES_FOR_ublox_gps::ublox_gps "${_IMPORT_PREFIX}/lib/libublox_gps.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

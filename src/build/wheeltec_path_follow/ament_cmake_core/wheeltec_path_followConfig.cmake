# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_wheeltec_path_follow_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED wheeltec_path_follow_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(wheeltec_path_follow_FOUND FALSE)
  elseif(NOT wheeltec_path_follow_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(wheeltec_path_follow_FOUND FALSE)
  endif()
  return()
endif()
set(_wheeltec_path_follow_CONFIG_INCLUDED TRUE)

# output package information
if(NOT wheeltec_path_follow_FIND_QUIETLY)
  message(STATUS "Found wheeltec_path_follow: 0.0.0 (${wheeltec_path_follow_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'wheeltec_path_follow' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${wheeltec_path_follow_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(wheeltec_path_follow_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${wheeltec_path_follow_DIR}/${_extra}")
endforeach()

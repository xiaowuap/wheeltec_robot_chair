# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tts_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tts_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tts_FOUND FALSE)
  elseif(NOT tts_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tts_FOUND FALSE)
  endif()
  return()
endif()
set(_tts_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tts_FIND_QUIETLY)
  message(STATUS "Found tts: 0.0.0 (${tts_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tts' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tts_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tts_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${tts_DIR}/${_extra}")
endforeach()

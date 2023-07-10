# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_city_w_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED city_w_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(city_w_FOUND FALSE)
  elseif(NOT city_w_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(city_w_FOUND FALSE)
  endif()
  return()
endif()
set(_city_w_CONFIG_INCLUDED TRUE)

# output package information
if(NOT city_w_FIND_QUIETLY)
  message(STATUS "Found city_w: 0.0.0 (${city_w_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'city_w' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${city_w_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(city_w_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${city_w_DIR}/${_extra}")
endforeach()

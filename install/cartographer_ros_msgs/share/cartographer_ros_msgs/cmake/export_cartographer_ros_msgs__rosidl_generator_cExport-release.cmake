#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cartographer_ros_msgs::cartographer_ros_msgs__rosidl_generator_c" for configuration "Release"
set_property(TARGET cartographer_ros_msgs::cartographer_ros_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cartographer_ros_msgs::cartographer_ros_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcartographer_ros_msgs__rosidl_generator_c.so"
  IMPORTED_SONAME_RELEASE "libcartographer_ros_msgs__rosidl_generator_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cartographer_ros_msgs::cartographer_ros_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_cartographer_ros_msgs::cartographer_ros_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libcartographer_ros_msgs__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

# Install script for directory: /home/allen/opensource/apollo_lite/modules/common

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/apollo")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/allen/opensource/apollo_lite/build/modules/common/proto/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/adapters/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/configs/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/filters/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/kv_db/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/latency_recorder/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/math/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/monitor_log/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/status/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/util/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/vehicle_state/cmake_install.cmake")
  include("/home/allen/opensource/apollo_lite/build/modules/common/vehicle_model/cmake_install.cmake")

endif()


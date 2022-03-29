cmake_minimum_required(VERSION 3.5.1)

include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})
message(STATUS, "PROJECT_SOURCE_DIR1: ${PROJECT_SOURCE_DIR}")
message(STATUS, "PROJECT_BINARY_DIR1: ${PROJECT_BINARY_DIR}")

find_package(gflags REQUIRED)
message(STATUS, "GFLAGS_INCLUDE_DIR: ${GFLAGS_INCLUDE_DIR}")
message(STATUS, "GFLAGS_LIB_DIR: ${GFLAGS_LIBRARIES}")
include_directories(${GFLAGS_INCLUDE_DIR})

add_library(common_config_gflags config_gflags.cc)
target_link_libraries(common_config_gflags ${gflags_LIBRARIES})

add_library(common_vehicle_config_helper vehicle_config_helper.cc)
target_link_libraries(common_vehicle_config_helper common_config_gflags
                                                   cyber
                                                   common_util
                                                   common_proto
                                                   common_math
                                                   ${GLOG_LIBRARIES})


# add_executable(vehicle_config_helper_test vehicle_config_helper_test.cc)
# target_link_libraries(vehicle_config_helper_test 
#         common_vehicle_config_helper
#         gtest gtest_main
#         absl_base
#         absl_strings 
#         absl_strings_internal
#         absl_log_severity 
#         absl_raw_logging_internal 
#         absl_int128 
#         absl_throw_delegate
#         absl_time
#         absl_symbolize)



        # ${gflags_LIBRARIES} 
        # ${GLOG_LIBRARIES} 


cmake_minimum_required(VERSION 3.5.1)



file(GLOB FILTERS_SRCS *.cc)
set(FILTERS_TEST_SRCS ${FILTERS_SRCS})
list(FILTER FILTERS_TEST_SRCS INCLUDE REGEX .*test[.]cc )
list(FILTER FILTERS_SRCS EXCLUDE REGEX .*test[.]cc )

include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})
message(STATUS, "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message(STATUS, "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

find_package(Eigen3 REQUIRED)
message(STATUS, "EIGEN3_INCLUDE_DIR: ${EIGEN3_INCLUDE_DIR}")
include_directories(${EIGEN3_INCLUDE_DIR})

add_library(common_filters ${FILTERS_SRCS})
target_link_libraries(common_filters cyber absl_strings)

FOREACH(TEST_FILE ${FILTERS_TEST_SRCS})  
	string( REGEX MATCH "[A-Za-z0-9_]*[.]cc" FILE_NAME ${TEST_FILE} ) 
	string( REGEX MATCH "[A-Za-z0-9_]*" TARGET_NAME ${FILE_NAME})
	list(APPEND TEST_TARGETS ${TARGET_NAME})
	add_executable(${TARGET_NAME} ${TEST_FILE})
	target_link_libraries(${TARGET_NAME} common_math common_filters cyber gflags glog gtest gmock_main absl_strings absl_base 
                absl_log_severity absl_raw_logging_internal absl_int128 absl_throw_delegate)
	target_compile_options(${TARGET_NAME} PRIVATE -Og)
ENDFOREACH(TEST_FILE)



# add_library(common_config_gflags config_gflags.cc)
# target_link_libraries(common_config_gflags ${gflags_LIBRARIES})
# add_library(common::config_gflags ALIAS common_config_gflags)

# add_subdirectory(proto)

# add_library(common_vehicle_config_helper vehicle_config_helper.cc)
# target_link_libraries(common_vehicle_config_helper common::config_gflags
#                                                    cyber::common
#                                                    common::configs_proto
#                                                    common::util
#                                                    ${GLOG_LIBRARIES})
# add_library(common::vehicle_config_helper ALIAS common_vehicle_config_helper)


# add_executable(vehicle_config_helper_test vehicle_config_helper_test.cc)
# target_link_libraries(vehicle_config_helper_test gtest gtest_main common::vehicle_config_helper)

# add_library(common_configs_module INTERFACE)
# target_link_libraries(common_configs_module INTERFACE
#         common_config_gflags
#         common_vehicle_config_helper
#         )

# install(TARGETS common_config_gflags
#                 common_vehicle_config_helper
#                 common_configs_module
#         EXPORT  apollo-export
#         LIBRARY DESTINATION lib
#         ARCHIVE DESTINATION lib
#         RUNTIME DESTINATION bin
#         INCLUDES DESTINATION .
#         )

# install(TARGETS vehicle_config_helper_test
#         LIBRARY DESTINATION lib
#         ARCHIVE DESTINATION lib
#         RUNTIME DESTINATION bin
#         INCLUDES DESTINATION .
# )

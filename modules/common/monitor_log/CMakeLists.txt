cmake_minimum_required(VERSION 3.5.1)


file(GLOB MONITOR_LOG_SRCS *.cc)
set(MONITOR_LOG_TEST_SRCS ${MONITOR_LOG_SRCS})
list(FILTER MONITOR_LOG_TEST_SRCS INCLUDE REGEX .*test[.]cc )
list(FILTER MONITOR_LOG_SRCS EXCLUDE REGEX .*test[.]cc )

include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})
message(STATUS, "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message(STATUS, "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

find_package(Eigen3 REQUIRED)
message(STATUS, "EIGEN3_INCLUDE_DIR: ${EIGEN3_INCLUDE_DIR}")
include_directories(${EIGEN3_INCLUDE_DIR})

add_library(common_monitor_log ${MONITOR_LOG_SRCS})
target_link_libraries(common_monitor_log cyber absl_strings)

#build tests
FOREACH(TEST_FILE ${MONITOR_LOG_TEST_SRCS})  
	string( REGEX MATCH "[A-Za-z0-9_]*[.]cc" FILE_NAME ${TEST_FILE} ) 
	string( REGEX MATCH "[A-Za-z0-9_]*" TARGET_NAME ${FILE_NAME})
	list(APPEND TEST_TARGETS ${TARGET_NAME})
	add_executable(${TARGET_NAME} ${TEST_FILE})
	target_link_libraries(${TARGET_NAME} common_math common_proto cyber gflags glog gtest gmock_main common_monitor_log
	absl_strings absl_base 
    absl_log_severity absl_raw_logging_internal absl_int128 absl_throw_delegate)
	target_compile_options(${TARGET_NAME} PRIVATE -Og)
ENDFOREACH(TEST_FILE)

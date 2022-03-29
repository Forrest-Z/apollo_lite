


file(GLOB UTIL_SRCS *.cc)
set(UTIL_TEST_SRCS ${UTIL_SRCS})
list(FILTER UTIL_TEST_SRCS INCLUDE REGEX .*test[.]cc )
list(FILTER UTIL_SRCS EXCLUDE REGEX .*test[.]cc )

include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})
message(STATUS, "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message(STATUS, "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

add_library(common_util ${UTIL_SRCS})
target_link_libraries(common_util 
                      common::proto)


FOREACH(TEST_FILE ${UTIL_TEST_SRCS})  
    string( REGEX MATCH "[A-Za-z0-9_]*[.]cc" FILE_NAME ${TEST_FILE} ) 
    string( REGEX MATCH "[A-Za-z0-9_]*" TARGET_NAME ${FILE_NAME})
    list(APPEND TEST_TARGETS ${TARGET_NAME})
    add_executable(${TARGET_NAME} ${TEST_FILE})
    target_link_libraries(${TARGET_NAME} common_math common_proto common_util cyber gflags glog gtest gmock_main absl_strings absl_base 
                absl_log_severity absl_raw_logging_internal absl_int128 absl_throw_delegate)
    target_compile_options(${TARGET_NAME} PRIVATE -Og)
ENDFOREACH(TEST_FILE)

# add_executable(util_test util_test.cc)
# target_link_libraries(util_test gtest gtest_main common_proto)

# add_executable(message_util_test message_util_test.cc)
# target_link_libraries(message_util_test gtest gtest_main common_proto cyber gflags absl_strings absl_base absl_log_severity 
# absl_raw_logging_internal absl_int128 absl_throw_delegate)

# add_executable(string_util_test string_util_test.cc)
# target_link_libraries(string_util_test gtest gtest_main common_proto)

# add_executable(time_util_test time_util_test.cc)
# target_link_libraries(time_util_test gtest gtest_main common_proto)

# add_executable(factory_test factory_test.cc)
# target_link_libraries(factory_test gtest gtest_main common_proto cyber glog gflags)

# add_executable(lru_cache_test lru_cache_test.cc)
# target_link_libraries(lru_cache_test gtest gtest_main common_proto)

# add_executable(points_downsampler_test points_downsampler_test.cc)
# target_link_libraries(points_downsampler_test gtest gtest_main common_proto cyber glog gflags)

# add_executable(json_util_test json_util_test.cc)
# target_link_libraries(json_util_test gtest gtest_main common_proto)

# add_executable(perf_util_test perf_util_test.cc)
# target_link_libraries(perf_util_test gtest gtest_main common_proto)

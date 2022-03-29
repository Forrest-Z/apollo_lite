

file(GLOB AUDIO_INFERENCE_SRCS *.cc)
set(AUDIO_INFERENCE_TEST_SRCS ${AUDIO_INFERENCE_SRCS})
list(FILTER AUDIO_INFERENCE_TEST_SRCS INCLUDE REGEX .*test[.]cc )
list(FILTER AUDIO_INFERENCE_SRCS EXCLUDE REGEX .*test[.]cc )

include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})

message(STATUS, "PROJECT_SOURCE_DIR2: ${PROJECT_SOURCE_DIR}")
message(STATUS, "PROJECT_BINARY_DIR2: ${PROJECT_BINARY_DIR}")

include_directories(${PROJECT_SOURCE_DIR}/../../third_party/libtorch/include)
include_directories(${PROJECT_SOURCE_DIR}/../../third_party/libtorch/include/torch/csrc/api/include)

include_directories(${PROJECT_SOURCE_DIR}/../../third_party/yaml_cpp/usr/local/include)
include_directories(${PROJECT_SOURCE_DIR}/../../third_party/fftw3/usr/local/include)

link_directories(${PROJECT_SOURCE_DIR}/../../third_party/fftw3/usr/local/lib)
link_directories(${PROJECT_SOURCE_DIR}/../../third_party/libtorch/lib)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

add_library(audio_inference ${AUDIO_INFERENCE_SRCS})
target_link_libraries(audio_inference cyber)

# FOREACH(TEST_FILE ${AUDIO_INFERENCE_TEST_SRCS})  
# 	string( REGEX MATCH "[A-Za-z0-9_]*[.]cc" FILE_NAME ${TEST_FILE} ) 
# 	string( REGEX MATCH "[A-Za-z0-9_]*" TARGET_NAME ${FILE_NAME})
# 	list(APPEND TEST_TARGETS ${TARGET_NAME})
# 	add_executable(${TARGET_NAME} ${TEST_FILE})
# 	target_link_libraries(${TARGET_NAME} audio_proto  audio_inference common_math common_proto cyber gflags glog gtest gmock_main absl_strings absl_base 
#                 absl_log_severity absl_raw_logging_internal absl_int128 absl_throw_delegate 
#                 fftw3 torch c10 gomp onnx qnnpack tensorpipe cpuinfo dnnl fbjni)
# 	target_compile_options(${TARGET_NAME} PRIVATE -Og)
# ENDFOREACH(TEST_FILE)
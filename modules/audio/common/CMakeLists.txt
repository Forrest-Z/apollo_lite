

file(GLOB AUDIO_COMMON_SRCS *.cc)
set(AUDIO_COMMON_TEST_SRCS ${AUDIO_COMMON_SRCS})
list(FILTER AUDIO_COMMON_TEST_SRCS INCLUDE REGEX .*test[.]cc )
list(FILTER AUDIO_COMMON_SRCS EXCLUDE REGEX .*test[.]cc )

include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})
include_directories(${PROJECT_SOURCE_DIR}/../../third_party/libtorch/include)
include_directories(${PROJECT_SOURCE_DIR}/../../third_party/libtorch/include/torch/csrc/api/include)


find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

add_library(audio_common ${AUDIO_COMMON_SRCS})
target_link_libraries(audio_common cyber)


include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})
include_directories(${PROJECT_SOURCE_DIR}/../../third_party/libtorch/include)
include_directories(${PROJECT_SOURCE_DIR}/../../third_party/libtorch/include/torch/csrc/api/include)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

add_library(audio_offline_processing audio_offline_processing.cc)
target_link_libraries(audio_offline_processing cyber)


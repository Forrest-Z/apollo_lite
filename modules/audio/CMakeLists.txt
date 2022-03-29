project(audio)

add_subdirectory(proto)
add_subdirectory(common)
add_subdirectory(inference)
add_subdirectory(tools)


find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})

include_directories(${PROJECT_SOURCE_DIR}/../../third_party/libtorch/include)
include_directories(${PROJECT_SOURCE_DIR}/../../third_party/libtorch/include/torch/csrc/api/include)

add_library(audio_component audio_component.cc)
target_link_libraries(audio_component cyber)

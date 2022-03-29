cmake_minimum_required(VERSION 3.5.1)

include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})

add_library(common_latency_recorder latency_recorder.h)
target_link_libraries(common_latency_recorder ${PROTOBUF_LIBRARIES} common::proto)

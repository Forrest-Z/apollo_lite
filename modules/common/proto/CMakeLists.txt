cmake_minimum_required(VERSION 3.5.1)

file(GLOB PROTOS  *.proto)

PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS ${PROTOS})

include_directories(${PROTOBUF_INCLUDE_DIRS})

add_library(common_proto ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(common_proto ${PROTOBUF_LIBRARIES})
add_library(common::proto ALIAS common_proto)

install(TARGETS common_proto
        EXPORT apollo-export
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        INCLUDES DESTINATION .
        )

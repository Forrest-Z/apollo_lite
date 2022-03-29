cmake_minimum_required(VERSION 3.5.1)

set(PROTOS adapter_config.proto)

PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS ${PROTOS})

include_directories(${PROTOBUF_INCLUDE_DIRS})

add_library(adapter_config_proto ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(adapter_config_proto
        ${PROTOBUF_LIBRARIES}
        common::proto)
add_library(common::adapter_config_proto ALIAS adapter_config_proto)

#install(TARGETS common_adapter_config_proto
#        EXPORT  apollo-export
#        LIBRARY DESTINATION lib
#        ARCHIVE DESTINATION lib
#        RUNTIME DESTINATION bin
#        INCLUDES DESTINATION .
#        )

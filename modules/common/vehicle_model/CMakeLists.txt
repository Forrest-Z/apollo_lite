cmake_minimum_required(VERSION 3.5.1)

include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})

add_library(common_vehicle_model vehicle_model.cc)
target_link_libraries(common_vehicle_model
    cyber
    common_proto)

# add_executable(vehicle_model_test vehicle_model_test.cc)
# target_link_libraries(vehicle_model_test common_math common_proto cyber gflags glog gtest gmock_main 
#          common_vehicle_model
#          common_vehicle_state_provider
#          absl_strings absl_base 
#          absl_log_severity absl_raw_logging_internal absl_int128 absl_throw_delegate
#         )
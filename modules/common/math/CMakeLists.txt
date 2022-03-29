cmake_minimum_required(VERSION 3.5.1)


add_subdirectory(qp_solver)

file(GLOB MATH_SRCS *.cc)
set(MATH_TEST_SRCS ${MATH_SRCS})
list(FILTER MATH_TEST_SRCS INCLUDE REGEX .*test[.]cc )
list(FILTER MATH_SRCS EXCLUDE REGEX .*test[.]cc )

include_directories(${PROJECT_SOURCE_DIR}/../../)
include_directories(${PROJECT_BINARY_DIR})
message(STATUS, "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message(STATUS, "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

find_package(Eigen3 REQUIRED)
message(STATUS, "EIGEN3_INCLUDE_DIR: ${EIGEN3_INCLUDE_DIR}")
include_directories(${EIGEN3_INCLUDE_DIR})

add_library(common_math ${MATH_SRCS})
target_link_libraries(common_math cyber absl_strings)

#build tests
FOREACH(TEST_FILE ${MATH_TEST_SRCS})  
	string( REGEX MATCH "[A-Za-z0-9_]*[.]cc" FILE_NAME ${TEST_FILE} ) 
	string( REGEX MATCH "[A-Za-z0-9_]*" TARGET_NAME ${FILE_NAME})
	list(APPEND TEST_TARGETS ${TARGET_NAME})
	add_executable(${TARGET_NAME} ${TEST_FILE})
	target_link_libraries(${TARGET_NAME} common_qp_solver common_math common_proto cyber gflags glog gtest gmock_main absl_strings absl_base 
                absl_log_severity absl_raw_logging_internal absl_int128 absl_throw_delegate osqp)
	target_compile_options(${TARGET_NAME} PRIVATE -Og)
ENDFOREACH(TEST_FILE)

# add_executable(math_utils_test math_utils_test.cc)
# target_link_libraries(math_utils_test gtest
#                                       gtest_main
#                                       common::geometry
#                                       ${osqp_LIBRARIES})

# add_executable(linear_interpolation_test linear_interpolation_test.cc)
# target_link_libraries(linear_interpolation_test gtest
#                                                 gtest_main
#                                                 common::linear_interpolation)

# add_executable(search_test search_test.cc)
# target_link_libraries(search_test gtest gtest_main
# common::search)

# add_executable(integral_test integral_test.cc)
# target_link_libraries(integral_test gtest gtest_main
# common::integral)

# add_executable(vec2d_test vec2d_test.cc)
# target_link_libraries(vec2d_test gtest gtest_main
# common::geometry)

# add_executable(quaternion_test quaternion_test.cc)
# target_link_libraries(quaternion_test gtest gtest_main
# common::quaternion)

# add_executable(euler_angles_zxy_test euler_angles_zxy_test.cc)
# target_link_libraries(euler_angles_zxy_test gtest gtest_main
# common::euler_angles_zxy)

# add_executable(aabox2d_test aabox2d_test.cc)
# target_link_libraries(aabox2d_test gtest gtest_main
# common::geometry)

# add_executable(aaboxkdtree2d_test aaboxkdtree2d_test.cc)
# target_link_libraries(aaboxkdtree2d_test gtest gtest_main
# common::geometry)

# add_executable(box2d_test box2d_test.cc)
# target_link_libraries(box2d_test gtest gtest_main
# common::geometry)

# add_executable(polygon2d_test polygon2d_test.cc)
# target_link_libraries(polygon2d_test gtest gtest_main
# common::geometry)

# add_executable(line_segment2d_test line_segment2d_test.cc)
# target_link_libraries(line_segment2d_test gtest gtest_main
# common::geometry)

# add_executable(kalman_filter_test kalman_filter_test.cc)
# target_link_libraries(kalman_filter_test gtest gtest_main
# common::kalman_filter)

# add_executable(cartesian_frenet_conversion_test cartesian_frenet_conversion_test.cc)
# target_link_libraries(cartesian_frenet_conversion_test gtest gtest_main
# common::cartesian_frenet_conversion)

# add_library(common_math_module INTERFACE)
# target_link_libraries(common_math_module INTERFACE
#         common_angle
#         common_geometry
#         common_sin_table
#         common_euler_angles_zxy
#         common_quaternion
#         common_curve_fitting
#         common_matrix_operations
#         common_kalman_filter
#         common_extended_kalman_filter
#         common_factorial
#         common_path_matcher
#         common_linear_interpolation
#         common_nonlinear_interpolation
#         common_search
#         common_integral
#         common_lqr
#         common_mpc
#         common_cartesian_frenet_conversion
#         common_hermite_spline
#         common_math
#         )

# install(TARGETS common_geometry
#                 common_angle
#                 common_sin_table
#                 common_euler_angles_zxy
#                 common_quaternion
#                 common_curve_fitting
#                 common_matrix_operations
#                 common_kalman_filter
#                 common_extended_kalman_filter
#                 common_factorial
#                 common_path_matcher
#                 common_linear_interpolation
#                 common_nonlinear_interpolation
#                 common_search
#                 common_integral
#                 common_lqr
#                 common_mpc
#                 common_cartesian_frenet_conversion
#                 common_hermite_spline
#                 common_math
#                 common_math_module
#         EXPORT  apollo-export
#         LIBRARY DESTINATION lib
#         ARCHIVE DESTINATION lib
#         RUNTIME DESTINATION bin
#         INCLUDES DESTINATION .
#         )

# install(TARGETS mpc_test
#                 angle_test
#                 math_utils_test
#                 linear_interpolation_test
#                 search_test
#                 integral_test
#                 vec2d_test
#                 quaternion_test
#                 euler_angles_zxy_test
#                 aabox2d_test
#                 aaboxkdtree2d_test
#                 box2d_test
#                 polygon2d_test
#                 line_segment2d_test
#                 kalman_filter_test
#         LIBRARY DESTINATION lib
#         ARCHIVE DESTINATION lib
#         RUNTIME DESTINATION bin
#         INCLUDES DESTINATION .
#         )

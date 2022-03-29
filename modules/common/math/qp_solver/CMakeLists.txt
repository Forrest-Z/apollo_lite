cmake_minimum_required(VERSION 3.5.1)

include_directories(${PROJECT_SOURCE_DIR}/../../)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

add_library(common_qp_solver qp_solver.cc)
# target_link_libraries(common_qp_solver ${eigen_LIBRARIES})
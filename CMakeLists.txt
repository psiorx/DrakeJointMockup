cmake_minimum_required(VERSION 2.8)
project(DrakeJointMockup)

if (APPLE)
  set(CMAKE_MACOSX_RPATH ON)
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

find_package(Eigen3 3.2)
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(Option3 Option3.cpp)

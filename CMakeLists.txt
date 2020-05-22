cmake_minimum_required(VERSION 2.6)
project(EigenDemo)

set(CMAKE_CXX_STANDARD 11)
find_package (Eigen3 3.3 REQUIRED NO_MODULE)
include_directories(${EIGEN3_INCLUDE_DIR})

if(EIGEN3_FOUND)
message("found eigen3")
endif()

add_executable(helloworld helloworld)
add_executable(init init)
add_executable(arithmetic arithmetic)
add_executable(array array)
add_executable(block block)

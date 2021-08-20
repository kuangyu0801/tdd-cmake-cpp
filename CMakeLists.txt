cmake_minimum_required(VERSION 3.14)

# set project name
project(cpp-tdd)

# set c++ standard
set(CMAKE_CXX_STANDARD 14)

# set include files
include_directories(src)

# set cpp standard to c11
set(CMAKE_CXX_STANDARD 11)

# add subdirectory each contains own CMakeLists.txt
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/gtest)
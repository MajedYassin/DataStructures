cmake_minimum_required(VERSION 3.17)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructures main.cpp Source/DataStructures.h Source/DataStructures.cpp)

include(FetchContent)

FetchContent_declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.8.0
)

add_subdirectory(Source)




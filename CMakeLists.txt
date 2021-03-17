cmake_minimum_required(VERSION 3.17)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)

FetchContent_declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.8.0
)

include_directories(Source)
add_subdirectory(Source)
add_executable(DataStructures main.cpp)
target_link_libraries(DataStructures datastruct_library)




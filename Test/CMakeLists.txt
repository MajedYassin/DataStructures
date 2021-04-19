cmake_minimum_required(VERSION 3.17)

project(DataStructures)

include_directories(Source)
add_executables(run_tests LinkedList_tests)

target_link_libraries(run_tests PUBLIC datastruct_library)
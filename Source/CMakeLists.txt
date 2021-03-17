cmake_minimum_required(VERSION 3.17)

# make static data structure static library
add_library(datastruct_library "${DataStructures_SOURCE_DIR}/Source/DataStructures.cpp" "${DataStructures_SOURCE_DIR}/Source/DataStructures.h")
cmake_minimum_required(VERSION 3.3)
project(Assignment_7_Heap_Sort_)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Functions.h Heap.h Heap.cpp input.txt InstructionsHeader.cpp PrintHeader.cpp ReadFromFile.cpp Team.cpp Team.h Fill.cpp MessageClass.h)
add_executable(Assignment_7_Heap_Sort_ ${SOURCE_FILES})
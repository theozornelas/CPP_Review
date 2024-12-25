cmake_minimum_required(VERSION 3.3)
project(CPP_Review)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(SOURCE_FILES main.cpp Functions.h Heap.h Heap.cpp input.txt InstructionsHeader.cpp PrintHeader.cpp ReadFromFile.cpp Team.cpp Team.h Fill.cpp MessageClass.h)
add_executable(heap ${SOURCE_FILES})
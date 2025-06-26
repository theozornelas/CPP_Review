cmake_minimum_required(VERSION 3.3)
project(Sorting)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(SOURCE_FILES
    source/TestDriver.h
    source/SortManager.h
    source/CreateArrays.cpp
    source/Fill.cpp
    source/Functions.h
    source/GenerateTable.cpp
    source/Heap.cpp
    source/Heap.h
    source/HeapSort.cpp
    source/InstructionsHeader.cpp
    source/main.cpp
    source/MergeSort.cpp
    source/nSqrtSorts.cpp
    source/PrintArrays.cpp
    source/PrintHeader.cpp
    source/QuickSort.cpp
    source/RadixSort.cpp
)
add_executable(sort ${SOURCE_FILES})
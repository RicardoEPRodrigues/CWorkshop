cmake_minimum_required(VERSION 3.2)
project(Sorting)

#set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -Wextra -pedantic -g3 -Og -Wuninitialized -ansi")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Ofast")


IF (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-DDEBUG)
ENDIF()

set(CENIX_SOURCE_FILES
        sorting.c
        Objects.c Objects.h
        SelectionSort.h SelectionSort.c
        InsertionSort.c InsertionSort.h
        BubbleSort.c BubbleSort.h
        HeapSort.c HeapSort.h
        QuickSort.c QuickSort.h)
add_executable(sorting.run ${CENIX_SOURCE_FILES})
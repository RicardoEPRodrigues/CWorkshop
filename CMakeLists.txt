cmake_minimum_required(VERSION 3.8)
project(CWorkshop10_17)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -Wextra -pedantic -g3 -Og -Wuninitialized")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Ofast")

set(CALCULATOR_SOURCE_FILES calculator.c)
add_executable(CWorkshop10_17-Calculator ${CALCULATOR_SOURCE_FILES})

set(CENIX_SOURCE_FILES Cenix/Student.h Cenix/Course.h Cenix/cenix.c Cenix/Student.c Cenix/Course.c)
add_executable(CWorkshop10_17-Cenix ${CENIX_SOURCE_FILES})
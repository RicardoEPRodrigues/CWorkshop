cmake_minimum_required(VERSION 3.8)
project(CWorkshop-Cenix)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -Wextra -pedantic -g3 -Og -Wuninitialized")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Ofast")

set(CENIX_SOURCE_FILES Student.h Course.h cenix.c Student.c Course.c)
add_executable(cenix.run ${CENIX_SOURCE_FILES})
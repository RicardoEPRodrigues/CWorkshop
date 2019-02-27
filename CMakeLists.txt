cmake_minimum_required(VERSION 3.2)
project(CWorkshop)

if (WIN32) # WINDOWS specific properties
    add_definitions(-DOS_WIN)
elseif (APPLE)
    add_definitions(-DOS_MAC)
elseif (UNIX AND NOT APPLE)
    add_definitions(-DOS_LINUX)
endif ()

add_subdirectory(Calculator)

add_subdirectory(Cenix)

add_subdirectory(Sorting)
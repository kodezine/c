cmake_minimum_required(VERSION 3.2)
project(cPrograms)
add_subdirectory(programs/consequtive)
if (CMAKE_BUILD_TYPE STREQUAL "Test")
    enable_testing()
    include(CTest)

    include(cmake/unity.cmake)
    include(cmake/cmock.cmake)
    include(cmake/MockList.cmake)

    add_subdirectory(programs/consequtive/test)
endif( CMAKE_BUILD_TYPE STREQUAL "Test")

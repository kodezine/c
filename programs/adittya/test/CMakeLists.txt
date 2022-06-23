cmake_minimum_required(VERSION 3.21)

# NOTE: Project name MUST match the test file name
project(
    ut_adittya
)

# Add test sources here ...
set(TEST_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/../adittya.c
)

# DO NOT ADD ANY-THING IN THE VARIABLE BELOW
set(TEST_INCLUDE_DIR
    ${CMAKE_CURRENT_LIST_DIR}/..
)

# Add optional include files here based on architecture ...
if("${CMAKE_SYSTEM_PROCESSOR}" STREQUAL "cortex-m7")
    set(OTHER_INCLUDE_DIR
    )
else()
    set(OTHER_INCLUDE_DIR
    )
endif()

# Reconfigure the unity to use this as runner for this project
set(UNITY_TEST_RUNNER_PATH ${CMAKE_CURRENT_BINARY_DIR}/runner)
file(MAKE_DIRECTORY ${UNITY_TEST_RUNNER_PATH})
execute_process(
    COMMAND ruby ${CREATE_RUNNER_RUBY_PATH}/create_runner.rb ${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}.c ${UNITY_TEST_RUNNER_PATH}/${PROJECT_NAME}_runner.c
)

if(CMAKE_SYSTEM_PROCESSOR)
    if("${CMAKE_SYSTEM_PROCESSOR}" STREQUAL "cortex-m7")
        include(${arm_cc_PATH}/arm_cc.cmake)
    else()
        include(${x86_64_cc_PATH}/x86_64_cc.cmake)
    endif()
else()
    message(STATUS "[${PROJECT_NAME}] compiling with unknown architecture")
endif()

# Add optional definitions here ...
target_compile_definitions(${PROJECT_NAME}
    PRIVATE
)

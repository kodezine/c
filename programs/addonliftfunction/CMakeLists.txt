project(addonliftfunction)

set (LIB_SOURCES ${CMAKE_CURRENT_LIST_DIR}/consequtive.c)

set (LIB_HEADERS ${CMAKE_CURRENT_LIST_DIR}/consequtive.h)

add_library(${PROJECT_NAME} STATIC
    ${LIB_SOURCES}
)

add_executable(${PROJECT_NAME}_exe
    ${CMAKE_CURRENT_LIST_DIR}/main.c
)

target_link_libraries(${PROJECT_NAME}_exe
    ${PROJECT_NAME}
)


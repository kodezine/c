project(experiments)

set (LIB_SOURCES 
    ${CMAKE_CURRENT_LIST_DIR}/pyramid.c
    ${CMAKE_CURRENT_LIST_DIR}/stars.c
)

set (LIB_HEADERS ${CMAKE_CURRENT_LIST_DIR}/pyramid.h)

add_library(${PROJECT_NAME} STATIC
    ${LIB_SOURCES}
)

add_executable(${PROJECT_NAME}_exe
    ${CMAKE_CURRENT_LIST_DIR}/main.c
    ${CMAKE_CURRENT_LIST_DIR}/common.c
)

target_link_libraries(${PROJECT_NAME}_exe
    ${PROJECT_NAME}
)


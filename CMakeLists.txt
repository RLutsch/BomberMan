cmake_minimum_required(VERSION 2.8)
project(Bomberman)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

set(SOURCE_FILES
    main.cpp
    src/front/Shaders.cpp
)

find_package(OpenGL REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW    REQUIRED glfw3)
pkg_search_module(GLEW    REQUIRED glew)
pkg_search_module(GLM    REQUIRED glm)

include_directories(${GLFW_INCLUDE_DIRS})
include_directories(${GLEW_INCLUDE_DIRS})
include_directories(${GLM_INCLUDE_DIRS})

link_directories(${GLFW_LIBRARY_DIRS})
link_directories(${GLEW_LIBRARY_DIRS})
link_directories(${GLM_LIBRARY_DIRS})

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME}
    ${OPENGL_LIBRARIES}
    ${GLFW_LIBRARIES}
    ${GLEW_LIBRARIES}
    ${GLM_LIBRARIES}
    ${GLFW_STATIC_LIBRARIES}
)

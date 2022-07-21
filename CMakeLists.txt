cmake_minimum_required(VERSION 3.22)
project(GameTemplate)

find_package(glm CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Engine)

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )

file(GLOB SRCS src/**.cpp src/**.h src/**.hpp)

add_library(GameModule SHARED ${SRCS})
add_library(GameStatic STATIC ${SRCS})

set(INCLUDE_DIRS Engine/Include Include)
set(LINK_LIBS Engine glm::glm)

target_include_directories(GameModule PRIVATE ${INCLUDE_DIRS})
target_link_libraries(GameModule ${LINK_LIBS})
target_link_directories(GameModule PRIVATE Engine)

target_include_directories(GameStatic PRIVATE ${INCLUDE_DIRS})
target_link_libraries(GameStatic ${LINK_LIBS})
target_link_directories(GameStatic PRIVATE Engine)


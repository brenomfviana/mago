cmake_minimum_required(VERSION 3.13)

project(MAGO VERSION 1.0
        DESCRIPTION "MAGO is a maze generator and solver"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

################################################################################
# Libraries

add_library(maze STATIC
  src/maze/cell.cpp
  src/maze/maze.cpp)
target_include_directories(maze PUBLIC include)

add_library(printer STATIC
  src/maze/cell.cpp
  src/maze/maze.cpp
  src/printer.cpp)
target_include_directories(printer PUBLIC include)

add_library(btgenerator STATIC
  src/maze/cell.cpp
  src/maze/maze.cpp
  src/generator/btgenerator.cpp)
target_include_directories(btgenerator PUBLIC include)

################################################################################
# Executables

add_executable(${PROJECT_NAME} src/mago.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE maze)
target_link_libraries(${PROJECT_NAME} PRIVATE btgenerator)
target_link_libraries(${PROJECT_NAME} PRIVATE printer)

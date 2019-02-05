cmake_minimum_required(VERSION 3.1...3.13)

if(${CMAKE_VERSION} VERSION_LESS 3.13)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
else()
    cmake_policy(VERSION 3.13)
endif()

project(MAGOS VERSION 1.0
        DESCRIPTION "MAGOS is a maze generator and solver"
        LANGUAGES CXX)

add_library(maze STATIC
  src/maze/cell.cpp
  include/maze/cell.hpp
  src/maze/maze.cpp
  include/maze/maze.hpp)
target_include_directories(maze PUBLIC include)
target_compile_features(maze PUBLIC cxx_std_11)

add_library(printer STATIC
  src/maze/cell.cpp
  include/maze/cell.hpp
  src/maze/maze.cpp
  include/maze/maze.hpp
  src/printer.cpp
  include/printer.hpp)
target_include_directories(printer PUBLIC include)
target_compile_features(printer PUBLIC cxx_std_11)

add_library(btgenerator STATIC
  src/maze/cell.cpp
  include/maze/cell.hpp
  src/maze/maze.cpp
  include/maze/maze.hpp
  include/generator/generator.hpp
  src/generator/btgenerator.cpp
  include/generator/btgenerator.hpp)
target_include_directories(btgenerator PUBLIC include)
target_compile_features(btgenerator PUBLIC cxx_std_11)

add_executable(${PROJECT_NAME} src/magos.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC maze)
target_link_libraries(${PROJECT_NAME} PUBLIC btgenerator)
target_link_libraries(${PROJECT_NAME} PUBLIC printer)

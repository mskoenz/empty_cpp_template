#=================== general settings ===================
cmake_minimum_required (VERSION 3.0)

project("ExplInst")
enable_testing()

#=================== compiler & flags ===================
SET(CMAKE_CXX_COMPILER "g++")
# template depth is needed to slow down compilation
SET(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic -Werror -std=c++14 -O3 -march=core2 -ftemplate-depth=10000")
#~ SET(CMAKE_CXX_COMPILER "clang++")
#~ SET(CMAKE_CXX_FLAGS "-Wextra -Wpedantic -std=c++1z -O3 -march=core2 -Wno-undefined-inline -ftemplate-depth=10000")

#~ SET(CMAKE_EXE_LINKER_FLAGS "-pg")

#=================== set paths ===================
set(SRC ${PROJECT_SOURCE_DIR}/src)
set(BUILD ${PROJECT_BINARY_DIR})
set(EXTERN ${PROJECT_SOURCE_DIR}/extern)

# add the explicit instanciation to the LIB
set(LIB ${LIB} expl_inst)

#=================== include directories ===================
include_directories(${SRC})

#=================== added subdirs ===================
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/example)

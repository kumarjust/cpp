cmake_minimum_required(VERSION 3.2)

project(hello_world)
set(CMAKE_CODEBLOCKS_EXCLUDE_EXTERNAL_FILES)
add_executable(agcc agcc.cpp ) 
add_executable(cond condition.cpp ) 
add_executable(loop loop.cpp ) 
add_executable(array array.cpp ) 
add_executable(function function.cpp ) 
add_executable(arraypointer arraypointer.cpp )
add_executable(class class.cpp )
add_executable(d_memory d_memory.cpp )
add_executable(d_malloc d_malloc.cpp )
add_executable(d_calloc d_calloc.cpp )
add_executable(struct struct.cpp)
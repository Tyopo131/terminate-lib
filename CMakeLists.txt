cmake_minimum_required(VERSION 3.31.6)
option(COMPILE_AS_SHARED_LIBRARY "Compile as a shared library (.dll, .so, .dylib) if on, compile as a static library (.lib, .a) if off (default OFF)" OFF)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(terminate LANGUAGES CXX)

set(SRC
    "src/clear.cpp"
)

if (COMPILE_AS_SHARED_LIBRARY) 
    add_library(terminate SHARED ${SRC})
    message(STATUS "Will compile as a shared library. (.dll, .so, .dylib)")
    

else() 
    add_library(terminate STATIC ${SRC})
    message(STATUS "Will compile as a static library. (.lib, .a)")
endif()
target_include_directories(terminate PRIVATE "include/terminate/")
include_directories(PRIVATE "include")

add_executable(ExampleProject example/example.cpp)
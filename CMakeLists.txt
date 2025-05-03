# Copyright (C) 2025 Tyopo131
# SPDX-License-Identifier: LGPL-3.0-only

cmake_minimum_required(VERSION 3.31.6)
option(COMPILE_AS_SHARED_LIBRARY "Compile as a shared library (.dll, .so, .dylib) if on, compile as a static library (.lib, .a) if off (default OFF)" OFF)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(terminate LANGUAGES CXX)

set(SRC
    "src/clear.cpp"
    "include/terminate/asciicodes.h"
    "include/terminate/libinfo.h"
    "include/terminate/clear.h"
    "include/terminate/cursor.h"
    "src/cursor.cpp"
    "include/terminate/terminalpos.h"
    "src/terminalpos.cpp"
)

if (COMPILE_AS_SHARED_LIBRARY) 
    add_library(terminate SHARED ${SRC})
    message(STATUS "Will compile as a shared library. (.dll, .so, .dylib)")
    set_target_properties(terminate PROPERTIES
        VERSION 0.0.0
        SOVERSION 0
        LIBRARY_OUTPUT_NAME terminate
        SUFFIX .so
        WINDOWS_EXPORT_ALL_SYMBOLS ON

    )

    
else() 
    add_library(terminate STATIC ${SRC})
    message(STATUS "Will compile as a static library. (.lib, .a)")
endif()
target_include_directories(terminate PRIVATE "include/terminate/")
target_include_directories(terminate PRIVATE "include/")
add_executable(ExampleProject example/example.cpp)
target_include_directories(ExampleProject PRIVATE "include/")
target_link_libraries(ExampleProject PUBLIC terminate)

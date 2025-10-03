cmake_minimum_required(VERSION 4.0)
project(CatalystEngineV2)

set(CMAKE_CXX_STANDARD 26)

# set the output directory for built objects.
# This makes sure that the dynamic library goes into the build directory automatically.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

# This assumes the SDL source is available in vendored/SDL
add_subdirectory(vendored/SDL EXCLUDE_FROM_ALL)

add_library(CatalystEngineV2 STATIC
        Input/Input.cpp
        Input/Input.h
)

target_link_libraries(CatalystEngineV2 PRIVATE SDL3::SDL3)
target_include_directories(CatalystEngineV2 PRIVATE vendored/SDL/include)

cmake_minimum_required(VERSION 3.20)
project(CatalystEngineV2)

set(CMAKE_CXX_STANDARD 26)

# Set up build output dirs
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

# ---------------------------------------------------------
# Option: Should we use the vendored SDL?
# ---------------------------------------------------------
option(CATALYSTENGINE_USE_VENDORED_SDL "Use vendored SDL/SDL_image inside this repo" ON)

if(CATALYSTENGINE_USE_VENDORED_SDL)
    message(STATUS "CatalystEngineV2: Using vendored SDL and SDL_image")
    add_subdirectory(vendored/SDL EXCLUDE_FROM_ALL)
    add_subdirectory(vendored/SDL_image EXCLUDE_FROM_ALL)
else()
    message(STATUS "CatalystEngineV2: Using parent-provided SDL and SDL_image")
endif()

# ---------------------------------------------------------
# CatalystEngine library
# ---------------------------------------------------------
add_library(CatalystEngineV2 STATIC
        Input/Input.cpp
        Input/Input.h
        Shapes/Shapes.cpp
        Shapes/Shapes.h
        Flags/Flags.h
)

# Link SDL libs
target_link_libraries(CatalystEngineV2 PRIVATE
        SDL3::SDL3
        SDL3_image::SDL3_image
)

# Engine include dirs
target_include_directories(CatalystEngineV2 PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/Input
        ${CMAKE_CURRENT_SOURCE_DIR}/Shapes
        ${CMAKE_CURRENT_SOURCE_DIR}/Flags

)




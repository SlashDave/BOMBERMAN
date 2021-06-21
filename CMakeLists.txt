cmake_minimum_required(VERSION 3.1)
project(IndieStudio CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-W -Wextra -Werror")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Findraylib.cmake")

find_package(raylib QUIET)

#Setting parameters for raylib
#set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
#set(BUILD_GAMES OFF CACHE BOOL "" FORCE) # or games

#add_subdirectory(libs/raylib)

include_directories(
    "inc/*.hpp"
    "inc/engine/*.hpp"
    "inc/interfaces/*.hpp"
    "inc/raylib/*.hpp"
    "inc/scenes/*.hpp" 
)

file(
    GLOB SRC
    "src/engine/*.cpp"
    "src/game/*.cpp"
    "src/raylib/*.cpp"
    "src/scenes/*.cpp"
    "src/*.cpp"
    "main.cpp"
    "controllers.cpp"
)

add_executable(bomberman ${SRC})
#target_compile_options(bomberman PRIVATE -g3)
target_link_libraries(bomberman PRIVATE raylib)
target_compile_definitions(bomberman PUBLIC ASSETS_PATH="${CMAKE_CURRENT_SOURCE_DIR}/assets/") # Set the asset path to the absolute path
cmake_minimum_required(VERSION 3.21.1)
project(Emmett)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

file( GLOB SRC src/*.cpp)
file( GLOB GRAPHICAL src/graphical/*.cpp)
file( GLOB NO_GRAPHICAL src/no_graphical/*.cpp)
file( GLOB INCLUDE include/*.hpp)

add_executable(Marty
        ${SRC}
        ${NO_GRAPHICAL}
        ${INCLUDE})

add_executable(MartyGraphical
        ${SRC}
        ${GRAPHICAL}
        ${INCLUDE})


#CHANGE THIS TO YOUR SFML DIRECTORY
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML/include)
target_link_libraries(MartyGraphical -mwindows sfml-system sfml-window sfml-graphics sfml-audio sfml-network)

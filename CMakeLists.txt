cmake_minimum_required(VERSION 3.16)
project(media-grabber-x CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(mediagrabberx
    src/main.cpp
    src/grabber.cpp
    src/sites.cpp
    src/convert.cpp
)

target_include_directories(mediagrabberx PRIVATE include)

if(WIN32)
    target_link_libraries(mediagrabberx PRIVATE userenv)
endif()

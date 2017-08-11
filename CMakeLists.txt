cmake_minimum_required(VERSION 2.8)
project(gmockglobal_sample)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMake")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")

add_definitions( -DUNICODE -D_UNICODE )

add_subdirectory(src/3rd-party/googletest EXCLUDE_FROM_ALL)

include_directories(src/3rd-party/googletest/googletest/include)
include_directories(src/3rd-party/googletest/googlemock/include)
include_directories(src/3rd-party/gmockglobal/include)

add_executable(gmockglobal_sample src/sample/main.cpp src/3rd-party/gmockglobal/include/gmockglobal/gmockglobal.h)

target_link_libraries (gmockglobal_sample gmock_main)
cmake_minimum_required(VERSION 2.8)
project(gmock-global-sample)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMake")
if (MSVC)
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
    add_definitions(-DUNICODE -D_UNICODE)
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
endif()

add_subdirectory(3rd-party/googletest EXCLUDE_FROM_ALL)

include_directories(3rd-party/googletest/googletest/include)
include_directories(3rd-party/googletest/googlemock/include)
include_directories(3rd-party/gmock-global/include)

add_executable(gmock-global-sample sample/main.cpp)

target_link_libraries(gmock-global-sample gmock_main)
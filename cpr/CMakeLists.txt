cmake_minimum_required(VERSION 3.0)

set (PROJECT cpr)
project(${PROJECT})

file(GLOB SRC_CPR src/*.cpp)

include_directories(${LOCAL_INCLUDES_DIR})
include_directories(include)

add_library(${PROJECT} STATIC ${SRC_CPR})
if(ANDROID)
	target_link_libraries(${PROJECT} curl z)
else()
	target_link_libraries(${PROJECT} libcurl)
endif()
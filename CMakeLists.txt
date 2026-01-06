cmake_minimum_required(VERSION 3.25)
project(parent)

set(CMAKE_CXX_STANDARD 17)
#set(SRC_LIST add.cpp src/sub.cpp src/mult.cpp src/div.cpp)

#set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
#file(GLOB_RECURSE SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
#set(APP_NAME_1 test1)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)
#file(GLOB_RECURSE SRC_LIST ${PROJECT_SOURCE_DIR}/src/*.cpp)
#file(GLOB_RECURSE HEAD_LIST ${PROJECT_SOURCE_DIR}/include/*.h)
#include_directories(${PROJECT_SOURCE_DIR}/include)

#link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
#link_libraries(learncplusplus)

#add_executable(learncplusplus main.cpp ${SRC_LIST})
#add_library(learncplusplus SHARED ${SRC_LIST})
#add_executable(calc ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
#target_link_libraries(calc learncplusplus)
set(EXEC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
add_subdirectory(const)
add_subdirectory(calc)

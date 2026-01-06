cmake_minimum_required(VERSION 3.25)
project(calc)

set(CMAKE_CXX_STANDARD 17)
#set(SRC_LIST add.cpp src/sub.cpp src/mult.cpp src/div.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)
#file(GLOB_RECURSE SRC_LIST ${PROJECT_SOURCE_DIR}/src/*.cpp)
#file(GLOB_RECURSE HEAD_LIST ${PROJECT_SOURCE_DIR}/include/*.h)
#include_directories(${PROJECT_SOURCE_DIR}/include)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
#link_libraries(learncplusplus)

#add_executable(learncplusplus main.cpp ${SRC_LIST})
#add_library(learncplusplus SHARED ${SRC_LIST})

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
add_executable(calc ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp ../const/main.cpp ../const/src/definetest.cpp ../const/include/definetest.h)
target_link_libraries(calc learncplusplus)
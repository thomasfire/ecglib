cmake_minimum_required(VERSION 3.17)
project(ecglib C)

set(CMAKE_C_STANDARD 11)

file(GLOB SOURCES src/*.c)

include_directories(include)

add_library(${PROJECT_NAME} ${SOURCES})
#add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} m)

install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})

file(GLOB HEADERS include/*.h)
install(FILES ${HEADERS} DESTINATION include/${PROJECT_NAME})
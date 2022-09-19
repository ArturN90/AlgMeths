cmake_minimum_required(VERSION  3.16.3)
project(directory_test)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(test ${SOURCES})


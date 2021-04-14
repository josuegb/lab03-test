cmake_minimum_required(VERSION 3.14)
project(lab03)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES Main.cpp Person.cpp Person.h Professor.cpp Professor.h
        University.cpp University.h Student.cpp Student.h)

add_executable(lab03 ${SOURCE_FILES})
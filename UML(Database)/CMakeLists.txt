cmake_minimum_required(VERSION 3.21)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        untitled1
        main.cpp
        Database.cpp
        Database.h
        Entry.cpp
        Entry.h
        StringData.cpp
        StringData.h
        IntegerData.cpp
        IntegerData.h

)

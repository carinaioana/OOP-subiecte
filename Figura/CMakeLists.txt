cmake_minimum_required(VERSION 3.22)
project(Figura)

set(CMAKE_CXX_STANDARD 14)

add_executable(Figura main.cpp Figura.cpp Figura.h FiguriContainer.cpp FiguriContainer.h Color.cpp Color.h Cerc.cpp Cerc.h Dreptunghi.cpp Dreptunghi.h Patrat.cpp Patrat.h)

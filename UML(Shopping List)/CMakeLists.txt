cmake_minimum_required(VERSION 3.21)
project(UML_Shopping_List_)

set(CMAKE_CXX_STANDARD 14)

add_executable(UML_Shopping_List_ main.cpp Item.cpp Item.h ShoppingList.cpp ShoppingList.h Food.cpp Food.h Miscellaneous.cpp Miscellaneous.h)

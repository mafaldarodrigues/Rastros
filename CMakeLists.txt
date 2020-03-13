cmake_minimum_required(VERSION 3.15)
project(Rastros C)

set(CMAKE_C_STANDARD 11)

add_executable(Rastros main.c data.h dados.c dados.h interface.c interface.h logica.c logica.h)
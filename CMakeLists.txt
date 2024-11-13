cmake_minimum_required(VERSION 3.26)
project(03_poligonos_01)

set(CMAKE_CXX_STANDARD 23)

add_executable(03_poligonos_01 main.cpp
        CTriangulo.cpp
        CTriangulo.h
        CCuadrado.cpp
        CCuadrado.h
        CHexagono.cpp
        CHexagono.h
        Definiciones.h
        CPoligono.cpp
        CPoligono.h)

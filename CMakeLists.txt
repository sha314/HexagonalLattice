cmake_minimum_required(VERSION 3.0)

project(HexagonalLattice)

set(CMAKE_CXX_STANDARD 11)

#SET(CMAKE_CXX_FLAGS  "-pthread -fopenmp")

set(SOURCE_FILES
        src/main.cpp
        src/lattice/hex_lattice.cpp
        src/lattice/hex_lattice.h)

add_executable(hexLattice ${SOURCE_FILES})

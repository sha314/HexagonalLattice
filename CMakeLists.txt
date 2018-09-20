cmake_minimum_required(VERSION 3.0)

project(HexagonalLattice)

set(CMAKE_CXX_STANDARD 11)

#SET(CMAKE_CXX_FLAGS  "-pthread -fopenmp")

set(SOURCE_FILES
        src/main.cpp
        src/lattice/hex_lattice.cpp
        src/lattice/hex_lattice.h
        src/time_tracking.cpp
        src/time_tracking.h
        src/lattice/vertex.cpp
        src/lattice/vertex.h
        src/lattice/edge.cpp
        src/lattice/edge.h
        src/lattice/index.cpp
        src/lattice/index.h)

add_executable(hexLattice ${SOURCE_FILES})

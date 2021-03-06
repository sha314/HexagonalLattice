//
// Created by shahnoor on 9/15/18.
//

#ifndef HEXAGONALLATTICE_HEX_LATTICE_H
#define HEXAGONALLATTICE_HEX_LATTICE_H

#include <vector>
#include <array>
#include "vertex.h"
#include "edge.h"


class HexagonalLattice{
    size_t _length;
    std::vector<std::vector<Vertex>> _vertices;
    std::vector<std::vector<Edge>> _h_edges; // horizontal
    std::vector<std::vector<Edge>> _v_edges; // vertical
    std::vector<std::vector<Edge>> _d_edges; // diagonal

public:
    ~HexagonalLattice() = default;
    HexagonalLattice(size_t length);

    static std::array<Vertex, 6> get_6_srroundings(const Vertex& vtx);
    static size_t maxVertex(size_t n) {return 1 + 3*n*(1+n);}
    void view();

    void print_h_line() const;
};
#endif //HEXAGONALLATTICE_HEX_LATTICE_H

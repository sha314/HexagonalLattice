//
// Created by shahnoor on 9/15/18.
//

#include <iostream>
#include <array>
#include "hex_lattice.h"
using namespace std;


HexagonalLattice::HexagonalLattice(size_t length)
        : _length{length}
{
    _vertices.resize(length);
    _h_edges.resize(_length);
    _v_edges.resize(_length);
    _d_edges.resize(_length);
    size_t r, c;
    for(size_t i{}; i < _length; ++i){
        _vertices[i].resize(_length);
        _h_edges[i].resize(_length);
        _v_edges[i].resize(_length);
        _d_edges[i].resize(_length);

        for(size_t j{}; j < _length; ++j){
            _vertices[i][j] = {i, j};
            /*
            * for any vertex (a,b) the six neighbors are
            * on the same x axis    -> {(a-1,b)     , (a+1, b)  } edges go rightward
            * on the same y axis    -> {(a, b-1)    , (a, b+1)  } edges go upward
            * on the diagonal axis  -> {(a-1, b-1)  , (a+1, b+1)} edges go upward diagonally
             *
            */
            // current vertex connection with right vertex by currect vertex index
            r = (j + 1) % _length; // so that negative is avoided and periodicity is preserved
            c = i;
            _h_edges[i][j] = Edge(_vertices[i][j], Vertex(r, c));

            // current vertex connection with top vertex by currect vertex index
            r = j;
            c = (i + 1) % _length;
            _v_edges[i][j] = Edge(_vertices[i][j], Vertex(r, c));
            // current vertex connection with diagonally top vertex by currect vertex index
            r = (j + 1) % _length; // so that negative is avoided and periodicity is preserved
            c = (i + 1) % _length;
            _d_edges[i][j] = Edge(_vertices[i][j], Vertex(r, c));
        }
    }



}

void HexagonalLattice::view() {
    for(size_t r{0}; r < _length; ++r){
        for(size_t c{}; c < _length;++c){
            cout << r << ',' << c;
        }
        cout << endl;
    }

}

std::array<Vertex, 6> HexagonalLattice::get_6_srroundings(const Vertex &vtx) {
    array<Vertex, 6> _sorrundings;
    _sorrundings[0] = {vtx.get_a()-1, vtx.get_b()  };
    _sorrundings[1] = {vtx.get_a()+1, vtx.get_b()  };
    _sorrundings[2] = {vtx.get_a()  , vtx.get_b()-1};
    _sorrundings[3] = {vtx.get_a()  , vtx.get_b()+1};
    _sorrundings[4] = {vtx.get_a()-1, vtx.get_b()-1};
    _sorrundings[5] = {vtx.get_a()+1, vtx.get_b()+1};
    return _sorrundings;
}

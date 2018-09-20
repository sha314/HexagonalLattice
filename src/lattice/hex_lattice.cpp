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
    for(size_t i{}; i < _length; ++i){
        _vertices[i].resize(_length);
        for(size_t j{}; j < _length; ++j){
            _vertices[i][j] = {i, j};
        }
    }
    size_t center = _length / 2;
    std::vector<Vertex> surface, tmp;
    surface.push_back({center, center});
    for(size_t r{}; r < center; ++r){
        cout << surface.size() << endl;
        for(size_t s{}; s < surface.size() ;++s){
            auto srroundings = get_6_srroundings(surface[s]);
            for(size_t k{}; k < srroundings.size(); ++k) {
                // todo connect only if it is not present
                _edges.push_back({surface[s], srroundings[k]});
//                _edges.insert({surface[s], srroundings[k]});
                tmp.push_back(srroundings[k]);
            }
        }
        surface = tmp; // new surface
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

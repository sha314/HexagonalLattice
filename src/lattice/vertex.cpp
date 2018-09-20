//
// Created by shahnoor on 9/17/18.
//

#include "vertex.h"

using namespace std;

std::ostream&operator<<(std::ostream& os, const Vertex& vtx){
    return os << '(' << vtx.get_a() << ',' << vtx.get_b() << ')';
}

Vertex::Vertex(Vertex::value_type a, Vertex::value_type b)
        : _a{a}, _b{b}
{
    _initiated = true;
}

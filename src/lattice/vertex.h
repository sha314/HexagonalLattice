//
// Created by shahnoor on 9/17/18.
//

#ifndef HEXAGONALLATTICE_VERTEX_H
#define HEXAGONALLATTICE_VERTEX_H

#include <ostream>

/**
 * Vertex of the Hexagonal Lattice
 */
class Vertex{
public:
    using value_type = size_t ;
private:
    bool _initiated{false};
    value_type _a,_b;
public:
    ~Vertex() = default;
    Vertex() = default;
    Vertex(const Vertex&) = default;
    Vertex(Vertex&&) = default;
    Vertex& operator=(const Vertex&) = default;
    Vertex& operator=(Vertex&&) = default;

    Vertex(value_type a, value_type b);

    value_type get_a() const { return _a;}
    value_type get_b() const { return _b;}

    friend std::ostream&operator<<(std::ostream& os, const Vertex& vtx);


};


#endif //HEXAGONALLATTICE_VERTEX_H


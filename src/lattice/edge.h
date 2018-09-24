//
// Created by shahnoor on 9/17/18.
//

#include "vertex.h"

#ifndef HEXAGONALLATTICE_EDGE_H
#define HEXAGONALLATTICE_EDGE_H


class Edge{
public:
    using value_type = size_t;

private:
    Vertex _vtx1, _vtx2;
    int _id{-1};
public:
    ~Edge() = default;
    Edge() = default;
    Edge(const Edge&) = default;
    Edge(Edge&&) = default;
    Edge& operator=(const Edge&) = default;
    Edge& operator=(Edge&&) = default;
    Edge(Vertex vtx1, Vertex vtx2);
    Vertex get_vertex_a() const { return _vtx1;}
    Vertex get_vertex_b() const { return _vtx2;}
    void setID(int id) {_id = id;}
    int getID() const { return _id;}
    friend std::ostream&operator<<(std::ostream& os, const Edge& edg);

};

#endif //HEXAGONALLATTICE_EDGE_H

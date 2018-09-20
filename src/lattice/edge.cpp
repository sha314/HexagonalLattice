//
// Created by shahnoor on 9/17/18.
//

#include <iostream>
#include "edge.h"


using namespace std;


Edge::Edge(Vertex vtx1, Vertex vtx2)
        : _vtx1{vtx1}, _vtx2{vtx2}
{
//    int delta_a = abs(vtx1.get_a()) - (vtx2.get_a());
//    int delta_b = abs(vtx1.get_b()) - (vtx2.get_b());
//    if(abs(delta_a) != 1 && abs(delta_b) != 1){
//        cerr << "Same vertex : line " << __LINE__ << endl;
//    }



}

std::ostream&operator<<(std::ostream& os, const Edge& edg){
    return os << "(" << edg.get_vertex_a() << "-" << edg.get_vertex_b() << ")";
}
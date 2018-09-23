//
// Created by shahnoor on 9/17/18.
//

#include "index.h"

Index::Index(size_t r, size_t c)
        : _r{r}, _c{c}
{

}

IndexEdge::IndexEdge(size_t r, size_t c, EdgeType tp)
        : _r{r}, _c{c}, _type{tp}
{

}

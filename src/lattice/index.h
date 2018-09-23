//
// Created by shahnoor on 9/17/18.
//

#ifndef HEXAGONALLATTICE_INDEX_H
#define HEXAGONALLATTICE_INDEX_H

#include <cstddef>


class Index{
    size_t _r, _c;
public:
    ~Index() = default;
    Index() = default;
    Index(size_t r, size_t c);
    size_t row() const {return _r;}
    size_t col() const {return _c;}
};

/***************
 * 3 types of edges
 -------------------------
 -------------------------
  /   /   /   /   /   /
  ------------------------
 -------------------------
  /   /   /   /   /   /
 -------------------------
 -------------------------



 */
enum class EdgeType{
    HORIZONTAL, VERTICAL, DIAGONAL
};

/*************
 *
 */
class IndexEdge{
    EdgeType _type;
    size_t _r, _c;
public:
    ~IndexEdge() = default;
    IndexEdge() = default;
    IndexEdge(size_t r, size_t c, EdgeType tp);

    EdgeType type() const {return _type;}
    size_t row() const {return _r;}
    size_t col() const {return _c;}
};

#endif //HEXAGONALLATTICE_INDEX_H

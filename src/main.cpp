//
// Created by shahnoor on 9/15/18.
//

#include <iostream>
#include "time_tracking.h"
#include "lattice/hex_lattice.h"
#include "lattice/vertex.h"
#include "lattice/edge.h"

using namespace std;

/***************************************************
 *
 * @param argc
 * @param argv
 * @return
 ***************************************************/
int main(int argc, char* argv[]){
    cout << "Hexagonal Lattice" << endl;
    cout << getCurrentTime() << endl;
    cout << "main program started " << endl;

    HexagonalLattice hl(5);
    hl.view();
//    for(size_t i{}; i < 5 ; ++i) {
//        cout << HexagonalLattice::maxVertex(i) << endl;
//    }

    cout << "Program Ended" << endl;
    return 0;
}

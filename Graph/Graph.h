/*

Author: Shamik V. Patro

*/

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Edge.h"

class Graph{

    public:

    int numVertices;
    std::vector<std::list<Edge> > adjList;

    Graph(){
        numVertices = 0;
    }

    ~Graph(){} // Deallocates Graph objects




};
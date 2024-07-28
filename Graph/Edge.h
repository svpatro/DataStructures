/*
Author: Shamik V. Patro
*/

#pragma once
#include <iostream>
#include <string>

class Edge{

    public:

    int src, dest, weight;

    Edge(int src, int dest, int weight){
        this->src = src;
        this->dest = dest;
        this->weight = weight;
    }

    std::string print(){
        return "<" + std::to_string(src) + ", " + std::to_string(dest) + ", " + std::to_string(weight) + ">";
    }
};
/*
Author: Shamik V. Patro
*/

#pragma once
#include <iostream>

class Node {

    public:
    
    int value;
    Node *left, *right, *parent;

    Node(int val){
        value = val;
        left = NULL;
        right = NULL;
        parent = NULL;
    }

    void toString(){
        if (parent == NULL){
        std::cout << "<" << value << ", null";
        }
        else {
            std::cout << "<" << value << ", " << parent->value << ">";
        }
    }

};
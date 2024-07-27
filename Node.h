/*
Author: Shamik V. Patro
*/

#pragma once
#include <iostream>

class Node {

    public:

        int value;
        Node *next;

        Node(int val) {
            value =  val;
            next = NULL;
        }
};
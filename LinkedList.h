/*
Author: Shamik V. Patro
*/

#pragma once
#include "Node.h"

class LinkedList {

    public:

        Node *head, *tail;
        int size;

        LinkedList(){
            head = NULL;
            tail = NULL;
            size = 0;

        }

};
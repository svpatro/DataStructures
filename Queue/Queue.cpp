/*
Author: Shamik V. Patro
Purpose: To demonstrate queue data structure.
*/

#include <iostream>
#include "Queue.h"

int main(){

    Queue* q = new Queue(10);

    for (int i = 0; i < 10; i++){
        q->enqueue(10);
    }

    q->print();
    std::cout << std::endl;

    return 0;
}
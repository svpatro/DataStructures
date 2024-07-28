/*

Author: Shamik V. Patro

Purpose: Demonstrate FILO stack data structure.

*/

#include <iostream>
#include "Stack.h"

int main(){

    int stackSize = 10;
    Stack* stack = new Stack(10);

    std::cout << std::endl;
    std::cout << "1) Filling stack of size " << stackSize << "... ";
    for (int i = 0; i < 10; i++){
        stack->push(i);
    }

    stack->push(15);
    std::cout << std::endl;
    std::cout << "2) Popping stack..." << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < stackSize; i++){
        std::cout << stack->pop() << " ";
    }

    std::cout << std::endl;
    std::cout << std::endl;
    stack->pop();
    std::cout << std::endl;

    delete stack;

    return 0;
}
/*
Author: Shamik V. Patro
*/

#pragma once
#include <iostream>

class Stack {

    private:
        int maxStackSize, topOfStack;
        int *stack;

    public:

        Stack(int maxStackSize){
            if ( maxStackSize <= 0 ){
                std::cout << "Stack size should be a positive integer.";
            }
            else {
                this->maxStackSize = maxStackSize;
                topOfStack = -1;
                stack = new int[maxStackSize];
            }
        }

        void push(int value){
            if (topOfStack == maxStackSize - 1){
                std::cout << "Stack is full!" << std::endl;
            }
            else {
                stack[++topOfStack] = value;
            }
        }

        int pop(){
            if (topOfStack == -1){
                std::cout << "Stack is empty!" << std::endl;
            }
            return stack[topOfStack--];
        }

        int peak(){
            return stack[topOfStack];
        }

        int size() {
            return (topOfStack+1);
        }
};
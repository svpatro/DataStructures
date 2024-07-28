/*
Author: Shamik V. Patro
*/

#pragma once
#include <iostream>

class Queue{

    private:

	int maxQueueSize, front, rear, currentSize;
	int *queue;

    public:
	Queue(int maxQueueSize) {
		if (maxQueueSize <= 0)
			std::cout << "Queue size should be a positive integer.";
		else {
			this->maxQueueSize = maxQueueSize;
			front = rear = 0;
			currentSize = 0;
			queue = new int[maxQueueSize];
		}
	}

	~Queue() {
		delete queue;
	}

	void enqueue(int val) { 
		if (currentSize == maxQueueSize){
			std::cout << "Queue is full!";
		}
		else{
			queue[rear++] = val;
			currentSize++;
			if (rear == maxQueueSize){
				rear = 0;
			}
		}
	}

	int dequeue() { 
		if (currentSize == 0){
			std::cout << "Queue is empty!";
		}
		else{
			int value = queue[front++];
			currentSize--;
			if (front == maxQueueSize){
				front = 0;
			}
			return value;
		}
	}

	int size() { 
		return currentSize;
	}

	void print() {
		if (size() == 0)
			std::cout << "[ Empty Queue ]";
		else {
			std::cout << "[ ";
			if (rear > front) {
				for (long i = front; i < rear - 1; i++)
					std::cout << queue[i] << ", ";
				std::cout << queue[rear - 1] << " ]";
			} else {
				for (long i = front; i < maxQueueSize - 1; i++)
					std::cout << queue[i] << ", ";
				std::cout << queue[maxQueueSize - 1];
				for (long i = 0; i < rear; i++)
					std::cout << ", " << queue[i];
				std::cout << " ]";
			}
		}
	}
};
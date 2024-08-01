/*

Author: Shamik V. Patro

printList(): Print entire linked list.
insertAtFront(): Inserting new Node at front of linked list.
insertAtEnd(): Inserting new Node at the end of linked list.
deleteHead(): 
getNodeAt():
getSize():
insertAfter():
deleteAfter():

*/

#include <iostream>
#include "Node.h"

class LinkedList{

    public:

        Node *head, *tail;
        int size;

        LinkedList(){
            head = NULL;
            tail = NULL;
            size = 0;
        }

    	void printList() {
			if (size == 0){
				std::cout << "[]" << std::endl;
			}
			else {
				Node *tmp = head;
				std::cout << "[ ";
				for (int i = 0; i < size - 1; i++) {
					std::cout << tmp->value << " -> ";
					tmp = tmp->next;
				}
			std::cout << tail->value << "]" << std::endl;
			}
		}
		
		Node* insertAtFront(int val){
			Node *newNode = new Node(val);
			if (size == 0) {
				head = tail = newNode;
			}
			else {
				newNode->next = head;
				head = newNode;
			}
			size++;
			return newNode;
		}

		Node* insertAtEnd(int val){
			Node *newNode = new Node(val);
			if (size == 0) {
				head = tail = newNode;
			} 
			else {
				tail->next = newNode;
				tail = newNode;
			}
			size++;
			return newNode;
		}

		void deleteHead(){
			if (0 == size){
				std::cout << "Cannot delete from an empty list" << std::endl;
			}
			else if (1 == size){
				size--;
				delete head;
			}
			else {
				size--;
				Node* tmp = head;
				head = head->next;
				delete tmp;
			}
		}

		Node* getNodeAt(int pos){
			if (pos < 0 || pos >= size){
				std::cout << "This position doesn't exist." << std::endl;
				return NULL;
			}
			else {
				Node *tmp = head;
				for (int i = 0; i < pos; i++){
					tmp = tmp->next;
				}
				return tmp;
			}
		}
		
		int getSize(){
			return size;
		}

		void insertAfter(Node *node, int val){

			// TODO: Implement

		}

		void deleteAfter(Node node){


			// TODO: Implement

		}

};
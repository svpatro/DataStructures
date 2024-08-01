/*

Author: Shamik V. Patro

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
		
		void insertAtFront(int val){

		}

		void insertAtEnd(){


		}

		void deleteHead(){


		}

		int getNodeAt(int pos){


		}
		
		int getSize(){
			return size;
		}

		void insertAfter(Node node, int val){


		}

		void deleteAfter(Node node){

			
		}

};
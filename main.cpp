#include <iostream>
#include "Node.h"
#include "LinkedList.h"

int main(){

    LinkedList* LL = new LinkedList;
    LL->printList();
    delete LL;

    return 0;
}
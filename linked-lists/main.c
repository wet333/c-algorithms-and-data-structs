#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

int main(void) {

    Node * node1 = createNode(25);
    Node * node2 = createNode(17);

    LList * list1 = createLinkedList(45);

    printf("Node1: %d\n", node1->value);
    printf("Node2: %d\n", node2->value);

    append(list1, 22);
    append(list1, 33);
    append(list1, 44);
    printLinkedList(list1);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

int main(void) {

    LList * list1 = createLinkedList(5);

    unstack(list1);

    preppend(list1, 15);
    append(list1, 22);
    append(list1, 33);
    preppend(list1, 75);
    append(list1, 44);
    append(list1, 45);
    unqueue(list1);
    append(list1, 46);
    
    printLinkedList(list1);
    printf("LList size: %d\n", list1->size);

    unqueue(list1);
    unqueue(list1);
    unqueue(list1);
    unqueue(list1);
    unqueue(list1);

    printLinkedList(list1);
    printf("LList size: %d\n", list1->size);

    unqueue(list1);

    printLinkedList(list1);
    printf("LList size: %d\n", list1->size);

    append(list1, 81);
    preppend(list1, 89);
    append(list1, 86);
    preppend(list1, 90);

    printLinkedList(list1);
    printf("LList size: %d\n", list1->size);

    unstack(list1);
    unstack(list1);
    unstack(list1);
    unstack(list1);

    printLinkedList(list1);
    printf("LList size: %d\n", list1->size);

    unstack(list1);
    unstack(list1);

    printLinkedList(list1);
    printf("LList size: %d\n", list1->size);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

int main(void) {

    LList * list1 = createLinkedList(5);

    preppend(list1, 15);
    append(list1, 22);
    unstack(list1);
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

    return 0;
}
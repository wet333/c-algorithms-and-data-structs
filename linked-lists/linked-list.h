#ifndef LINKED_LIST_API
#define LINKED_LIST_API

typedef struct Node {
    int value;
    struct Node * next;
} Node;

typedef struct LList {
    Node * head;
    int size;
} LList;


// Node functionality
Node * createNode(int value);

// Linked-List functionality
LList * createLinkedList(int headValue);
void printLinkedList(LList * list);
void append(LList * list, int value);

#endif
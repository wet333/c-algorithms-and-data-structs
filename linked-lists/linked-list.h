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
void preppend(LList * list, int value);
// Returns value type of Node
int unstack(LList *);   // Takes the head of the list
int unqueue(LList *);   // Takes the tail of the list

#endif
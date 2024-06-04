#ifndef LINKED_LIST_API
#define LINKED_LIST_API

/* ------------------------------------------------------------------------------------------------------------------ */
// Node functionality
/* ------------------------------------------------------------------------------------------------------------------ */
typedef struct Node {
    int value;
    struct Node * next;
} Node;

// Create node
Node * createNode(int value);

/* ------------------------------------------------------------------------------------------------------------------ */
// Linked-List functionality
/* ------------------------------------------------------------------------------------------------------------------ */
typedef struct LList {
    Node * head;
    int size;
} LList;

// Creates a linked list
LList * createLinkedList(int headValue);

// Prints the linked list
void printLinkedList(LList * list);

// Adds an item at the start of the list
void append(LList * list, int value);

// Add an item at the end of the list
void preppend(LList * list, int value);

// Remove the first item of the list
int unstack(LList *);

// Remove the last item of the list
int unqueue(LList *);

#endif
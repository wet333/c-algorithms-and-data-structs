#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

Node * createNode(int value) {
    Node * newNode = (Node *) malloc(sizeof(Node));
    newNode->value = (value) ? value : 0;
    newNode->next = NULL;
    return newNode;
}

LList * createLinkedList(int headValue) {
    LList * list = (LList *) malloc(sizeof(LList));
    list->head = createNode(headValue);
    list->size = 1;
    return list;
}

void printLinkedList(LList * list) {
    Node * head = list->head;
    Node * currentNode = head;

    int count = 1;

    while(currentNode) {
        printf("Node%d->value: %d\n", count, currentNode->value);
        if (currentNode->next == NULL) {
            break;
        }
        currentNode = currentNode->next;        
    }
    return;
}

void append(struct LList * list, int value) {
    Node * current = list->head;
    Node * newNode = createNode(value);

    // Find the last node
    while(current->next != NULL) {
        current = current->next;
    }

    // Add the new node 
    if(current->next == NULL) {
        current->next = newNode;
        list->size = list->size++;
    }
    return;
}
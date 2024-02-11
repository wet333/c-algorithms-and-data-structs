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

    if (list->size == 0) {
        printf("The list is empty\n");
    }

    int count = 1;

    while(currentNode) {
        printf("Node%d->value: %d\n", count, currentNode->value);
        if (currentNode->next == NULL) {
            break;
        }
        currentNode = currentNode->next;
        count++;   
    }
    return;
}

void append(struct LList * list, int value) {
    Node * current = list->head;
    Node * newNode = createNode(value);

    if(list->size == 0) {
        list->head = newNode;
        list->size = list->size + 1;
        return;
    }

    // Find the last node
    while(current->next != NULL) {
        current = current->next;
    }

    // Add the new node 
    if(current->next == NULL) {
        current->next = newNode;
        list->size = list->size + 1;
    }
    return;
}

void preppend(LList * list, int value) {
    Node * current = list->head;
    Node * newNode = createNode(value);

    // if list is empty, next points to NULL
    if(list->size > 0) newNode->next = list->head;
    // Set new node as head
    list->head = newNode;
    list->size = list->size + 1;
    return;
}

int unstack(LList * list) {

    if(list->size == 0) return 0;

    Node * nodeToDelete = list->head;
    int returnValue = nodeToDelete->value;

    // Set new head
    list->head = list->head->next;
    // Delete previous node from memory
    free(nodeToDelete);
    // Set new list size
    list->size = list->size - 1;

    return returnValue;
}

int unqueue(LList * list) {
    Node * current = list->head;
    Node * newTail = NULL;
    int returnValue;

    if (list->size == 0) return 0;

    if (list->size == 1) {
        returnValue = list->head->value;
        free(list->head);
        list->head = NULL;
        list->size = 0;
        return returnValue;
    }

    // Find the last node
    while(current->next != NULL) {
        if(current->next->next == NULL) {
            newTail = current;
        }
        current = current->next;
    }

    returnValue = current->value;
    // New tail next set to NULL
    newTail->next = NULL;
    // Delete previous node from memory
    free(current);
    // Set new list size
    list->size = list->size - 1;

    return returnValue;
}
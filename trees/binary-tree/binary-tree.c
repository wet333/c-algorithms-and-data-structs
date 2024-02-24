#include "binary-tree.h"
#include <stdio.h>
#include <stdlib.h>

BTreeNode * createNode(int value) {
    BTreeNode * newNode = (BTreeNode*) malloc(sizeof(BTreeNode));

    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
    }

    newNode->data = value;
    newNode->left = NULL;
    newNode->rigth = NULL;

    return newNode;
};

void traverseBTreeInOrder(BTreeNode * treeRoot) {
    if (treeRoot == NULL) {
        return;
    }
    traverseBTreeInOrder(treeRoot->left);
    printf("%d", treeRoot->data);
    traverseBTreeInOrder(treeRoot->rigth);
};
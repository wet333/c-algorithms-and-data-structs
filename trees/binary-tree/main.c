#include "binary-tree.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("BTree demo program\n");

    BTreeNode* root = createNode(5);
    root->left = createNode(4);
    root->rigth = createNode(6);
    root->left->left = createNode(3);
    root->left->rigth = createNode(2);
    root->rigth->left = createNode(7);

    traverseBTreeInOrder(root);

    return 0;
};
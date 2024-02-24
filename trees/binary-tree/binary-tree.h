#ifndef BTREE_API
#define BTREE_API

typedef struct BTreeNode {
    int data;
    struct BTreeNode * left;
    struct BTreeNode * rigth;
} BTreeNode;

BTreeNode * createNode(int value);
void traverseBTreeInOrder(BTreeNode *);

#endif
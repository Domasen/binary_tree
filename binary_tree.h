#ifndef BINARY_TREE_H_INCLUDED
#define BINARY_TREE_H_INCLUDED

struct Node{
    int key;
    struct Node *left;
    struct Node *right;
    int height; 
};

void create_tree(struct Node **root);
int height(struct Node *N);
struct Node* deleteNode(struct Node* root, int key);
void preOrder(struct Node *root);
struct Node* insert(struct Node* node, int key);
void deleteTree(struct Node* node);


#endif /*BINARY_TREE_H_INCLUDED */
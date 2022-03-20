#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

int main(){

    struct Node *root;
    
    create_tree(&root);

    for(int i = 0; i < 10; ++i){
        root = insert(root, i * 10);
    }

    printf("Tree was created and filled with numbers:\n");
    preOrder(root);
    printf("\nHeight: %d\n", height(root));
    root = deleteNode(root, 0);
    printf("0 was deleted:\n");
    preOrder(root);
    printf("\nHeight: %d", height(root));
    deleteTree(root);

  return 0;
}
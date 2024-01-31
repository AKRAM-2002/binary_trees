#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){

    binary_tree_t *treeNode;

    treeNode = malloc(sizeof(binary_tree_t));
    
    if(treeNode){
        treeNode->parent = parent;
        treeNode->n = value;
        treeNode->left = NULL;
        treeNode->right = NULL;

        return treeNode;

    }
    else{
        return NULL;
    }


    
    
}
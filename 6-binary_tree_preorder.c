#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal
 * @tree: Pointer to the root of the binary tree
 * @func: Pointer to the function to be called for each node's value
 *
 * Description: Performs a pre-order traversal on the binary tree
 * by applying the provided function to each node's value.
 *
 * Return: Void
 */
 

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)){
    
    
    if(tree == NULL || func == NULL){
        return;
    }
    else{
        func(tree->n);
        binary_tree_preorder(tree->left,func);
        binary_tree_preorder(tree->right,func);
    }
        

}
#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal
 * @tree: Pointer to the root of the binary tree
 * @func: Pointer to the function to be called for each node's value
 *
 * Description: Performs a in-order traversal on the binary tree
 * by applying the provided function to each node's value.
 *
 * Return: Void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)){
    
    if(tree == NULL || func == NULL){
        return;
    }
    else{
        
        binary_tree_inorder(tree->left,func);
        func(tree->n);
        binary_tree_inorder(tree->right,func);
    }
}


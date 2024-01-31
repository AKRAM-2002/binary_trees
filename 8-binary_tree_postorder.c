#include "binary_trees.h"

/**
 * binary_tree_postrder - Traverses a binary tree using post-order traversal
 * @tree: Pointer to the root of the binary tree
 * @func: Pointer to the function to be called for each node's value
 *
 * Description: Performs a post-order traversal on the binary tree
 * by applying the provided function to each node's value.
 *
 * Return: Void
 */
 

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)){
    
    
    if(tree == NULL || func == NULL){
        return;
    }
    else{
        
        binary_tree_postorder(tree->left,func);
        binary_tree_postorder(tree->right,func);
        func(tree->n);
    }
        

}

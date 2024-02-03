#include "binary_trees.h"

/**
 * binary_tree_is_perfect - perfect or not a tree
 * @tree: tree to check
 * Return: 1 is it is or 0 if not
 */


int binary_tree_is_perfect(const binary_tree_t *tree){

    
    if(tree == NULL){
        return 0;
    }
    else{  
        return (binary_tree_height(tree->left) == binary_tree_height(tree->right)) ? 1 : 0;
           
    }

}
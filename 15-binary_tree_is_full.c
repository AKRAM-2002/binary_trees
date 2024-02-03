#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree){

    int full = 1;
    int l = 0, r = 0;

    if(tree == NULL)
        return 0;

    else{   
        if(tree->left && tree->right ){
            l = binary_tree_is_full(tree->left);
            r = binary_tree_is_full(tree->right);

            return (l ==  0 || r == 0) ? 0 : 1;
        }
        else if (tree->left == NULL && tree->right == NULL){
            full = 1;
        }
        else{
            full = 0;
        }

    }

    return full;
}
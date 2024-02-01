#include "binary_trees.h"



size_t binary_tree_nodes(const binary_tree_t *tree){

    size_t node = 0;
    size_t r = 0, l = 0;

    if(tree == NULL){
        return 0;
    }
    else{

        if(tree->left || tree->right){
            l = binary_tree_nodes(tree->left);
            r = binary_tree_nodes(tree->right);
            node = l + r + 1;
        }
        return node;
    }
}
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node.
 * @parent: A pointer to the node to insert the right child.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure or if parent is NULL.
 */
 
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *treeNode;

    if (parent == NULL)
        return NULL;

    treeNode = binary_tree_node(parent, value);

    if (treeNode == NULL)
        return NULL;

    if (parent->right != NULL)
    {
        treeNode->right = parent->right;
        parent->right->parent = treeNode;
    }

    
    parent->right = treeNode;

    return treeNode;
}

#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){


    binary_tree_t *treeNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	treeNode = binary_tree_node(parent, value);
	if (treeNode == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		treeNode->left = parent->left;
		parent->left->parent = treeNode;
	}
	parent->left = treeNode;
	return (treeNode);

}


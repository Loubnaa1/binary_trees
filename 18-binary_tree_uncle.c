#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle
 * of a node of a binary tree
 * @node: is a pointer to the node
 * Return: the uncle of the node or 0
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}

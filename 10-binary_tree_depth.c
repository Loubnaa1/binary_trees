#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth
 * of a node of a binary tree
 * @tree: is a pointer to the node
 * Return: the depth of the node or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

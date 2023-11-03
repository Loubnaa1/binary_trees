#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node
 * Return: the size of the tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, s_r = 0, s_l = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		s_l = binary_tree_size(tree->left);
		s_r = binary_tree_size(tree->right);
		size = s_r + s_l + 1;
	}
	return (size);
}

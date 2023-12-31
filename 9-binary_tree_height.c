#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: the height of the tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		if (l > r)
			return (l);
		else
			return (r);
	}
}

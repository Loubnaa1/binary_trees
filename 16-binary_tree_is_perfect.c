#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
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
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		if (l >= r)
			return (l);
		else
			return (r);
	}
}
/**
 * binary_tree_is_perfect -  function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if perfect and 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int sum = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		sum = tree_is_perfect(tree);
		if (sum != 0)
		{
			return (1);
		}
		return (0);
	}
}

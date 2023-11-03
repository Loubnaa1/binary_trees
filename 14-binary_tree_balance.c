#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree 
 * Return: the height of the tree or 0 if NULL
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree:  pointer to the root node of the tree
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, somme = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		somme = left - right;
	}
	return (somme);
}

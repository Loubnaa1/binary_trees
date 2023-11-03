#include "binary_trees.h"
/**
 * tree_perfect - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: the height of the tree or 0 if tree is NULL
 */
int tree_perfect(const binary_tree_t *tree)
{
	int siz_l = 0, siz_r = 0;

	if (tree->left && tree->right)
	{
		siz_l = 1 + tree_perfect(tree->left);
		siz_r = 1 + tree_perfect(tree->right);
		if (siz_r == siz_l && siz_r != 0 && siz_l != 0)
			return (siz_r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
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
		sum = tree_perfect(tree);
		if (sum != 0)
		{
			return (1);
		}
		return (0);
	}
}

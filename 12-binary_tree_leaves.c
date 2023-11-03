#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: the number  of leaves in the tree or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, s_l = 0, s_r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		s_l = binary_tree_leaves(tree->left);
		s_r = binary_tree_leaves(tree->right);
		leaves = s_l + s_r;
		return ((!s_l && !s_r) ? leaves + 1 : leaves + 0);
	}
}

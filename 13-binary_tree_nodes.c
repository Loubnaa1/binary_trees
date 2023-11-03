#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts nodes in a tree with children
 * @tree: pointer to the root node of the tree
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t s_l = 0, s_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	s_l = 1 + binary_tree_nodes(tree->left);
	s_r = 1 + binary_tree_nodes(tree->right);
	return (s_l + s_r - 1);
}

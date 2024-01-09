#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: the tree to measure
 * Return: the height of the tree, 0 if NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (!tree)
	{
		return (0);
	}

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h >= right_h)
	{
		return (1 + left_h);
	}
	else
	{
		return (1 + right_h);
	}
}

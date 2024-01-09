#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the node is a root
 * @node: the node to check
 * Return: 1 if root, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (node->left != NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

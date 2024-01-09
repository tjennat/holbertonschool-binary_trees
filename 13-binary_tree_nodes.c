#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with at least 1 child
 * @tree: the binary tree
 * Return: number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_child, right_child;

	if (!tree)
	{
		return (0);
	}

		left_child = binary_tree_nodes(tree->left);
		right_child = binary_tree_nodes(tree->right);

		if (tree->left != NULL || tree->right)
		{
			return(left_child + right_child +1);
		}
		return (left_child + right_child);

}
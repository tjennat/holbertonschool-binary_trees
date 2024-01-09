#include "binary_trees.h"

/**
 * binary_tree_delete - free the binary tree
 * @tree: the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
		tree = NULL;
	}
}

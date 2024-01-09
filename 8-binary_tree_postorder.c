#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using postorder traversal
 * @tree: pointer to the root of the node of the tree to traverse
 * @func: pointer to a function to call each node
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

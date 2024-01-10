#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance of the tree
 * @tree: the tree to measure
 * Return: the measure of the balance
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;

	if (!tree)
	{
		return (0);
	}

	leftHeight = tree->left ? binary_tree_balance(tree->left) + 1 : 0;
	rightHeight = tree->right ? binary_tree_balance(tree->right) + 1 : 0;

	return (leftHeight - rightHeight);
}

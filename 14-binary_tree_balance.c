#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of the tree
 * @tree: the tree to measure
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	leftHeight = 1 + binary_tree_height(tree->left);
	rightHeight = 1 + binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}

/**
 * binary_tree_height - measure the height of the tree
 * @tree: the tree to measure
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (!tree)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (1 + leftHeight);
	else
		return (1 + rightHeight);
}

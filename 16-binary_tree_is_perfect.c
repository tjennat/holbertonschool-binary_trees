#include "binary_trees.h"

/**
 * depth - calculate the depth of the tree
 * @tree: pointer to the root of the tree
 * Return: the depth of the tree
*/
int depth(const binary_tree_t *tree)
{
	int d = 0;
	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * tree_is_perfect - check if the binary tree is perfect
 * @tree: pointer to the root node of the tree
 * @d: depth of the tree
 * @level: current level in the tree
 * Return: the depth, else 0
*/

int tree_is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (d == level + 1);
	if (!tree->left || !tree->right)
		return (0);
	return (tree_is_perfect(tree->left, d, level + 1) && tree_is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if perfect, else 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int d = depth(tree);
	return (tree_is_perfect(tree, d, 0));
}
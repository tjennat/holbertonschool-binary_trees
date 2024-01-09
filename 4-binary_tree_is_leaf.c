#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  check if a node is a leaf
 * @node: the node to check
 * Return: 1 if node, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	binary_tree_t *new_node;

	if (node == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->parent = node->parent;
	new_node->left = node->left;
	new_node->right = node->right;

	if (new_node->left == NULL && new_node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

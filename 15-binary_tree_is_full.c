#include <stdlib.h>

typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	if (tree->left == NULL && tree->right == NULL)
		return 1;

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return 0;
}

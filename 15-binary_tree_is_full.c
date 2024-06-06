#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

	if ((tree->left == NULL && tree->right == NULL) || (tree->right != NULL && tree->right != NULL))
		return (1);

	else
		return (0);
}

#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor, left, right;

	if (tree == NULL)
		return (0);

	balance_factor = 0;
	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);

	balance_factor = left - right;

	return (balance_factor);
}

#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor, left, right;

	if (tree == NULL)
		return (0);

	balance_factor = 0;
	left = calculate_height(tree->left);
	right = calculate_height(tree->right);

	balance_factor = left - right;

	return (balance_factor);
}

int calculate_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	else
	{
		left = calculate_height(tree->left);
		right = calculate_height(tree->right);

		if (left > right)
			return (left + 1);

		return (right + 1);
	}
}

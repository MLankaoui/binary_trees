#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor, 0 if tree is NULL
 */

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

/**
 * calculate_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */

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

#include "binary_trees.h"


size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_side_binary_t, right_side_binary_t;

	if (tree == NULL)
		return (0);

	left_side_binary_t = binary_tree_height(tree->left);
	right_side_binary_t = binary_tree_height(tree->right);

	if (left_side_binary_t > right_side_binary_t)
		return (left_side_binary_t + 1);

	return (right_side_binary_t + 1);
}
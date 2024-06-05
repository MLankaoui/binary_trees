#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of the tree
 *
 * @tree: the binary tree
 *
 * Descrtiption: a function to calculate the height
 * Return: 0 if there is no tree. the height otherwise
*/
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_side_binary_t, right_side_binary_t;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_side_binary_t = binary_tree_height(tree->left);
	right_side_binary_t = binary_tree_height(tree->right);



	if (left_side_binary_t > right_side_binary_t)
		return (left_side_binary_t + 1);

	return (right_side_binary_t + 1);
}

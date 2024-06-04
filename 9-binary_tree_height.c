#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t size_of_binary_tree;
	if (tree == NULL)
		return (0);


	size_of_binary_tree = 0;
	while (tree->left != NULL || tree->right != NULL)
	{
		size_of_binary_tree++;
	}

	return (size_of_binary_tree);
}

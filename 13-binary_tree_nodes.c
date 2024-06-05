#include "binary_trees.h"


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_counter;

	if (tree == NULL)
		return (0);

	binary_tree_nodes(tree->left);
	binary_tree_nodes(tree->right);

    nodes_counter = 0;
	if (tree->left == NULL || tree->right == NULL)
		nodes_counter++;

    return nodes_counter;
}

#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root or not
 *
 * @node: the node
 *
 * Descrtiption: a function that checks if a node is a root or not
 * Return: 1 if the node is a root. 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	else
		return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the dept
 *
 * @tree: the tree
 *
 * Descrtiption: a function that calculates the dept of a tree
 * Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}

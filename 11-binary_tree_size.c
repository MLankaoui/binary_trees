#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of a tree
 *
 * @tree: the node
 *
 * Descrtiption: a function calculates the size of a tree
 * Return: size if there is a tree. otherwise 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_binary_tree;

	if (tree == NULL)
		return (0);

	size_binary_tree = 0;

	size_binary_tree += binary_tree_size(tree->left);
	size_binary_tree += binary_tree_size(tree->right);
	size_binary_tree++;


	return (size_binary_tree);
}

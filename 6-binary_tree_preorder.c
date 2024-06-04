#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder tree traversal
 *
 * @tree: the binary tree
 * @func: is a pointer to a function to call for each node
 *
 * Descrtiption: a function for preorder tree traversal
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

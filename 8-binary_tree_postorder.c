#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder tree traversal
 *
 * @tree: the binary tree
 * @func: is a pointer to a function to call for each node
 *
 * Descrtiption: a function for postorder tree traversal
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}

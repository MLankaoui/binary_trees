#include "binary_trees.h"


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
}

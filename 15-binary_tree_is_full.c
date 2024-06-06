#include "binary_trees.h"

/**
* binary_tree_is_full - checks if the tree is full or not
*
* @tree: the binary tree
*
* Descrtiption: a function checks if the tree is full or not
* Return: 0 if tree is Null. 1 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);


	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	else
		return (0);
}

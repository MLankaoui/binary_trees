#include "binary_trees.h"

/**
* binary_tree_delete - deletes a tree
*
* @tree: the tree to delete
*
* Descrtiption: a function that deletes a tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}

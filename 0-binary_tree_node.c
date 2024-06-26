#include "binary_trees.h"
/**
* binary_tree_node - creates a binary tree node
*
* @parent: a parameter to specify the parent
* @value: to specify the value
*
* Descrtiption: a function that creates a binary tree node
* Return: the newnode if it doesn t fail. NULL otherwise
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}


	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent)
	{
		if (!parent->right)
			parent->right = new_node;

		else if (!parent->left)
			parent->left = new_node;

		else
		{
			return (NULL);
		}

	}
	return (new_node);
}

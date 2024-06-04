#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a left child
*
* @parent: a parameter to specify the parent
* @value: to specify the value
*
* Descrtiption: a function that inserts a left child
* Return: the newnode if it doesn t fail. NULL otherwise
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;


	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;

	new_node->parent = parent;

	new_node->left = NULL;
	new_node->right = NULL;



	if (parent->left != NULL)
	{
		parent->left = new_node;
		new_node->left = parent->left;
	}

	else if (parent->left == NULL)
		parent->left = new_node;

	return (new_node);
}

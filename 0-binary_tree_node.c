#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		printf("Failed to allocate memory for the new node");
		return (NULL);
	}

	new_node->parent = parent;

	new_node->n = value;

	return (new_node);
}

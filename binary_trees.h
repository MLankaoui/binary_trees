#ifndef BINARY_TREES
#define BINARY_TREES

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* struct binary_tree_s - Binary tree node
*
* @n: Integer stored in the node
* @parent: Pointer to the parent node
* @left: Pointer to the left child node
* @right: Pointer to the right child node
*/
struct binary_tree_s
{
	int n; /* the value */

	struct binary_tree_s *parent; /* the parent node */
	struct binary_tree_s *left;   /* the left child node */
	struct binary_tree_s *right;  /* the left child node */
};

/* using typdef to define our sturcture as a type */
typedef struct binary_tree_s binary_tree_t;
/* binary seach tree */
typedef struct binary_tree_s bst_t;
/* AVL tree */
typedef struct binary_tree_s avl_t;
/* max heap tree */
typedef struct binary_tree_s heap_t;
/* function prototype */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* function prototype */
void binary_tree_print(const binary_tree_t *tree);
/* function prototype */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* function prototype */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* function prototype */
void binary_tree_delete(binary_tree_t *tree);
/* function prototype */
int binary_tree_is_leaf(const binary_tree_t *node);
/* function prototype */
int binary_tree_is_root(const binary_tree_t *node);
/* function prototype */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* function prototype */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* function prototype */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* function prototype */
size_t binary_tree_height(const binary_tree_t *tree);
/* function prototype */
size_t binary_tree_depth(const binary_tree_t *tree);
/* function prototype */
size_t binary_tree_size(const binary_tree_t *tree);
/* function prototype */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* function prototype */
size_t binary_tree_nodes(const binary_tree_t *tree);
/* function prototype */
int binary_tree_balance(const binary_tree_t *tree);
/* function prototype */
int calculate_height(const binary_tree_t *tree);
/* function prototype */
int binary_tree_is_full(const binary_tree_t *tree);

#endif

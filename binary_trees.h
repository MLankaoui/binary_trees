#ifndef BINARY_TREES
#define BINARY_TREES

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

typedef struct binary_tree_s binary_tree_t; /* using typdef to define our sturcture as a type */

typedef struct binary_tree_s bst_t; /* binary seach tree */

typedef struct binary_tree_s avl_t; /* AVL tree */

typedef struct binary_tree_s heap_t; /* max heap tree */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); /* header */

#endif

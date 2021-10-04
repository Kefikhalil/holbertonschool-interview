#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_



/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @root: Pointer to the root node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *root;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s avl_t;

void binary_tree_print(const binary_tree_t *);

avl_t *insert_into_avl(avl_t *root, int value);
avl_t *insert_start_end(avl_t *start, int *array, int first, int last);
avl_t *sorted_array_to_avl(int *array, size_t size);

#endif /* _BINARY_TREES_H_ */
#include "binary_trees.h"

/**
 * sort_tree - sort tree
 * @left:       left 
 * @right:      right 
 * @arr:        array
 * @tree:       tree
 * Return:      0
 */
avl_t *sort_tree(avl_t *root, int value)
{
	avl_t *node = NULL;

	node = malloc(sizeof(avl_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = head;

return (node);;
}


/**
 * sort_root - sort root
 * @array:      pointer to array
 * @size:       number of elements in the array
 * Return:      root node of AVL tree
 */
avl_t *sorted_root(avl_t *start, int *array, int first, int last)
{
	int hd;
	avl_t *root;

	if (first > last)
		return (NULL);

	hd = (first + last) / 2;
	root = insert_into_avl(start, array[hd]);

	if (root == NULL)
		return (NULL);

	root->left = insert_start_end(root, array, first, hd - 1);
	root->right = insert_start_end(root, array, hd + 1, last);

	return (root);
}

/**
 * sorted_array_to_avl -   sorted_array_to_avl
 * Return:      0   
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	return (insert_start_end(NULL, array, 0, size - 1));
}

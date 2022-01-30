#include "binary_trees.h"

/**
 * sorted_array_to_avl - AVL tree from sorted array
 *
 * @array: array
 * @size: size
 *
 * Return: 0
 */

avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *rightnode, *leftnode, *node = NULL;
	size_t mid;

	if (size == 0 || !array)
		return (NULL);
	node = malloc(sizeof(avl_t));
	if (!node)
		return (NULL); /*FAILURE*/
	mid = (size - 1) / 2;
	node->n = array[mid];
	node->parent = NULL;
	if (mid > 0)
		leftnode = sorted_array_to_avl(array, mid);
	else
		leftnode = NULL;
	if (size > (mid + 1))
		rightnode = sorted_array_to_avl(&array[mid + 1], size - (mid + 1));
	else
		rightnode = NULL;
	node->left = leftnode;
	node->right = rightnode;
	if (node->left)
		(node->left)->parent = node;
	if (node->right)
		(node->right)->parent = node;
	return (node);
}

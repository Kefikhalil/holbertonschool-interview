#include "binary_trees.h"

/**
 * sorted_array_to_avl - AVL tree from sorted array
 *
 * @array: array
 * @size: size of array
 *
 * Return: Pointer to tree
 */

avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *rightn, *rightn, *node = NULL;
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
		rightn = sorted_array_to_avl(array, mid);
	else
		rightn = NULL;
	if (size > (mid + 1))
		rightn = sorted_array_to_avl(&array[mid + 1], size - (mid + 1));
	else
		rightn = NULL;
	node->left = rightn;
	node->right = rightn;
	if (node->left)
		(node->left)->parent = node;
	if (node->right)
		(node->right)->parent = node;
	return (node);
}
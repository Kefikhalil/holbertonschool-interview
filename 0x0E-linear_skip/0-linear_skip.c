#include "search.h"

/**
 * linear_skip - linear skip
 * @list: list
 * @value: value
 * Return: 0
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *paw;
	skiplist_t *paws;
	char *index = "Value checked at index";
	char *indexes = "Value found between indexes";

	if (!list)
		return (NULL);

	paws = list;
	paw = list->express;
	while (paw)
	{
		printf("%s [%lu] = [%d]\n", index, paw->index, paw->n);
		if (paw->n >= value)
			break;
		paws = paw;
		if (!paw->express)
		{
			while (paw->next)
				paw = paw->next;
			break;
		}
		paw = paw->express;
	}
	printf("%s [%lu] and [%lu]\n", indexes, paws->index, paw->index);
	while (paws && paws->index <= paw->index)
	{
		printf("%s [%lu] = [%d]\n", index, paws->index, paws->n);
		if (paws->n == value)
			return (paws);
		paws = paws->next;
	}
	return (NULL);
}
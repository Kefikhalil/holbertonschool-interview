#include "sort.h"


/**
 * merging - merging
 * @s: start
 * @m: middle
 * @e: end
 * @unmerged: array
 *
 * Return: 0
 */

void merging(size_t s, size_t m, size_t e, int *unmerged)
{

	printf("Merging...\n");
	printf("[left]: ");
	print_array(unmerged + s, m - s);
	printf("[right]: ");
	print_array(unmerged + m, e - m);
}

/**
 * merge - merge
 * @start: start
 * @middle: middle
 * @end: end
 * @a: array
 * @unmerged: array
 *
 * Return: 0
 */
void merge(size_t start, size_t middle, size_t end, int *a, int *unmerged)
{
	size_t i = start;
	size_t x = middle;
	size_t y = start;

	merging(start, middle, end, unmerged);

	while (i < middle && x < end && y < end)
	{
		if (unmerged[i] <= unmerged[x])
		{
			a[y] = unmerged[i];
			i++;
		}
		else
		{
			a[y] = unmerged[x];
			x++;
		}
		y++;
	}
		while (i < middle)
			a[y++] = unmerged[i++];

		while (x < end)
			a[y++] = unmerged[x++];
}

/**
 * split - split
 * @start: start
 * @end: end
 * @array: the array to sort
 * @unmerged: sublist to be merged
 *
 * Return: void
 */

void merge_main(size_t start, size_t end, int *array, int *unmerged)
{
	size_t count;
	size_t middle;

	if (end - start < 2)
		return;
	middle = (start + end) / 2;
	merge_main(start, middle, array, unmerged);
	merge_main(middle, end, array, unmerged);
	merge(start, middle, end, array, unmerged);
	for (count = start; count < end; count++)
		unmerged[count] = array[count];
	printf("[Done]: ");
	print_array(array + start, end - start);
}

/**
 * merge_sort - sorts an array of integers in ascending order using the
 * @array: array
 * @size: size of the array
 *
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
	size_t i;
	int *unmerged;

	if (array == NULL || size < 2)
		return;
	unmerged = malloc(sizeof(int) * size);
	if (unmerged == NULL)
		return;
	for (i = 0; i < size; i++)
		unmerged[i] = array[i];
	merge_main(0, size, array, unmerged);
	free(unmerged);
}


#include "search_algos.h"

/**
 * binary_search - search  an array of integers
 * @array: pointer
 * @size: elements in array
 * @value: is value
 * 
 *Return: 0
 */
int binary_search(int *array, size_t size, int value, int l, int d)
{
	int x = 0, y = 0;

	if (l > d)
		return (-1);

	y = l + ((d - l) / 2);
	printf("Searching in array: ");
	for (x = l; i <= d; x++)
	{
		if (x < d)
			printf("%d, ", array[x]);

		else
			printf("%d\n", array[x]);
	}
	if (array[y] < value)
		l = y + 1;
	else if (array[y] > value)
		d = y;
	else if (array[y] == value && array[y - 1] == value)
		d = y;
	else
		return (y);
	return (binary_search(array, size, value, l, d));

}

/**
 * advanced_search - search  an array of integers
 * @array: pointer
 * @size: elements in array
 * @value: is value
 * 
 *Return:0
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t d = size - 1, l = 0;
	int p;

	if (array == NULL)
		return (-1);
	p = (binary_search(array, size, value, l, d));
	return (p);
}
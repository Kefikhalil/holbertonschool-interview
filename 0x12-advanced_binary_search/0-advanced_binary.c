#include "search_algos.h"

void print_array(int *array, int min, int max)
{
	int i;

	for (i = min; i < max; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}
/**
 * binary_search - search  an array of integers
 * @array: pointer
 * @size: number of elements
 * @value: is value
 *
 * Return: return the first index where value is located or -1 if is none
 */
 int binary_search(int *array, size_t size, int value, int max, int min)
{
	int i = 0;
    int x = 0;

	if (max > min)
		return (-1);

	x = max + ((min - max) / 2);
	printf("Searching in array: ");
	for (i = max; i <= min; i++)
	{
		if (i < min)
			printf("%d, ", array[i]);

		else
			printf("%d\n", array[i]);
	}
	if (array[x] < value)
		max = x + 1;
	else if (array[x] > value)
		min = x;
	else if (array[x] == value && array[x - 1] == value)
		min = x;
	else
		return (x);
return (binary_search(array, size, value, max, min));
}

/**
 * advanced_search - search  an array of integers
 * @array: pointer
 * @size: number of elements
 * @value: is value
 *
 * Return: return the first index where value is located or -1 if is none
 */
int advanced_search(int *array, size_t size, int value)
{
	size_t min = size - 1;
    size_t max = 0;
	int y;

	if (array == NULL)
		return (-1);
	y = (binary_search(array, size, value, max, min));
	return (y);
}
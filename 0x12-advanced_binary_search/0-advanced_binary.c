#include "search_algos.h"

/**
 * form_array - prints array
 * @array: pointer
 * @min: min
 * @max: max
 *
 * Return: 0
 */
void form_array(int *array, int min, int max)
{
	int x;

	for (x = min; x < max; x++)
		printf("%d, ", array[x]);

	printf("%d\n", array[x]);
}
/**
 * Search_Binary - binary search
 * @array: pointer
 * @min: min
 * @max: max
 * @binary: value
 *
 * Return: 0
 */
int Search_Binary(int *array, int min, int max, int value)
{
	int m;

	if (min > max)
		return (-1);

	printf("Searching in array: ");
	form_array(array, min, max);

	if (min == max && array[max] == value)
		return (max);

	if (min == max && array[max] != value)
		return (-1);

	m = min + (max - min) / 2;

	if ((m == min || value != array[m - 1]) && array[m] == value)
		return (m);

	if (array[m] >= value)
		return (Search_Binary(array, min, m, value));
	return (Search_Binary(array, m + 1, max, value));
}
/**
 * advanced_binary - sadvanced_binary
 * @array: pointer
 * @size: size
 * @value: value
 *
 * Return: 0
 */
int advanced_binary(int *array, size_t size, int value)
{

	if (!array || size == 0)
		return (-1);

	return (Search_Binary(array, 0, size - 1, value));
}

#include "sort.h"

/**
 * print_array - Prints array
 *
 * @array: array
 * @size: size
 */
void print_sort(const int *array, size_t size)
{
	size_t a;

	a = 0;
	while (array && a < size)
	{
		if (a > 0)
			printf(", ");
		printf("%d", array[a]);
		++a;
	}
	printf("\n");
}
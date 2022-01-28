#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * merge - merge sort
 * @array: Array
 * @size: Size
 * @m: index
 * @temp: Temp array
 * Return: 0
 */
void merge(int *array, int size, int m, int *temp)
{
	int a, b, c;

	printf("Merging...\n");
	printf("[left]: ");
	print_sort(array, m);
	printf("[right]: ");
	print_sort(array + m, size - m);
	for (a = 0,  = m, c = 0; c < size; c++)
	{

		if ( == size)
		{
			temp[c] = array[a];
			a++;
		}
		else if (a == m)
		{
			temp[c] = array[];
			++;
		}
		else if (array[] < array[a])
		{
			temp[c] = array[];
			++;
		}
		else
		{
			temp[c] = array[a];
			a++;
		}
	}
	for (a = 0; a < size; a++)
	{
		array[a] = temp[a];
	}
	printf("[Done]: ");
	print_sort(temp, size);
}


/**
 * merging - merge sort
 * @array: Array
 * @size: Size
 * @temp: Temp
 * Return: 0
 */
void merging(int *array, size_t size, int *temp)
{
	int x;

	if (size < 2)
		return;
	x = size / 2;
	merging(array, x, temp);
	merging(array + x,  size - x, temp);
	merge(array, size, x, temp);
}


/**
 * merge_sort - merge sort
 * @array: Array
 * @size: Size
 * Return: 0
 */
void merge_sort(int *array, size_t size)
{
	int *temp = NULL;

	if (!array || size < 2)
		return;
	temp = malloc(sizeof(int) * size);
	if (!temp)
		return;
	merging(array, size, temp);
	free(temp);
}

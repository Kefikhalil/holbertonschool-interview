#include "sort.h"
#include <stdio.h>


/**
 * heap - heapsort
 * @array: Array
 * @size: Size
 **/

 
void heap(int *array, size_t size)
{
	int s = (int)((size - 1) / 2);

	while (s >= 0)
	{
		siftDown(array, s, size - 1, size);
		s -= 1;
	}
}
/**
 * siftDown - Sift
 * @array: Array
 * @s: r
 * @end: end
 * @size: size
 **/
void siftDown(int *array, int s, int end, int size)
{
	int r = s;
	int c = -1;
	int tmp = -1;


	while (2 * r + 1 <= end)
	{
		c = 2 * r + 1;
		tmp = r;

		if (array[c] > array[tmp])
			tmp = c;
		if (c + 1 <= end && array[c + 1] > array[tmp])
			tmp = c + 1;
		if (tmp != r)
		{
			swap(array, r, tmp, size);
			r = tmp;
		}
		else
		{
			return;
		}
	}
}
/**
 * swap - Swaps
 * @array: Array
 * @first: Index
 * @second: Index
 * @size: size
 **/
void swap(int *array, int first, int second, int size)
{
	int tmp;

	tmp = array[first];
	array[first] = array[second];
	array[second] = tmp;
	print_array(array, size);
}
/**
 * heap_sort - Sorts
 * @array: Array
 * @size: Size
 **/
void heap_sort(int *array, size_t size)
{
	int end = size - 1;

	heap(array, size);
	while (end > 0)
	{
		swap(array, end, 0, size);
		end -= 1;
		siftDown(array, 0, end, size);
	}
}
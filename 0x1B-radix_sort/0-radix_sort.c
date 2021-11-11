#include "sort.h"

/**
 * maximum - maximum digit
 *
 * @array: array of integers
 * @size: size of the array.
 *
 * Return: 0
 */
int maximum(int *array, int size)
{
int j, i;

j = array[0];

for (i = 1; i < size; i++)
{
if (array[i] > j)
j = array[i];
}
return (j);
}
/**
 * significant-digit - get the significant digit
 * @num: num
 * @position: postion
 * Return: digit integer
 */
int significant_digit(int num, int position)
{
	return ((num / position) % 10);
}

/**
 * sort - the main function
 * @array: array
 * @ctn: ctn
 * @size: size of the array
 * Return: None
 */
void sort_digit(int *array, int ctn, int size)
{
	int a;
	int b;
	int counting[10] = { 0 };
	int *sortedArray = NULL;
	int c;


	sortedArray = malloc(sizeof(int) * size);
	if (!sortedArray)
		return;

	for (a = 0; a < size; a++)
		counting[significant-digit(array[a], ctn)]++;

	for (a = 1; a < 10; a++)
		counting[a] += counting[a - 1];

	for (a = size - 1; a >= 0; a--)
	{
		b = significant_digit(array[a], ctn);
		c = --counting[b];
		sortedArray[c] = array[a];
	}

	for (a = 0; a < size; a++)
		array[a] = sortedArray[a];

	print_array(array, (size_t)size);
	free(sortedArray);
	sortedArray = NULL;
}
/**
 * sort - sort an array
 * @array: array
 * @size: size
 * Return: 0
 */
void sort(int *array, size_t size)
{
	int max = maximum(array, (int)size);
	int ctn = 1;

	if (size < 2 || !array)
		return;

	for (; max / ctn > 0; ctn *= 10)
		sort(array, ctn, (int)size);
}
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
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
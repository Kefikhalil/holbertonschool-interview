#include <stdio.h>
#include "sandpiles.h"

/**
 * print_grid - prints a 3x3 grid
 *
 * @grid: 3x3 grid
 *
 * Return: sum
 */

static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * print_grid - prints a 3x3 grid
 *
 * @grid: 3x3 grid
 *
 * Return: sum
 */

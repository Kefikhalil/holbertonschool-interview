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
 * gridFill - prints a 3x3 grid
 *
 * @grid: 3x3 grid
 *
 * Return: sum
 */

void gridFill(int *grid)
{
	int fill[3][3] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};
	int i = 0;

	for (; i < 9; i++)
	{
		if (*(grid + i) > 3)
		{
			*(grid + i) -= 4;
			if (i / 3 != 0)
				fill[(i / 3) - 1][i % 3] += 1;
			if (i / 3 != 2)
				fill[(i / 3) + 1][i % 3] += 1;
			if (i % 3 != 0)
				fill[i / 3][(i % 3) - 1] += 1;
			if (i % 3 != 2)
				fill[i / 3][(i % 3) + 1] += 1;
		}
		fill[i / 3][i % 3] += *(grid + i);
	}
	for (i = 0; i < 9; i++)
	{
		*(grid + i) = fill[i / 3][i % 3];
	}
}

/**
 * checkGrid - checks
 *
 * @grid: 3x3 grid
 *
 * Return: grid
 */
int checkGrid(int *grid)
{
	int i, done = 0;

	for (i = 0; i < 9; i++)
	{
		if (*(grid + i) > 3)
			done = 1;
	}
	return (done);
}

/**
 * sandpiles_sum - Sum of the sandpiles
 *
 * @grid1: sandpile one
 *
 * Return: void
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int *grid3 = &grid1[0][0];
	int i, j, done = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] +=  grid2[i][j];
			if (grid1[i][j] > 3)
				done = 1;
		}
	}
	while (done)
	{
		printf("=\n");
		print_grid(grid1);
		sand_topple(grid3);
		done = is_done(grid3);
	}
}

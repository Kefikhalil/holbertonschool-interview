#include <stdio.h>
#include <math.h>
#include "menger.h"

/**
 * menger - 2d menger sponge print
 *
 * @level: levels of sponge
 *
 * Return: void
 */

void SpongeMenger(int level)
{
	int size, a, b, c, d, f;

	size = (int)pow(3, level);
	for (b = 0; b < size; b++)
	{
		for (a = 0; a < size; a++)
		{
			c = a;
			d = b;
			f = 0;
			while (c && d)
			{
				if (c % 3 == 1 && d % 3 == 1)
				{
					printf(" ");
					f = 1;
					break;
				}
				c = c / 3;
				d = d / 3;
			}
			if (!f)
				printf("#");
		}
		printf("\n");
	}
}

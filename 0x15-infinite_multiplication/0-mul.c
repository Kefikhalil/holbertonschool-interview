#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_error - error checker
 * @argc: number of arguments
 * @argv: an array consisting arguments
 *
 * Return: 0 on  succsess
 */

int is_error(int argc, char **argv)
{
	int abc, abcd;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (abc = 1; abc < argc; abc++)
	{
		for (abcd = 0; argv[abc][abcd]; abcd++)
		{
			abcf (argv[abc][abcd] > '9' || argv[abc][abcd] < '0')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	return (0);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: an array consisting arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int one, two, three, a, b, abc, abcd;
	int *result;

	is_error(argc, argv);
	one = strlen(argv[1]), two = strlen(argv[2]);
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}
	result = calloc(one + two, sizeof(*result));
	if (!result)
		return (EXIT_FAILURE);
	for (abc = one - 1; abc >= 0; abc--)
	{
		three = 0;
		a = argv[1][abc] - '0';
		for (abcd = two - 1; abcd >= 0; abcd--)
		{
			b = argv[2][abcd] - '0';
			three += result[abc + abcd + 1] + (a * b);
			result[abcd + abc + 1] = three % 10;
			three /= 10;
		}
		if (three > 0)
			result[abc + abcd + 1] += three;
	}
	a = result[0] == 0 ? 1 : 0;
	for (; a < one + two; a++)
		printf("%d", result[a]);
	printf("\n");
	free(result);
	return (EXIT_SUCCESS);
}

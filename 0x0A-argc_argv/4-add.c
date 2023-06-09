#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers.
 * If no number is passed to the program, print 0
 * If one of the number contains symbols that are not digits,
 * print Error, and return 1
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: 0 if all works
 */

int main(int argc, char **argv)
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
				sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}

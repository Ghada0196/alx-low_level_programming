#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simples operations
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: an integer
 */

int main(int argc, char **argv)
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error98\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if ((*op == '*' || *op == '/') && b == 0)
	{
		printf("Error100\n");
		exit(100);
	}

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}

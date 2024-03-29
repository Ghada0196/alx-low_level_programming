#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: change
 */

int main(int argc, char **argv)
{
	int change, money, i;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}

	money = atoi(argv[1]);
	change = 0;
	for (i = 0; i < 5; i++)
	{
		change += money / cents[i];
		money = money % cents[i];
	}

	printf("%d\n", change);
	return (0);
}

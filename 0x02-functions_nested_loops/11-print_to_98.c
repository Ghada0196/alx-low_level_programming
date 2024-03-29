#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer provided
 * Return: nothing
 *
*/

void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("98\n");
	}
	else
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
		printf("98\n");
	}
}

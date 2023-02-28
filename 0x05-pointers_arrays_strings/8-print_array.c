#include "main.h"
#include <stdio.h>

/**
 * print_array - check description
 * @a: an input integer
 * @n: another input integer
 * description:  prints n elements of an array of integers
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	_putchar('\n');
}

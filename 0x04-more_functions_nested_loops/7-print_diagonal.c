#include "main.h"

/**
 * print_diagonal - check description
 * @n: an input number
 * description: draws a diagonal line
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}

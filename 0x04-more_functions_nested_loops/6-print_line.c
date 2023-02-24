#include "main.h"

/**
 * print_line - check description
 * @n: input number
 * description: draws a straight line
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}

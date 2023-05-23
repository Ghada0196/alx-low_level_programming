#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer provided
 * Return: nothing
 *
*/

void print_to_98(int n)
{
	int i;

	if (n < 0)
		_putchar('-');
	if (n >= 10)
		_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');

	for (i = n + 1; i < 99; i++)
	{
		_putchar(',');
		_putchar(' ');
		if (i < 0)
			_putchar('-');
		if (i >= 10)
			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}

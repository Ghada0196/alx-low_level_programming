#include "main.h"

/**
 * print_number - check description
 * @n: an input number
 * description: print an integer
 * Return: nothing
 */

void print_number(int n)
{
	int i = 1;
	int r = n;

	if (n < 0)
	{
		_putchar('-');
		r = n * -1;
		n = n * -1;
	}

	if (n < 10)
		_putchar(n + '0');
	else
	{
		while (n > 9)
		{
			i = i * 10;
			n = n /10;
		}
		while (i > 0)
		{
			_putchar((r / i) % 10 + '0');
			i = i / 10;
		}
	}
}

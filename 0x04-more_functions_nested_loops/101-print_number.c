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
	int r;
	
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n < 10)
		_putchar(n + '0');
	else
	{
		r = n;
		while (r > 9)
		{
			i = i * 10;
			r = r /10;
		}
		while (i > 0)
		{
			_putchar((n / i) % 10 + '0');
			i = i / 10;
		}
	}
}
	

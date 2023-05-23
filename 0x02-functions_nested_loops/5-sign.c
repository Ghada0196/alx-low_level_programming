#include <main.h>

/**
 * main - prints the sign of a number
 * @n: integer provided
 * Return: 1 if +, 0 if zero and -1 if -
 *
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

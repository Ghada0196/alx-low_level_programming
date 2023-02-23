#include "main.h"

/**
 * print_last_digit - check description
 * @n: an input number
 * description: prinst last digi oof a given character
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}

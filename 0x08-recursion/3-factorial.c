#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: a given number
 *
 * Return: a number
 */

int factorial(int n)
{
	int f = n;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	f *= factorial(n - 1);

	return (f);
}

#include "main.h"

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: the number
 *
 *  Return: the square root
 */

int _sqrt_recursion(int n)
{
	int num = n;

	if (n < 0)
		return (-1);

	if (n * n != num)
		_sqrt_recursion(n - 1);

	return (n);
}

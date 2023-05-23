#include "main.h"

/**
 * main - computes the absolute value of an integer
 * @n: integer provide
 * Return: the absolute value of n
 *
*/

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

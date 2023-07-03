#include "main.h"

/**
 * find_root - find rout of number n
 * @num: the number
 * @root: the root
 * Return: the coorect root if found
 */

int find_root(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_root(num, root + 1));
}

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: the number
 *
 *  Return: the square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_root(n, root));
}

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	int len =0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		len++;
	}

	return (len);
}

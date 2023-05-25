#include "main.h"

/*
 * _isupper - checks for uppercase character
 * @c: character
 * Return: 1 if c is uppercase
 * Returns 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}

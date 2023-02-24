#include "main.h"

/**
 * _isdigit - check description
 * @c: an input integer 
 * description: checks for a digit
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}

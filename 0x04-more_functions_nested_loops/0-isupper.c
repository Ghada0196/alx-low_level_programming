#include "main.h"

/**
 * _isupper - check description
 * @c: an input character
 * description: checks for uppercase character
 * Return : 1 if uppercas or 0 otherwise
 */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _isupper - check description
 * @c: an input number
 * Description: check for uppercase character
 * Return : return 1 if uppercase or 0 otherwise
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

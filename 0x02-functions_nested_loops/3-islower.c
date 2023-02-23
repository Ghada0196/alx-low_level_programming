#include "main.h"

/**
 * _islower - check description
 * @c: An input character
 * description: checks for lowercase character
 * Return: 1 if true or 0 if false
 */

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}

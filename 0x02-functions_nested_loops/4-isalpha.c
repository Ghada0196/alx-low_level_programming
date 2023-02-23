#include "main.h"

/**
 * _isalpha - check description
 * @c: an input character
 * description: checks for alphabetic character
 * Return: 1 if true or 0 if false
 */

int _isalpha(int c)
{
	char i;
	char j;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	for (j = 'a'; j <= 'z'; j++)
	{
		if (c == j)
			return (1);
	}
	return (0);
}

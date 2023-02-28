#include "main.h"

/**
 * _atoi - check description
 * @s: an input string
 * description: convert a string to an integer
 * Return: nothing
 */

int _atoi(char *s)
{
	int i = 0;
	int res = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + (s[i] - '0');
			if (s[i - 1] == '-')
				res = res * -1;
		}
		else
		{
			if (res != 0)
				break;
		}
		i++;
	}

	return (res);
}

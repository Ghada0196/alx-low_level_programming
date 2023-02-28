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
		if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-' && res == 0)
				res = -1;
			else
				res = res * -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + (s[i] - '0');
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

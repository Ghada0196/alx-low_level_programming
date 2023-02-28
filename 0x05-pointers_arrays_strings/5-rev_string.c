#include "main.h"

/**
 * rev_string - check description
 * @s: an input pointer
 * description: reverse a string
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char swap;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len / 2; i++)
	{
		swap = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = swap;
	}
}

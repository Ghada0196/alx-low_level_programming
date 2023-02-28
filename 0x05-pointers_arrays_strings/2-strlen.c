#include "main.h"

/**
 * _strlen - check description
 * @s: an input pointer to a char
 * description: returns the length of a string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

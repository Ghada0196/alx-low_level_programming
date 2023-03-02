#include "main.h"

/**
 * _strncpy - check description
 * @dest: an input char type string
 * @src: an input char type string
 * description: a function that copies a string
 * Return: a char type string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			break;
	}
	dest[i] = '\0';

	return (dest);
}

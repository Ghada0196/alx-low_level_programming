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
	int len = 0;

	while (dest[len] != '\0')
		len++;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

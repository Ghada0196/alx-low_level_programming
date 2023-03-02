#include "main.h"

/**
 * _strncat - check description
 * @dest: an input string
 * @src: an input string
 * @n: an inpt integer
 * description: concatenates two strings
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j <= n; j++)
	{
		dest[i + j] = src[j];
		j++;
		if (src[j] == '\0')
			break;
	}
	dest[i + j] = '\0';

	return (dest);
}

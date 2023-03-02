#include "main.h"

/**
 * _strcat - check description
 * @dest: the destination string
 * @src: the source string
 * description: appends one string to another
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}

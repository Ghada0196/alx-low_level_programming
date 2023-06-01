#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: use at most n bytes from src
 * Return: result string
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len])
		len++;

	for (i = 0; i < n; i++)
		dest[len + i] = src[i];

	return (dest);
}

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Result: a new strinf
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;
	int i;

	while (dest[a] =! '\0')
		a++;

	while (src[b] =! '\0')
		b++;

	for (i = 0; i <= b; i++)
		dest[a + i] = src[i];

	return (dest);
}

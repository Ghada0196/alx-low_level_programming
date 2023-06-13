#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;
	char *array;

	while (s1[len1] != '\0' && s1 != NULL)
		len1++;

	while (s2[len2] != '\0' && s2 != NULL)
		len2++;

	array = malloc(sizeof(char) * (len1 + len2 + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len1 ; i++)
		array[i] = s1[i];

	for (i = 0; i < len2; i++)
		array[i + len1] = s2[i];

	return (array);
}

#include "main.h"
#include <stdlib.h>

/**
 * strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len ++;

	array = malloc(sizeof(char) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		array[i] = str[i];

	return (array);
}

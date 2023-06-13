#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size
 * @c: the character
 *
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return NULL;
	
	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

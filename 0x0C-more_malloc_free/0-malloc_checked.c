#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: memory size
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b);
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

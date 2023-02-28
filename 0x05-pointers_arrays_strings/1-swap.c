#include "main.h"

/**
 * swap_int - check description
 * @a: an input pointer
 * @b: another input integer
 * description: a function that swaps two integers
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

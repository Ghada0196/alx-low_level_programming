#include "main.h"

/**
 * print_rev - check description
 * @s: an input pointer
 * description: prints a string, in reverse, followed by a new line
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	for (i = 0; i <= len; i++)
		_putchar(*(s - i));
	_putchar('\n');
}

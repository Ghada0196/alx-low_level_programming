#include "main.h"

/**
 * _puts - check description
 * @str: an input pointer
 * description: prints a string, followed by a new line, to stdout
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

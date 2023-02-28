#include "main.h"

/**
 * puts2 - check description
 * @str: an input string
 * description: prints every other character of a string
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i+=2)
		_putchar(str[i]);
	_putchar('\n');
}

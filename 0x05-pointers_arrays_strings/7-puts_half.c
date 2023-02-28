#include "main.h"

/**
 * puts_half - check description
 * @str: an input string
 * description: prints half of a string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;
	for (i = len / 2; i < len; i++)
	{
		if (len % 2 == 1 && i == len / 2)
			i++;
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}

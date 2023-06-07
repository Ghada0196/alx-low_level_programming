#include "main.h"

/**
 * _puts_recursion -  prints a strig
 * @s: the string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i]);
}

#include <main.h>

/**
 * main - checks for lowercase character
 * @c: letter provided
 * Return: 1 if lowercase, 0 otherwise
 *
*/

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}

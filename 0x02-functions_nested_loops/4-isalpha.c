#include "main.h"

/**
 * _isalpha - checks for letter, lower or uppercase
 * @c: letter provided
 * Return: 1 if letter, 0 otherwise
 *
*/

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}

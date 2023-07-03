#include "main.h"

/**
 * len_str - find length of string
 * @s: the string
 * @i: the counter
 * Return: length
 */

int len_str(char *s, int i)
{
	if (s[i])
	{
		i++;
		i = len_str(s, i);
	}

	return (i);
}

/**
 * check_palin - check if string is palindrome
 * @s: string
 * @i: index from the start
 * @len: length of string
 * Return: 1 if yes, 0 if not
 */

int check_palin(char *s, int i, int len)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i])
		return (check_palin(s, i + 1, len));

	return (0);
}

/**
 * is_palindrome - find if string is palindrome
 * @s: string
 *
 * Return: 1 if yes, 0 if not
 */

int is_palindrome(char *s)
{
	int len = 0;
	int i = 0;

	if (!(*s))
		return (1);

	len = len_str(s, len);
	
	return (check_palin(s, i, len - 1));
}

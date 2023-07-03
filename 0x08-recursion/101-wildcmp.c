#include "main.h"

/**
 * find_char - find character in a string
 * @s: the string
 * @c: the char
 * @i: the index
 * Return: 1 if found, 0 if not
 */

int find_char(char *s, char c, int i)
{
	if (s[i])
	{
		if (s[i] == c)
			return (find_char(s, c, i + 1));
		else
			return (0);
	}

	return (1);
}

/**
 * check - if two strings are identical
 * @i: index for first string
 * @j: index for second string
 * Return: 1 if yes, 0 if no
 */

int check(char *s1, char *s2, int i, int j)
{
	if (s2[j] == '*' && s2[j + 1])
	{
		return (check(s1, s2, i, j + 1));
	}

	if (find_char(s1, s2[j], i) && s2[j + 1])
		return (find_char(s1, s2[j + 1], i));

	if (s2[j])
		return (0);

	return (1);
}

/**
 * wildcmp - sompare two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	return (check(s1, s2, i, j));
}

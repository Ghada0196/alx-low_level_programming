#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: always 0
 *
*/

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}

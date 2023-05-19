#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: always 0
 *
*/

int main(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
		putchar(i);
	for (i = 'A'; i < 'Z'; i++)
		puthcar(i);
	putchar('\n');

	return (0);
}

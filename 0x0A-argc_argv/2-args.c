#include <stdio.h>

/**
 * main - print all arguments
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

#include <stdio.h>

/**
 * main -  a program that prints its name
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);

	return (0);
}

#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - print a sentence before
 * main function is executed
 *
 * Return: nothing
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

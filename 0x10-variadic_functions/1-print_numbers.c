#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @seperator: the string to be printed between numbers
 * @n: number of strings passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start (ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%d%s", va_arg (ap, int), separator);
			else
				printf("%d", va_arg (ap, int));
		}
		else
			printf("%d\n", va_arg (ap, int));
	}

	va_end (ap);
}

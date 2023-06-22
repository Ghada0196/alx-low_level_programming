#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char: print a letter
 * @arg: an argument pointer
 * Return: nothing
 */

void print_char(va_list arg)
{
	printf("%c", va_arg (arg, int));
}

/**
 * print_int: print an integer
 * @arg: an argument pointer
 * Return: nothing
 */

void print_int(va_list arg)
{
	printf("%d", va_arg (arg, int));
}

/**
 * print_float: print a float
 * @arg: an argument pointer
 * Return: nothing
 */

void print_float(va_list arg)
{
	printf("%f", va_arg (arg, double));
}

/**
 * print_str: print a string
 * @arg: an argument pointer
 * Return: nothing
 */

void print_str(va_list arg)
{
	char * s;

	s = va_arg (arg, char *);

	if (s != NULL)
		printf("%s", s);
	else
		printf("(nil)");
}

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	print_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};

	va_start (ap, format);

	while (format[i])
	{
		j = 0;
		while (types[j].c)
		{
			if (types[j].c == format[i])
			{
				types[j].f(ap);
				break;
			}
			else
				j++;
		}
		i++;
	}

	printf("\n");
}

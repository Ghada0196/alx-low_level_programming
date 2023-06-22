#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char: print a letter
 * @va_list arg: an argument pointer
 * return: nothing
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

void print_int(va_list arg)
{
	int num;

	num = va_arg (arg, int);
	printf("%d", num);
}

void print_float(va_list arg)
{
	float num;

	num = va_arg (arg, double);
	printf("%f", num);
}

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

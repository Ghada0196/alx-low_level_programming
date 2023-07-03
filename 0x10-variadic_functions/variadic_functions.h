#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - Struct format
 *
 * @c: character
 * @f: type
 */

typedef struct format
{
	char c;
	void (*f)(va_list arg);
} print_t;

void print_str(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);

#endif

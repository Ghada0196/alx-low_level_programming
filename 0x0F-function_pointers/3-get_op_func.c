#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: the operator
 *
 * Return: a pointer to the function that corresponds
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*s == *ops[i].op)
			return (ops[0].f);
	}

	return (NULL);
}

#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: nothing
 *
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
				_putchar(j);
			else
			{
				_putchar(',');
				_putchar(' ');
				if (i * j < 10)
					_putchar(' ');
				else
					_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

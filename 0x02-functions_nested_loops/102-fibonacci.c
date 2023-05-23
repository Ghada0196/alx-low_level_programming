#include <stdio.h>

/**
 * main - print 50 fibonacci numbers
 *
 * Return: always 0
 *
*/

int main(void)
{
	int i;
	unsigned long a = 1, b = 2, sum;

	printf("1, 2");

	for (i = 0; i < 48; i++)
	{
		sum = a + b;
		printf(", %ld", sum);
		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}

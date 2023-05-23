#include <stdio.h>

/**
 * main - print 50 fibonacci numbers
 *
 * Return: always 0
 *
*/

int main(void)
{
	int i, sum;
	int a = 1;
	int b = 2;

	printf("1, 2, ");

	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		printf("%d, ", sum);
		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}

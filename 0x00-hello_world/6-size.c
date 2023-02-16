#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: ", sizeof(a), " byte(s)\n");
	printf("Size of an int: ", sizeof(b), " 4 byte(s)\n");
	printf("Size of a long int:" , sizeof(c), " 4 byte(s)\n");
	printf("Size of a long long int: ", sizeof(d), " 8 byte(s)\n");
	printf("Size of a float: ", sizeod(e), " 4 byte(s)\n");
	return (0);
}

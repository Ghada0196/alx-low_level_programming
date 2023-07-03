#include "main.h"


int if_prime(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div < n / 2)
		return (if_prime(n, div + 1));
	else
		return (1);
}
	
/**
 * is_prime_number -  returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: the number
 * Return:  or 
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n < 0)
		n = -n;

	if (n == 1)
		return (0);

	return (if_prime(n, div));
}

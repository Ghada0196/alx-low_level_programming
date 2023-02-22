#include <stdio.h>
#include <unistd.h>

/**
 * Main - Entry point
 *
 * Always return 0(Success)
 *
 */

int main(void) 
{
	char word[8] = "_putchar";

	for (int i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}	

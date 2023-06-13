#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av arguments
 *
 * Return: a pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, index = 0, size = ac;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i <= ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i <= ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index++] = av[i][j];
		}
		str[index++] = '\n';
	}
	str[index++] = '\0';

	return (str);
}

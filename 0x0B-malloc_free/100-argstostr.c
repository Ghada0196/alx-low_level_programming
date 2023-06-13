#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int i, j = 0, index = 0, size = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i <= ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1 + ac);

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

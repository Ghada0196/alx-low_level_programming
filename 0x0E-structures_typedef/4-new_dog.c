#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog:  creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	len1 = 0;
	while (name[len1])
		len1++;

	newdog->name = malloc(sizeof(char) * (len1 + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	len2 = 0;
	while (owner[len2])
		len2++;

	newdog->owner = malloc(sizeof(char) * (len2 + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		newdog->name[i] = name[i];

	for (i = 0; i < len2; i++)
		newdog->owner[i] = owner[i];

	newdog->age = age;

	return (newdog);
}


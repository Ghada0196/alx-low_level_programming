#ifndef DOG_H
#define DOG_H

/**
 * file: dog.h
 * description: Define a new type struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

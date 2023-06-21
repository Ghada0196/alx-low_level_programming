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

/* Define a new type dog_t as a new name for the type struct dog */

typedef struct dog dog_t;

#endif

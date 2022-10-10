#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - structure containing dog's information.
 * @name: name of dog.
 * @age: age of dog in decimal point.
 * @owner: thw owber of the dog.
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * typedef - to change name of struct dog to dog_t,
 * dog_t - new name of structure.
 */

typedef struct dog dog_t;

#endif

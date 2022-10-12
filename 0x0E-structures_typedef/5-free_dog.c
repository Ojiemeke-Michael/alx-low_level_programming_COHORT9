#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: pointer to the structure that is to be freed.
 * dog_t *d: structure to be freed.
 */

void free_dog(dog_t *d)
{
	free(d);
}

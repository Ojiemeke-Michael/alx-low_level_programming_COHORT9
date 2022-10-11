#include "dog.h"

/**
 * print_dog - prints the name of the dog.
 * @d: pointer to the structure struct dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		/*printf("Age: (nil)\n");*/
		exit(1);
	}

	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	if ((*d).age == NULL)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}

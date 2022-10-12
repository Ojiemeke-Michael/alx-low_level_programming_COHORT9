#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of its owner.
 *
 * Return:: pointer to the newly allocated memory on success, NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, total_len;
	int len_name;
	int len_owner;
	dog_t *ptr;
	
	for (i = 0; *(name + i) != '\0'; i++)
		len_name++;
	for (j = 0; *(owner + j) != '\0'; j++)
		len_owner++;
	
	total_len = len_name + len_owner;
	
	ptr = (dog_t *) malloc(sizeof(float) + total_len);
	if (ptr == NULL)
		return (NULL);
	
	ptr->name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
	
	return (ptr);
}

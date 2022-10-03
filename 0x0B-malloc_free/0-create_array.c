#include "main.h"

/**
 * create_array - function which uses Dynamic Memory Allocation
 * to create an array of chars, and initializes it with a specific char.
 *
 * @size: length of array / string.
 * @c: the character the array should contain allthrough.
 * Return: pointer 'ar' on 0, "NULL" on 1.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == '0')
		return (NULL);

	ar = malloc(size * sizeof(*ar));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	ar[i] = '\0';

	return (ar);
}

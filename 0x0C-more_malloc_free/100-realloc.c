#include "main.h"

/**
 * _realloc - a function that reallocates a memory blocik
 * using malloc and free. where ptr is a pointer to the memory previously
 * old_size is the size, in bytes, of the allocated space for ptr,
 * and new_size is the new size, in bytes of the new memory block.
 * The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the
 * minimum of the old and new size
 *
 * @ptr: is a pointer to the memory previously
 * allocated with a call to malloc: malloc(old_size).
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: on success, pointer to the allocated memory.
 * on failure, NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char nptr;

	if (ptr == NUll)
	{
		free(ptr);
		ptr = malloc(new_size);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	nptr = malloc(new_size);

	for (i = 0; i < old_size; i++)
		nptr[i] = ptr[i];

	return (nptr);
}

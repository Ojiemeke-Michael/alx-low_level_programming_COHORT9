#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array containing elements to be acted upon.
 * @size: size of the array.
 * @action: pointer to a function which performs action on the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	for (n = 0; n < size; n++)
	{
	action(array[n]);
	}
}

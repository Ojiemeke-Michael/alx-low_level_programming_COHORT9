#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * The array created should contain all the values from
 * min (included) to max (included), ordered from min to max.
 *
 * @min: minimum number in the array.
 * @max: maximum number in the array.
 *
 * Return: the pointer to the newly created array.
 * If min > max, return NULL. If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *Array;
	int i;
	int len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	Array - (int *) malloc(len * sizeof(* Array));

	if (Array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*(Array + i) = min + i;
	}

	return (Array);
}

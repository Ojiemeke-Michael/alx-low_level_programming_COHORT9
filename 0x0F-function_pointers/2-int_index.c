#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: arrau containing contents to be searched
 * @size: sizr of the array.
 * @cmp: pointer to a function that contains the kind of criteria for
 * the search and returns int, 0 if false else another number.
 * Return: on success, returns the index of the seaech result.
 * on failure. returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int flag;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		flag = cmp(array[i]);
		if (flag != 0)
			return (i);
	}

	return (-1);
}

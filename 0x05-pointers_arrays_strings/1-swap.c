#include "main.h"

/**
 * swap_int - swaps two integer values a and b.
 *
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int mich;

	mich = *a;
	*a = *b;
	*b = mich;
}


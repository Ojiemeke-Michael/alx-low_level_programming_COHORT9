#include "main.h"

/**
 * reverse_array - function to reverse the content of an array of integers.
 *
 * @a: pointer for the string to be reversed.
 * @n: length of the string.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	temp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = temp;
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: pointer containing the matrix.
 * @size: the size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i, j;

	for (i = 0; i < (size * size); i + size + 1)
	{
		sum1 = sum1 + *(s + i);
	}

	for (j = size - 1; j < (size * size); j + size - 1)
	{
		sum2 = sum2 + *(s + j);
	}

	printf("%d, %d\n", sum1, sum2);
}

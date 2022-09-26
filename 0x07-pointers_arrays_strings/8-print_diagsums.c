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
	int i, j, x, y;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				sum1 += a[i][j];
		}
	}

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x + y == size - 1)
				sum2 += a[x][y];
		}
	}

	printf("%d, %d\n", sum1, sum2);
}

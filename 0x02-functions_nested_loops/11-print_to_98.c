#include <stdio.h>

/**
 * print_to_98 - to print natural numbers from0 to 98 followed by anew line
 *
 * @n: starting point for the natural counting number.
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

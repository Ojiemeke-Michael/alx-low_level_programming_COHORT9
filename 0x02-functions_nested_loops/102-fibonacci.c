#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints first 50 fibonacce numbers starting from
 * 1 and 2 followed by new line
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

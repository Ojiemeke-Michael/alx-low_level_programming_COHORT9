#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of even-valued terms in
 * fibonacci followed by a new line
 *
 * Return: 0 Always
 */
int main(void)
{
	float total_sum;
	unsigned long fib1 = 0, fib2 = 1, fib_sum;

	while (1)
	{
		fib_sum = fib1 + fib2;
		if (fib_sum > 4000000)
			break;
		if ((fib_sum % 2) == 0)
			total_sum += fib_sum;

		fib1 = fib2;
		fib2 = fib_sum;
	}

	printf("%.0f\n", total_sum);
	return (0);
}

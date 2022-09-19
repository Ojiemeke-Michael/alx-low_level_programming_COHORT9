#include <stdio.h>

/**
 * main - Entry point for printing the largest
 * prime factor of an integer.
 *
 * Return: (0) Always;
 */
int main(void)
{
	long int n;
	long int div = 2;
	long int ans = 0;
	long int maxFact;
	n = 612852475143;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld is the largest prime factor!\n", maxFact);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}

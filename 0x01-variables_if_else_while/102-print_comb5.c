#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Description: prints all possible combination of two digit numbers from 0-99
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	int p;
	int q;

	for (p = 0; p <= 98; p++)
	{
		for (q = p + 1; p <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			if (p == 98 && q == 99)	
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

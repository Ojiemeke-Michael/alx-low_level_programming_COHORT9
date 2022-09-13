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
	int p = 48;
	int q = 0;
	int b;
	int c = 44;

	while (q <= 99)
	{
		b = q + 1;
		while (b <= 99)
		{
			putchar((q / 10) + p);
			putchar((q % 10) + p);
			putchar(32);
			putchar((b / 10) + p);
			putchar((b % 10) + p);
			if (q != 98 || b != 99)
			{
			putchar(c);
			putchar(32);
			}
			b += 1;
		}
		q++;
	}
	putchar('\n');
	return (0);
}

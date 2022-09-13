#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combination of three digit numbers
 * using putchar
 *
 * i stands for one, j stands for tens and k stands for hundred
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, j, k;

	for (k = '0'; k <= '9'; k++)
	{
		for (j = (k + 1); j <= '9'; j++)
		{
			for (i = (j + 1); i <= '9'; i++)
			{
				putchar(k);
				putchar(j);
				putchar(i);
				if (k != '7' || j != '8' || i != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

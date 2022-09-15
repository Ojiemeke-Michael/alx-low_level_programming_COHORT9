#include "main.h"

/**
 * print_diagonal - prints diagonals
 * in the terminal n number of times.
 *
 * @n: number of times to print "\"
 */
void print_diagonal(int n)
{
	int i;
	int j;
	char slash = '\';

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j == i)
					_putchar(slash);
				else
				{
					_putchar(' ');
				}
				_putchar('\n');
			}
		}
	}
}

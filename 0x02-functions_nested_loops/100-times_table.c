#include "main.h"

/**
 * print_times_table - prints n times table.
 *
 * @n: character n for the number of times to print times table for n
 */
void print_times_table(int n)
{
	int dig, times, prdt;

	if (n >= 0 && n <= 15)
	{
		for (dig = 0; dig <= n; dig++)
		{
			_putchar(',');
			_putchar(' ');
			prdt = dig * times;
			if (prdt < 99)
				_putchar(' ');
			if (prdt <= 9)
				_putchar(' ');
			if (prdt >= 100)
			{
				_putchar((prdt / 100) + '0');
				_putchar((prdt / 10) % 10 + '0');
			}
			else if (prdt <= 99 && prdt >= 10)
			{
				_putchar((prdt / 10) + '0');
			}
			_putchar((prdt % 10) + '0');
		}
		_putchar('\n');
	}
}

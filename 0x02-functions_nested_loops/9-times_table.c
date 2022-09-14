#include "main.h"

/**
 * times_table - prints all time table from 0 to 9
 *
 * Return - 0
 */
void times_table(void)
{
	int i;
	int n;
	int mult;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');

			mult = i * n;
			if (mult <= 9)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');
			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}

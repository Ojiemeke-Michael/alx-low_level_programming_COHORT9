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

	for (i = 0; i <= 9; i++)
	{
		for (n = 1; n <= 9; n++)
		{
			_putchar(i * n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

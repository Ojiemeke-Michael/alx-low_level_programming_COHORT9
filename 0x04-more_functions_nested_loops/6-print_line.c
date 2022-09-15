#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: this determines the number of times the char '_' should be printed
 */
void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

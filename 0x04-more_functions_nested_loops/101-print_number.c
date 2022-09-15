#include "main.h"

/**
 * print_number - prints an integer to the standard output
 * @n: the integer to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

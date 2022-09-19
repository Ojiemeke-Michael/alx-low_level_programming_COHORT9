#include "main.h"

/**
 * print_rev - function to print elements of an array in reverse order.
 *
 * @s: array for which its characters are printed in reverse order.
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	while (count)
	{
		_putchar(s[count - 1]);
		count--;
	}

	_putchar('\n');
}

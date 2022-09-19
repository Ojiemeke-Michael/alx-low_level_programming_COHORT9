#include "main.h"

/**
 * puts_half - prints half the length of the string.
 *
 * @str: the string of which half is printed.
 */
void puts_half(char *str)
{
	int a = 0, b, c;

	while (str[a] != '\0')
		a++;

	b = (a - 1) / 2;

	for (c = b + 1; str[c] != '\0'; b++)
		_putchar(str[c]);

	_putchar('\n');
}

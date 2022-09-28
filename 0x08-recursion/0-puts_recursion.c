#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: char pointer variable that contains string to be printed.
 */
void _puts_recursion(char *s)
{
	{
	if (*s == '\0')
	{
		return ('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	_putchar('\n');
}

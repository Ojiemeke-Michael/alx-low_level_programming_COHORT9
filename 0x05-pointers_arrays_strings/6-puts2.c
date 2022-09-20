#include "main.h"

/**
 * puts2 - function to print every other characters (ie two two char)
 * in a string.
 * @str: string to which the action is performed
 */
void puts2(char *str)
{
	int i, c = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		c++;
	}
	for (i = 0; i < c; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

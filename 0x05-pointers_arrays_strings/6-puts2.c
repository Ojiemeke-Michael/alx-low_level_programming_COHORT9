#include "main.h"

/**
 * puts2 - function to print every other characters (ie two two char)
 * in a string.
 * @str: string to which the action is performed
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count += 2;
	}
	_putchar('\n');
}

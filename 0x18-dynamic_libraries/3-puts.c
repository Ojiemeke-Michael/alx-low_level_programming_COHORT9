#include "main.h"

/**
 * _puts - acts as a puts function;
 *
 * @str: array string that needs to be printed
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}

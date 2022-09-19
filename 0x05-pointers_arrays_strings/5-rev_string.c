#include "main.h"

/**
 * rev_string - prints string in reverse order.
 *
 * @s: string to be reversed.
 */
void rev_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count)
	{
		_putchar(s[count - 1]);
		count--;
	}
}

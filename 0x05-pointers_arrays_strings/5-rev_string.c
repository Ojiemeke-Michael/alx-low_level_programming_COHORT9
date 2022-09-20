#include "main.h"

/**
 * rev_string - prints string in reverse order.
 *
 * @s: string to be reversed.
 */
void rev_string(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
}

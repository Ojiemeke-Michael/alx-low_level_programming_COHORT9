#include "main.h"

/**
 * print_alphabet_x10 - print all lowercase
 *
 * alphabets 10 times
 *
 * Return: 0 Always
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i < 11; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

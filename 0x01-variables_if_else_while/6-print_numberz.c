#include <stdio.h>

/**
 * main - Entry point. Prints all base 10 numbers
 *
 * Description: print all single digit numbers of base 10 using putchar.
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

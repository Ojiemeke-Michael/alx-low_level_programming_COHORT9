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
	int ch;

	for (ch = 0; ch < 10; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * main -check the code.
 *
 * Descripton: function void print_alphabet(void) to
 * to print all alphabets using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/*print_alphabet(void: to print alphabets*/
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
}

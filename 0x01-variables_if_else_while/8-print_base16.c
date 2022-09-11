#include <stdio.h>

/**
 * main - Entry point. to print all hexadecimal numbers
 *
 * Description: print all hexadecimal numbers using putchar() function
 *
 * Return: 0
 */
int main(void)
{
	int hd;
	int id;

	for (hd = 48; hd <= 57; hd++)
		putchar(hd);
	for (id = 97; id <= 102; id++)
		putchar(id);
	putchar('\n');
	return (0);
}

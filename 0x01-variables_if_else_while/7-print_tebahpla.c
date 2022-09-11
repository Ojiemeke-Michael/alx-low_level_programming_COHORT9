#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: to print lower case alphabets inreverse order.
 *
 * Return: 0
 */
int main(void)
{
	int h;

	for (h = 'z'; h >= 'a'; h--)
		putchar(h);

	putchar('\n');
	return (0);
}

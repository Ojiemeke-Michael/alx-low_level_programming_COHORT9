#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of a single number.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar((i % 10) + '0');
		if (i != 57)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

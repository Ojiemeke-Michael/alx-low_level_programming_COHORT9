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
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		} else
		{
			putchar('\n');
		}
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 10x the alphabets in lowercase
 *
 * Return: 0 Always
 */
int main(void)
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
	return (0);
}

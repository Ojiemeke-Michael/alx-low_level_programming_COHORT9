#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - to print all alphabets
 * except q and e using putchar function
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i != 'e') && (i != 'q'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

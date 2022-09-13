#include <stdio.h>

/**
 * main - Entry point
 * Description: to print all possible combinations of two digits
 * numbers followed by space and commas and by usning putchar
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i; j <= 57; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);

				if ((i == 56) && (j == 57))
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}

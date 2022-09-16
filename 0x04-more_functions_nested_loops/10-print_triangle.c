#include "main.h"

/**
 * print_triangle - prints triangle in the terminal
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j > (size - 1))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
				_putchar('\n');
			}
		}
	}
}

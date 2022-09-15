#include "main.h"

/**
 * print_square - prints a square using variable 'size'
 * @size: determines the size of the square.
 */
void print_square(int size)
{
	int x;
	int y;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y+=)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

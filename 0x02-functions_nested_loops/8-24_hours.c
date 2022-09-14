#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 * Return: 1, 0, -1
 */
void jack_bauer(void)
{
	int hrs;
	int min;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(':');
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
		}
	}
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to
 * make change for an amount of money.
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back.
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1.
 * you should use atoi to parse the parameter passed to your program.
 * If the number passed as the argument is -ve, print 0, followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.
 *
 * @argc: the number of command line arguments.
 *
 * @argv: the argument vector in the command line or the array of strings
 * (pointers to strings) in the command line.
 *
 * Return: return 1 on failure, 0 on success.
 */
int main(int argc, char *argv[])
{
	int c, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);
	if (c < 0)
	{
		putchar(48);
		putchar('\n');
		return (0);
	}

	for (; c >= 0; coins++)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)
			c -= 10;
		else if (c >= 5)
			c -= 5;
		else if (c >= 2)
			c -= 2;
		else if (c >= 1)
			c -= 1;
		else
			break;
	}

	printf("%d\n", coins);
	return (0);
}

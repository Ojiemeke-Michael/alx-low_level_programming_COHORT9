#include <stdlib.h>
#include <stdio.h>

/**
 * main -  a program that adds positive numbers.
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits,
 *  print Error, followed by a new line, and return 1.
 *  You can assume that numbers and the addition
 *  of all the numbers can be stored in an int.
 *
 *  @argc: count or number of string arguments in arguments vector.
 *  @argv: pointer of arrays containing pointer which points to string           *  constants as argumuments from the command line.
 *
 *  Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum;

	sum = 0;
	if (argc < 2)
	{
		putchar(48);
		putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *str;

		str = argv[i];

		for (j = 0; *(str + j) != '\0'; j++)
		{
			if (str[j] < 48 || str[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}


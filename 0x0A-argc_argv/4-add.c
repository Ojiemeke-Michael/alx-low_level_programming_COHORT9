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
	int i;

	int sum = 0;

	if (argc < 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((argv[i] <= 0 && argv[i] <= 47) || (argv[i] >= 58 && argv[i] <= 255))
			{
				printf("Error");
				return (1);
			}
			else
			{
				sum += argv[i];
			}
		}
	}

	return (sum);
}

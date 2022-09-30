#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 * Your program should print the result of the
 * multiplication, followed by a new line
 * You can assume that the two numbers and result of
 * the multiplication can be stored in an integer
 * If the program does not receive two arguments, your program
 * should print Error, followed by a new line, and return 1.
 *
 * @argc: count or number of string arguments in arguments vector.
 * @argv: pointer of arrays containing pointer which points to string
 * constants as argumuments from the command line.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 1;
		int j = 2;

		int first = argv[i];
		int second = argv[j];
		int res = first * second;

		printf("%d\n", res);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}

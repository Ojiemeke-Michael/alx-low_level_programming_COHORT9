#include <stdio.h>

/**
 * main - program to print the name of the executable name of the
 * file using argv and argc.
 *
 * @argc: known as "argument count" and this contains the number of string
 * of the argument. arguments passed from the command line into the main
 * function is known as COMMAND LINE ARGUMENTS. this is always at least
 * 1 as it will always contain at least the string that calls the C program.
 *
 * @argv: known as "argument vector". This contains the total strings of
 * arguments and it can be used with argc as argc helps to determine its
 * index.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)agrc;

	return (0);
}

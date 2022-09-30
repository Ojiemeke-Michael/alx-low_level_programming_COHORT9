#include <stdio.h>

/**
 * main - program that prints the number of arguments passed
 * into it except the first string argument.
 * Your program should print a number, followed by a new line.
 *
 * @argc: length of argument vector argv[].
 * @argv: pointer containing array of pointers that points to individual
 * strings in the command line.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
		sum++;
	printf("%d\n", sum);
	(void)argv[argc];

	return (0);
}

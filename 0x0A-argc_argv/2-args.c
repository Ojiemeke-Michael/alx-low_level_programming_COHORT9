#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * @argc: count or number of string arguments in arguments vector.
 * @argv: pointer of arrays containing pointer which points to string
 * constants as argumuments from the command line.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

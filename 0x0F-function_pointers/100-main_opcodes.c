#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: argument count which is the number of
 * arguments from the command line.
 * @argv: argument vector which is the array of pointers
 * to each string from the command line.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int bytes;
	int i;
	char *arr;

	bytes = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", arr[i]);
		if (i == bytes - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}

#include "main.h"

/**
 * main - program that multiplies two positive numbers.
 * Usage: mul num1 num2.
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line.
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98.
 * num1 and num2 should only be composed of digits. If not, print
 * Error, followed by a new line, and exit with a status of 98.
 * You are allowed to use more than 5 functions in your file.
 *
 * @argc: number of arguments to be multiplied which
 * is meant to be two(2) for success.
 * @argv: argument vectors or the values of the numbers to be multiplied.
 *
 * Return: on success, 0; on failure, non-zero value.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int num1, num2;
	char *str;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		str = argv[i];
		for (j = 0; *(str + j) != '\0'; j++)
		{
			if (str[j] < 48 || str[j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	int res;

	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}

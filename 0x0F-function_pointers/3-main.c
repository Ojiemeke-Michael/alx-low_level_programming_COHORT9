#include "3-calc.h"

/**
 * main - prints the result of an operation
 * * +,-,*,%,/ between two numbers from the
 * * command line.
 *
 * @argc: argument count which is the number of
 * arguments from the command line.
 * @argv: argument count which is an array of pointers
 * from the command line.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int result;
	int num1, num2;
	char o;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);

	if (!func_ptr)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func_ptr(num1, num2);
	printf("%d\n", result);

	return (0);
}

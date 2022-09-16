#include "main.h"

/**
 * main - Entry point
 *
 * Return: (0);
 */
int main(void)
{
	int x = 2;
	int y = 4;
	int z = 9;
	int largest = largest_number(x, y, z);

	printf("%d is the number\n", largest);
	return (0);
}

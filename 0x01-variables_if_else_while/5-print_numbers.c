#include <stdio.h>

/**
 * main - print hello world
 *
 * Description - print this program prints all base ten numbers from 0 - 9
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);

	printf("\n");
	return (0);
}

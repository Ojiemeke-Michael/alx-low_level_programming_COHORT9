#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: to print nbers from 1 to 100
 * with multiples of 3 as 'fizz. multiples of
 * 5 as 'Buzz' and multiples of 15 as "Fizz
 * Buzz"
 *
 * Return: 0 Always
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}

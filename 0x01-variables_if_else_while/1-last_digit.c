#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns random number to n
 * Description: prints any random number n each time it is executed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int e;
	e = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (e > 5) {
	    printf("Last digit of %d is %d and is ", n, e);
	    printf("greater than 5\n");
	}else if (n == 0) {
 	    printf ("Last digit of %d is %d and is 0\n", n, e);
	}else if ((n < 6) && (n != 0)) {
	    printf("Last string of %d is %d and is ", n, e);
	    printf("less than and is not 0\n");
	}
	return (0);
}

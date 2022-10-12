#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 * @n: number to be checked.
 * Return: integer value of natural squareroot of the number.
 */
int _sqrt(int, int);
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(int 0, int n));
}

/**
 * _sqrt - returns the square root of the number.
 * @n: test number
 * @x: squared number.
int _sqrt(int n, int x)
{
	if (n > (x / 2))
		return (-1);
	else if ((n * n) == x)
		return (n);
	return (_sqrt(n + 1, x));
}

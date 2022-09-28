#include "main.h"

/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y.
 * @x: the value to be multiplied.
 * @y: the multiplying power.
 * Return: if h < 0, return -1; else return  value.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(y - 1));
}

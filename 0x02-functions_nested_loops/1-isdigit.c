#include "main.h"

/**
 * _isdigit - function to check if a character is a digit.
 *
 * @c: character to be checked
 *
 * Return: 1 on success, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

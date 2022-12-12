#include "main.h"

/**
 *_isupper - function to check for upper case character
 *
 * @c: character to check
 *
 * Return: on success 1, else 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

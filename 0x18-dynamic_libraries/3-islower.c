#include "main.h"

/**
 * _islower - entry point
 *
 * @c: contains value to be compared
 * Description: checks lower case
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

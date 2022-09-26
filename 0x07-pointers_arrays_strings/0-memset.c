#include "main.h"

/**
 * _memset - function to fill memory with a constant byte.
 * @s: pointer to string which is being tested.
 * @b: constant byte to use for the filling
 * @n: first n bytes of pointer *s which is to be filled with
 * byte/character b.
 * Return: pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

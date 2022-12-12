#include "main.h"

/**
 * _strlen - function to return the length of a string.
 *
 * @s: array to be worked upon
 *
 * Return: 0 Always.
 */
int _strlen(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	return (c);
}

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
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		count = count + 1;
	}
	return (count);
}

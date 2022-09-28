#include "main.h"

/**
 * _strchr - function to locate a character in a string.
 * @s: string to be searched.
 * @c: needed character for the search.
 * Return: pointer s at point *(s + i) == c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}

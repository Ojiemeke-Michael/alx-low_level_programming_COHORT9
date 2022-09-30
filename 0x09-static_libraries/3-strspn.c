#include "main.h"

/**
 * _strspn - function to get the length of a prefixed substring
 * @s: string to be searched for the prefixed substring
 * @accept: string that contains the criteria for the search
 * Return: unsigned integer "length"
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				length++;
				break;
			}
		}
		if (*(accept + j) == '\0')
		{
			break;
		}
	}
	return (length);
}

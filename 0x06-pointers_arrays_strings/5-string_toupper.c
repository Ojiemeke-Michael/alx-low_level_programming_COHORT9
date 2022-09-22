#include "main.h"

/**
 * string_toupper - function to convert all lowercase character in
 * string to uppercase.
 * @p: pointer that receives the array that contains the string.
 * Return: pointer p.
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) >= 'a' && *(p + i) <= 'z')
		{
			*(p + i) -= 32;
		}
	}
	return (p);
}

#include "main.h"

/**
 * _strncat - function to concatenate two strings using at most
 * n number of bytes from source string.
 *
 * @dest: destination string for the concatenation
 * @src: source string for the concatenation
 * @n: number of character/bytes needed from the source string
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, i;
	int len1 = 0;
	int len2 = 0;

	for (a = 0; *(dest + a) != '\0'; a++)
	{
		len1++;
	}
	for (b = 0; *(src + b) != '\0'; b++)
	{
		len2++;
	}
	for (i = 0; i < n; i++)
	{
		*(dest + (len1 + i)) = *(src + i);
	}
	return (dest);
}

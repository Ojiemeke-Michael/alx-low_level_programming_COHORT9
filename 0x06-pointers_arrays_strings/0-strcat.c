#include "main.h"

/**
 * _strcat - function to append the "src" (source)
 * string to the "dest"(destination) string,
 * overwriting null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 *
 * @dest: string to be appended to i.e. destination
 * @src: string from which contents to be appended
 * are gotten i.e. source.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
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
	for (i = 0; i <= len2; i++)
	{
		*(dest + (len1 + i)) = *(src + i);
	}

	return (dest);
}

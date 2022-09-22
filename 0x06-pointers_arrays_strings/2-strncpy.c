#include "main.h"

/**
 * _strncpy - function to copy n bytes of contents of string src to string dest
 * @dest: destination string to which contents are copied
 * @src: source string from which contents are copied
 * @n: number of bytes to be copied from string src.
 *
 * Return: pointer dest after being modified by the function.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != '\0' && i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	for  (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}

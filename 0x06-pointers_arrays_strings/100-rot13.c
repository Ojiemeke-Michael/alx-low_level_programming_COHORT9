#include "main.h"

/**
 * rot13 - encodes and decodes a number using rot13 encryption
 *
 * @p: pointer p to accept the string to be encrypted
 *
 * Return: pointer p.
 */
char *rot13(char *p)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(p + i) == *(a + j))
			{
				*(p + i) = *(b + j);
			}
		}
	}

	return (p);
}

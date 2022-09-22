#include "main.h"

/**
 * cap_string - function to capitalize every word in a string.
 * @p: pointer to receive the string.
 * Return: pointer p.
 */
char *cap_string(char *p)
{
	int i, j;
	char a[] = {' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};

	for (i = 0; *(p + i) != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (p[i] == a[j])
			{
				if (p[i] >= 'a' || p[i] <= 'z')
				{
					*(p + i) -= 32;
				}
			}
		}
	}
	return (p);
}

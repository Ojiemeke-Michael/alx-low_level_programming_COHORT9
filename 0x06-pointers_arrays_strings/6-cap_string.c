#include "main.h"

/**
 * cap_string - function to capitalize every word in a string.
 * @p: pointer to receive the string.
 * Return: pointer p.
 */
char *cap_string(char *p)
{
	int i, j;
	char a[] = "

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) >= 'a' || *(p + i) <= 'z')
		{
			if (i == 0)
			{
				*(p + i) -= 32;
			}
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (*(p + i - 1) == a[j])
					{
						*(*p + i) -= 32;
					}
				}
			}
		}
	}
	return (p);
}

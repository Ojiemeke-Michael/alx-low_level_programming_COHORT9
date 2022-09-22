#include "main.h"

/**
 * leet - encodes the string with A,a for 4; E,e for 3; O,o for 0;
 * T,t for 7; and L,l for 1.
 * @p: pointer for string
 * Return: pointer p.
 */
char *leet(char *p)
{
	char a[] = "A,a,E,e,O,o,T,t,L,l";
	char b[] = "4,4,3,3,0,0,7,7,1,1";
	int i, j;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		for (j = 0; j <	10; j++)
		{
			if (*(p + i) == *(a + j))
			{
				*(p + i) = b[j];
			}
		}
	}
	return (p);
}

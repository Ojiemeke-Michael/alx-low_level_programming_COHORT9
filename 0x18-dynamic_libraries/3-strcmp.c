#include "main.h"

/**
 * _strcmp - function to compare two strings s1 and s2.
 * @s1: first pointer/string which determines the value of the return
 * @s2: second pointer/string which is used to compare to s1.
 * Return: if equal, return 0; if ascii value of s1 is unequal to that of s2,
 * return value as -ve of +ve depending on result
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int flag = 0;

	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			flag = *(s1 + i) - *(s2 + i);
			break;
		}
	}
	return (flag);
}

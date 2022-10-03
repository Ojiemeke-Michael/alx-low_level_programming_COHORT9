#include "main.h"

/**
 * str_concat - function using dynamic memory allocation
 * to concatenates two strings.
 * The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 * if NULL is passed, treat it as an empty string.
 *
 * @s1: first string to be added to the new string.
 * @s2: second string to be added to the new string.
 *
 * Return: pointer str_2 on success. NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;
	int len1, len2;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	for (i = 0; *(s1 + i) != '\0'; i++)
		len1++;

	for (i = 0; *(s2 + i) != '\0'; i++)
		len2++;

	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
		*(str + len1 + j) = *(s2 + j);

	*(str + len1 + j) = '\0';

	return (str);
}

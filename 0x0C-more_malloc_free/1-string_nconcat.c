#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL.
 * If n is greater or equal to the length of s2 then use the entire string s2.
 * if NULL is passed, treat it as an empty string
 *
 * @s1: first string in which all its contents are copied.
 * @s2: second string in which n bytes of ths contents are copied.
 *@n: number of bytes from string 2 (s2) which should be copied.
 *
 * Return: on success, return pointer to the newly allocated
 * memory. On failure, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	unsigned int len = 0;
	unsigned int sum = 0;
	unsigned int total = len + n + 1;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		len++;
	}

	for (i = 0; *(s2 + i) != '\0'; i++)
	{
		sum++;
	}

	if (n >= sum)
		n = sum;

	ptr = malloc(total * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(ptr + i) = *(s1 + i);
	}

	for (j = 0; j < n; j++)
	{
		*(ptr + len + j) = *(s2 + j);
	}

	*(ptr + len + j) = '\0';

	return (ptr);
}

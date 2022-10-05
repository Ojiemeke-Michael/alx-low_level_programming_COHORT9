#include "main.h"

/**
 * _strdup - function using dynamic memory allocation that returns
 * a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * @str: string from which its contents are copied into pointer ptr.
 *
 * Return: returns  pointer ptr on success, returns NULL on failure.
 */
char *_strdup(char *str)
{
	char *ptr;
	int len;
	int i;

	len = 0;
	for (i = 0; *(str + i) != '\0'; i++)
		len++;

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}

	*(ptr + i) = '\0';
	return (ptr);
}

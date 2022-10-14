#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * If separator is NULL, don’t print it.
 * If one of the string is NULL, print (nil) instead.
 * Print a new line at the end of your function.
 *
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int y, m;
	va_list printString;
	char *j;

	if (n > 0)
	{
		va_start(printString, n);
		for (i = 0; i < n; i++)
		{

			j = va_arg(printString, char *);

			if (j == NULL)
				printf("(nil)");
			else
			{
				for (y = 0; *(j + y) != '\0'; y++)
					printf("%c", *(j + y));
			}

			if (i == n - 1)
			{
				printf("\n");
				break;
			}

			if (separator != NULL)
			{
				for (m = 0; *(separator + m) != '\0'; m++)
					printf("%c", *(separator + m));
			}
		}
	}
	va_end(printString);

	if (n <= 0)
		printf("\n");
}



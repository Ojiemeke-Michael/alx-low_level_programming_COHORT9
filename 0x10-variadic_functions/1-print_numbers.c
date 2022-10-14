#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers,
 * followed by a new line using variadic functons.
 * If separator is NULL, don’t print it.
 * Print a new line at the end of your function.
 *
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j, m;
	va_list printNum;

	m = 0;

	if (n > 0)
	{
		va_start(printNum, n);
		for (i = 0; i < n; i++)
		{
			j = va_arg(printNum, int);
			printf("%d", j);

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

	va_end(printNum);

	if (n <= 0)
		putchar('\n');

}

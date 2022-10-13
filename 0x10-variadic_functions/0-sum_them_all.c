#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of  all its
 * parametes using variadic functions.
 *
 * @n: the number of arguments in the va_list.
 * Return: on success, the sum of the parameters after n.
 * on failure; 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list sumAll;

	sum = 0;
	if (n > 0)
	{
		va_start(sumAll, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(sumAll, int);
		}

		return (sum);
	}

	va_end(sumAll);

	return (0);
}

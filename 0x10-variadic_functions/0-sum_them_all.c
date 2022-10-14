#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: constant unsigned int
 * Return: 0 if n is 0, sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	if (n <= 0)
		return (0);

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; ++i)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}


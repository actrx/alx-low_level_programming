#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: constant unsigned int
 * Return: Always 0 if n is 0, .
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; ++i)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);

}


#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: constant unsigned int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n); // initializing the argument list
	for (i = 0; i < n - 1; i++)
		if (i != n - 1 && separator)
			printf("%s", separator);
	va_end(ap);
	_putchar('\n');
}

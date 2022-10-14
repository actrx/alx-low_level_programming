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

	if (separator != NULL)
	{
		va_start(ap, n); // initializing the argument list
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(ap, int), separator);
		printf("%d", va_arg(ap, int));
		va_end(ap);
		_putchar('\n');
	}
}

#include "variadic_functions.h"

/**
 * print_numbers - print variable count of numbers passed in, with separator
 * @separator: string to separate the numbers
 * @n: number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (!separator)
		separator = "";
	for (i = 0; i < n; i++)
		printf("%i%s", va_arg(ap, int),
			       (i == n - 1) ? "\n" : separator);

	va_end(ap);
}

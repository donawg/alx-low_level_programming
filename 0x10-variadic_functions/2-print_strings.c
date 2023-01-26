#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by a sep
 * @separator: separating strings for what's being printed
 * @n: number of strings to prints
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);
	if (!separator)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		printf("%s%s", s ? s : "(nil)",
			       (i == n - 1) ? "\n" : separator);
	}

	va_end(ap);
}

#include "variadic_functions.h"

/**
 * sum_them_all - sums all the values passed in
 * @n: number of values to sum
 *
 * Return: sum of values
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
       	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

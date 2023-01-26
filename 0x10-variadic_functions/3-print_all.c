#include "variadic_functions.h"

/**
 * print_c - prints a char
 * @arg: arg to print
 */
void print_c(void *arg)
{
	printf("%c", *((char *) arg));
}

/**
 * print_i - prints a int
 * @arg: arg to print
 */
void print_i(void *arg)
{
	printf("%i", *((int *) arg));
}

/**
 * print_f - prints a float
 * @arg: arg to print
 */
void print_f(void *arg)
{
	printf("%f", *((float *) arg));
}

/**
 * print_s - prints a string, or (nil) if NULL
 * @arg: arg to print
 */
void print_s(void *arg)
{
	char *str;

	str = (char *) arg;
	if (!str)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything yeah?
 * @format: list of format specifiers for printing each argument
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned long i, size;
	int j;
	char frmt;
	op_t ops[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s}
	};

	printf("point A\n");
	va_start(ap, format);
	size = sizeof(format) - 1;
	i = 0;
	j = 0;
	printf("point B\n");

	while (i < size)
	{
		printf("i: %lu\n", i);
		frmt = format[i];
		while (j < 4)
		{
			printf(" j: %d\n", j);
			if (ops[j].code == frmt)
			{
				ops[j].func(va_arg(ap, void *));
				j = 0;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}

	va_end(ap);
}

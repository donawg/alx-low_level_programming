#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: suggested starting point for count
 */
void print_to_98(int n)
{
	if (n < 0)
		n = 0;
	while (n < 99)
	{
		printf("%d", n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}

		n++;
	}
}

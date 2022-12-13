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
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d\n", n);
}

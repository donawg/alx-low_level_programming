#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 98 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	long double nn;
	long double p = 1, n = 2;
	int c = 2;

	printf("1, 2, ");

	while (c < 98)
	{
		nn = p + n;
		p = n;
		n = nn;

		printf("%.0Lf", nn);
		if (c != 97)
			printf(", ");
		else
			putchar('\n');

		c++;
	}
	return (0);
}

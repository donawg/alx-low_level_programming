#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 100 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	unsigned long nn;
	unsigned long p = 1, n = 2;
	int c = 2;

	printf("1, 2, ");

	while (c < 100)
	{
		nn = p + n;
		p = n;
		n = nn;

		printf("%lu", nn);
		if (c != 99)
			printf(", ");
		else
			putchar('\n');

		c++;
	}
	return (0);
}

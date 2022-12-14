#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	long long int nn;
	long long int p = 1, n = 2;
	int c = 2;

	printf("1, 2, ");

	while (c <= 50)
	{
		nn = p + n;
		p = n;
		n = nn;

		printf("%lld", nn);
		if (c != 50)
			printf(", ");
		else
			putchar('\n');

		c++;
	}
	return (0);
}

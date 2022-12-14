#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of the even numbered terms in a fobonacci sequence
 *
 * Description: Fibonacci seuqnce end with 4,000,000
 * and starts with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	unsigned long sum = 0;
	unsigned long p = 1, n = 2, nn = 3;

	const unsigned long LIMIT = 4000000;

	while (n <= LIMIT)
	{
		if (n % 2 == 0)
			sum += n;

		nn = p + n;
		p = n;
		n = nn;
	}

	printf("%lu\n", sum);

	return (0);
}

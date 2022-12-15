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
	unsigned long nn0 = 0, nn1 = 0;
	unsigned long p0 = 0, p1 = 1, n0 = 0, n1 = 2;
	unsigned long C_LIMIT = 1000000000000000;
	int optional_zero = 0;
	int c = 2;

	printf("1, 2, ");

	while (c < 98)
	{
		if (optional_zero)
			optional_zero = 0;
		nn0 = p0 + n0;
		nn1 = p1 + n1;
		if (nn1 >= C_LIMIT)
		{
			nn0 += (nn1 / C_LIMIT);
			nn1 %= C_LIMIT;
			if (nn1 < (C_LIMIT / 10))
				optional_zero = 1;
		}
		p0 = n0;
		p1 = n1;
		n0 = nn0;
		n1 = nn1;
		if (nn0 && optional_zero)
			printf("%lu0%lu", nn0, nn1);
		else if (nn0)
			printf("%lu%lu", nn0, nn1);
		else
			printf("%lu", nn1);
		if (c != 97)
			printf(", ");
		else
			putchar('\n');
		c++;
	}
	return (0);
}

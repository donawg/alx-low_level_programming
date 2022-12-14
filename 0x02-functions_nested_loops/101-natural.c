#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of all the factors of 3 and 5
 * randing to numbers up to but not including 1024
 *
 * Retusn: 0.
 */
int main(void)
{
	int sum;
	int i = 1;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}

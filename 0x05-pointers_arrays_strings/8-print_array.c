#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the first n elements of an array of ints
 * @a: array to print from
 * @n: number of elemnets to print
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d, ", *(a + i));
			else
				printf("%d\n", *(a + i));
		}
	else
		printf("\n");
}

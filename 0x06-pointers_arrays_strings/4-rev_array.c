#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;
	while (j > i)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		j--;
		i++;
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - forms an array of integers from some number to another
 * @min: starting num
 * @max: ending num
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	array = malloc(sizeof(int) * size);

	if (!array)
		return (NULL);
	i = 0;

	while (i < size)
	{
		*(array + i) = min + i;
		i++;
	}

	return (array);
}

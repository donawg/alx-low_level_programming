#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *array;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(array + i) = 0;
	return (array);
}

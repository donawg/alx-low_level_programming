#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array with all items being a specific char
 * @size: size of array
 * @c: char to set all array items to
 *
 * Return: Pointer to array. Or NULL if fail.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (!size)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		*(array + i) = c;
	return (array);
}

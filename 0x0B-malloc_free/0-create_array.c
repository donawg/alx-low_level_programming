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
	int i;

	if (!size)
		return ('\0');
	array = malloc(sizeof(char) * size);
	if (!array)
		return ('\0');

	for (i = 0; i < size; i++)
		*(array + i) = c;
	return (array);
}

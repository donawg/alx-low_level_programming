#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function on each elemnt of an array
 * @array: elements to execute function on
 * @size: size of array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}

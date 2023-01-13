#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates memory block
 * @ptr: memory to be reallocated
 * @old_size: size of memory previously
 * @new_size: new size of memory
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i, copy_size;

	if (old_size == new_size)
		return (ptr);
	if (!ptr)
	{
		if (new_size)
			return (malloc(new_size));
		else
			return (NULL);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	copy_size = old_size < new_size ? old_size : new_size;
	new_ptr = malloc(new_size);
	for (i = 0; i < copy_size; i++)
		*((char *) new_ptr + i) = *((char *) ptr);
	free(ptr);

	return (new_ptr);
}

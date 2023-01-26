#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: list to count
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t s;

	s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}

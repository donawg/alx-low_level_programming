#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t list
 * @h: head of list
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}

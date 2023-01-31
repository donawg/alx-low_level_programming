#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements in listint_t list
 * @h: head of list
 *
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (size);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements in a list_t list
 * @h: list to print from
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s;

	s = 0;

	while (h)
	{
		s++;
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}

	return (s);
}

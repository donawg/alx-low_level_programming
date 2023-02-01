#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints all the elements in listint_t list with address
 * @head: head of list
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size, i;
	listint_t *found, *search;

	size = 0;
	found = NULL;

	while (head)
	{
		if (!found)
		{
			found = malloc(sizeof(listint_t));
			if (!found)
				exit(98);
			found->next = (listint_t *) head;
		}
		else
		{
			i = 0;
			search = found->next;
			while (i < size)
			{
				if (search == (listint_t *) head)
					return (size);
				search = search->next;
				i++;
			}
		}
		size++;
		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
	}
	return (size);
}

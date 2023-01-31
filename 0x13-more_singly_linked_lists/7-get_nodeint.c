#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: head of list
 * @index: nth node to return in linked list
 *
 * Return: node at n, or 0 if unreachable
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *curr;

	curr = head;
	i = 0;
	while (curr)
	{
		if (i == index)
			return (curr);
		i++;
		curr = curr->next;
	}

	return (NULL);
}

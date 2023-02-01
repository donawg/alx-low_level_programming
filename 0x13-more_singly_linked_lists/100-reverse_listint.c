#include "lists.h"

/**
 * reverse_listint - reverses a listint
 * @head: pointer to head
 *
 * Return: new listint_t head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	prev = NULL;
	curr = *head;

	while (1)
	{
		if (prev)
		{
			*head = curr->next;
			curr->next = prev;
			prev = curr;
			curr = *head;
		}
		else
		{
			*head = curr->next;
			prev = curr;
			curr = *head;
			prev->next = NULL;
		}
		if (!(curr->next))
		{
			if (prev)
				curr->next = prev;
			return (*head);
		}
	}
}

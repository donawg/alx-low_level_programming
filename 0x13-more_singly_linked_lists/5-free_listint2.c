#include "lists.h"

/**
 * free_listint2 - frees listint_t list and sets head to NULL
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *next;

	curr = *head;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}

	*head = NULL;
}

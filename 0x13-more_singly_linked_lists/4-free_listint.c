#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	next = head;
	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

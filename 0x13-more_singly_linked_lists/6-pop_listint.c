#include "lists.h"

/**
 * pop_listint - removes first node in listint_t list and returns head's hata
 * @head: pointer to head of list
 *
 * Return: member data of first element of list, or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int n;

	if (!(*head))
		return (0);
	curr = *head;
	n = curr->n;
	*head = curr->next;
	free(curr);

	return (n);
}

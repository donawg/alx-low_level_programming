#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in listint_t list at index
 * @head: pointer to head
 * @index: index of element to delete
 *
 * Return: 1 if success; -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *next;
	unsigned int i;

	if (!(*head))
		return (-1);

	i = 0;
	next = *head;

	while (index != i)
	{
		curr = next;
		next = curr->next;
		i++;
		if (!next && i != index)
			return (-1);
	}
	if (index)
		curr->next = next->next;
	else
		*head = next->next;

	free(next);
	return (1);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at position in listint_t list
 * @head: pointer to head of node
 * @idx: index to insert node at
 * @n: data of node
 *
 * Return: address of node, or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *curr, *next;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	next = *head;
	while (i != idx)
	{
		curr = next;
		i++;
		next = next->next;
		if (!next && i != idx)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = next;
	if (idx)
		curr->next = node;
	else
		*head = node;

	return (node);
}

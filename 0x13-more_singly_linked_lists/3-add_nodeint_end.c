#include "lists.h"

/**
 * add_nodeint_end - adds a node to end of listint_t list
 * @head: pointer to head of list
 * @n: number for new node's member
 *
 * Return: address of new node or NULL if failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *curr;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	curr = *head;
	if (!curr)
	{
		*head = node;
	}
	else
	{
		while (curr->next)
			curr = curr->next;
		curr->next = node;
	}

	return (node);
}

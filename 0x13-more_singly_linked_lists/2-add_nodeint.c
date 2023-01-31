#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of listint_t list
 * @head: pointer to head of list
 * @n: num for new node's member
 *
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}

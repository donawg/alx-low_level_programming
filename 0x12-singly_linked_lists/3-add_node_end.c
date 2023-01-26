#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the end of a list_t list
 * @head: pointer to head of linked list
 * @str: string to add
 *
 * Return: pointer to linked list with new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *pointer;
	int i;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		continue;
	new_node->len = i;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		pointer = *head;
		while (pointer->next)
			pointer = pointer->next;
		pointer->next = new_node;
	}

	return (*head);
}

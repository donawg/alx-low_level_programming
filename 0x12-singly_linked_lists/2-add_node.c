#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to the beginning of a list_t list
 * @head: pointer to head of linked list
 * @str: string to add
 *
 * Return: pointer to linked list with new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		continue;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

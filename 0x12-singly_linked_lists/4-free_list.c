#include "lists.h"

/**
 * free_list - frees up a list_t list
 * @head: head of list
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}

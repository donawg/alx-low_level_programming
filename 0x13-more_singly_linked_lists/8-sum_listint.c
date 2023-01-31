#include "lists.h"

/**
 * sum_listint - returns sum of all data in listint_t linked list
 * @head: head of list
 *
 * Return: sum of data members, and 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curr;

	sum = 0;
	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: Sum of all the data (n) of the linked list, or 0 if the list isempty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

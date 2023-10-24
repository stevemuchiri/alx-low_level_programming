#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: Number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		nodes_count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes_count);
}

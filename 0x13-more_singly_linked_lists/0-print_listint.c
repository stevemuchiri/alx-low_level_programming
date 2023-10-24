#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: A pointer to the  head of the list.
 *
 * Return: The number of  nodes in a  list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		nodes_count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes_count);
}

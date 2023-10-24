#include "lists.h"

/**
 * print_listint - returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: Number ofelements in the linked list_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}

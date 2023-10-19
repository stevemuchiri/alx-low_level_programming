#include "lists.h"

/**
 * list_len - Finds the number of elements in a linked list.
 * @h: The linked list_t list.
 * Return: number of elements h.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

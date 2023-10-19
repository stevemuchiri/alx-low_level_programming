#include "lists.h"

/**
 * print_list - Prints all  element  of  a srting.
 *
 * @h: singly linked list.
 * Return: the  number   of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			print("[%d] %s\n", 0, "(nil)");
		else
			print("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

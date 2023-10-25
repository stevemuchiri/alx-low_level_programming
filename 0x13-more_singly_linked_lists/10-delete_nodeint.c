#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specified index in  list.
 * @head: A pointer to the pointer to the head of the list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: 1 if the deletion succeeded, -1 if it failed (e.g.,
 * if it doesn't exist).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int nod;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (nod = 0; nod < (index - 1); nod++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}

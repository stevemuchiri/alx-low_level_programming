#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes in list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *temp, *tmp;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	tmp = (head->next)->next;

	while (tmp)
	{
		if (temp == tmp)
		{
			temp = head;
			while (temp != tmp)
			{
				nodes++;
				temp = tmp->next;
				tmp = tmp->next;
			}

			temp = temp->next;
			while (temp != tmp)
			{
				nodes++;
				temp = temp->next;
			}

			return (nodes);
		}

		temp = temp->next;
		tmp = (tmp->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list safely 
 * @h: A pointer to the head of the listint_t list. *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}

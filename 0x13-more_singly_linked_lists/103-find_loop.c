#include "lists.h"

/**
 * find_listint_loop - looks the loop contained in linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *tmp;

	if (head == NULL || head->next == NULL)
		return (NULL);

	temp = head->next;
	tmp = (head->next)->next;

	while (tmp)
	{
		if (temp == tmp)
		{
			temp = head;

			while (temp != tmp)
			{
				temp = temp->next;
				tmp = tmp->next;
			}

			return (temp);
		}

		temp = temp->next;
		tmp = (tmp->next)->next;
	}

	return (NULL);
}

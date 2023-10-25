#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @head: pointer to the head of  the linked list
 * @index: index of the node to be deleted
 * Return: 1 on success | -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *prev_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		h = *head;
		*head = (*head)->next;
		free(h);
		return (1);
	}

	h = *head;

	while (h)
	{
		if (i == index)
		{
			prev_node->next = h->next;
			free(h);
			return (1);
		}
		i++;
		prev_node = h;
		h = h->next;
	}

	return (-1);
}

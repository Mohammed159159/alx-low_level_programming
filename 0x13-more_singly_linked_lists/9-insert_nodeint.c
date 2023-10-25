#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the head of the linked list
 * @idx: index where the new node should be added
 * @n: node data
 * Return: address of the new node | NULL on failure
 * failure occurs when no new it is not possible to add the new node
 * at position idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *h;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !*head || !head)
		return (NULL);

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	h = *head;

	for (i = 0; i < idx - 1; i++)
	{
		*head = (*head)->next;

		if (!*head)
			return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head)->next;
	(*head)->next = new_node;

	*head = h;

	return (new_node);
}

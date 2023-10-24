#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: value of the new node
 * Return: the address of the new element | NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	h = *head;
	new_node->next = NULL;
	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (h->next)
		h = h->next;
	h->next = new_node;

	return (new_node);
}

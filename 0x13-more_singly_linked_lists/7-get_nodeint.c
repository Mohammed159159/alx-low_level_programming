#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t where
 * the index of nodes starts at 0
 * @head: head of the linked list
 * @index: index of the node
 * Return: nth node | NULL if no node is found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
		head = head->next;

	return (head);
}

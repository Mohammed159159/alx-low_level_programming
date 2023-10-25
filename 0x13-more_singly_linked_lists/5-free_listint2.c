#include "lists.h"

/**
 * free_listint2 - free linked list by setting the head to null
 * @head: pointer to the head of the linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *h, *node;

	if (!head)
		return;

	h = *head;
	*head = NULL;
	
	while (h)
	{
		node = h;
		h = h->next;
		free(node);
	}
}

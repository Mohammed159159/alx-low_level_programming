#include "lists.h"

/**
 * free_listint - free given linkded list
 * @head: head of the linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}

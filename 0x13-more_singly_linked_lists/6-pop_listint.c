#include "lists.h"

/**
 * pop_listint - delete the head node of listint_t
 * @head: pointer to the head node
 * Return: data of the head node (n) | 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	if (!head | !*head)
		return (0);

	n = (*head)->n;
	h = *head;
	*head = h->next;
	free(h);
	return (n);
}

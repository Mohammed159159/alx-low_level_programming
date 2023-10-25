#include "lists.h"

/**
 * sum_listint - sum all of the data (n) of the linked list
 * @head: head of the linked list
 * Return: sum of all of the data (n) | 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

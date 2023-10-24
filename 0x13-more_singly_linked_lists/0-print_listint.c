#include "lists.h"

/**
 * print_listint - print all elements of a singly linked list
 * @h: pointer to the first element of the linked list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}

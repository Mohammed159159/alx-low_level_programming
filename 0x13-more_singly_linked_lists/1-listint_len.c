#include "lists.h"

/**
 * listint_len - calculate the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}

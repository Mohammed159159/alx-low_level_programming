#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of a linked list
 * @head: pointer to the head node
 * @n: value of the new node
 * Return: memory address of the new element | NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!h || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head)
		new_node->next = *head;
	*head = new_node;

	return (new_node);
}

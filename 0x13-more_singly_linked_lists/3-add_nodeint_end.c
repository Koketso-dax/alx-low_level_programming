#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: ptr to head of list
 * @n: number element to add
 * Return: ptr to added node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->next = NULL;
	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	curr = *head;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	curr->next = node;
	return (node);
}

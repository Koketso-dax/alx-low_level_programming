#include "lists.h"
/**
 * pop_listint - pops active node and returns its data
 * @head: ptr to head node
 * Return: Data stored in node (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	node = *head;
	*head = node->next;
	n = node->n;
	free(node);
	return (n);
}

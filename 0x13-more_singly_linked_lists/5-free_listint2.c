#include "lists.h"
/**
 * free_listint2 - will free list chain
 * @head: head of node chain
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
}

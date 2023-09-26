#include "lists.h"
/**
 * insert_nodeint_at_index - will insert new node at specific index
 * @head: ptr to first node
 * @idx: index to insert at
 * @n: number to insert
 * Return: Address of new node or NULL on fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
	{
		return (0);
	}

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (0);
	}
	node->n = n;

	if (idx == 0 || *head == NULL)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	temp = *head;

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(node);
		return (0);
	}

	node->next = temp->next;
	temp->next = node;
	return (node);
}

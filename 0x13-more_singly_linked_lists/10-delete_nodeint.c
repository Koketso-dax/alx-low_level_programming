#include "lists.h"
/**
 * delete_nodeint_at_index - will delete node of given idx
 * @head: ptr to first node
 * @index: Index of node to delete
 * Return: 1 on success. -1 on fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *next;
	unsigned int x;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	curr = *head;
	for (x = 0; x < index; x++)
	{
		if (curr->next == NULL)
		{
			return (-1);
		}
		curr = curr->next;
	}

	next = curr->next;
	curr->next = next->next;
	free(next);
	return (1);
}

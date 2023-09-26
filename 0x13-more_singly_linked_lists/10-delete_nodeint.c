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

	if (!head || *head == NULL)
	{
		return (-1);
	}
	
	curr = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	for (x = 0; x < (index - 1); x++)
	{
		curr = curr->next;
		if (curr == NULL)
		{
			return (-1);
		}
	}

	next = curr->next;
	curr->next = next->next;
	free(next);
	return (1);
}

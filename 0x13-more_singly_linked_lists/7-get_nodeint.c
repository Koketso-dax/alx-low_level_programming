#include "lists.h"
/**
 * get_nodeint_at_index - will return nth node in a list
 * @head: head node
 * @index: index of element node to return
 * Return: listint_t node ptr or NULL on fail.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
	{
		return (0);
	}

	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}

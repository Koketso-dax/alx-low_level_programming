#include "lists.h"
/**
 * add_nodeint - will add new node to beginning of list
 * @head: head of current node chain
 * n: number to add to list.
 * Return: address of newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	
	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return *(head);
}

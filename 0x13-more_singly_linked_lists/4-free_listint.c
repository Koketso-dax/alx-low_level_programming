#include "lists.h"
/**
 * free_listint - will delete a linked list from mem
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *node_t, *node_t2;

	node_t = head;
	while (node_t != NULL)
	{
		node_t2 = node_t->next;
		free(node_t);
		node_t = node_t2;
	}
}
